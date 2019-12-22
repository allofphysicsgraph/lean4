/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import Init.Lean.Elab.Alias
import Init.Lean.Elab.Log
import Init.Lean.Elab.ResolveName
import Init.Lean.Elab.Term
import Init.Lean.Elab.TermBinders

namespace Lean
namespace Elab
namespace Command

structure Context :=
(fileName : String)
(fileMap  : FileMap)

structure Scope :=
(kind          : String)
(header        : String)
(opts          : Options := {})
(currNamespace : Name := Name.anonymous)
(openDecls     : List OpenDecl := [])
(univNames     : List Name := [])
(varDecls      : Array Syntax := #[])

instance Scope.inhabited : Inhabited Scope := ⟨{ kind := "", header := "" }⟩

structure State :=
(env      : Environment)
(messages : MessageLog := {})
(cmdPos   : String.Pos := 0)
(scopes   : List Scope := [{ kind := "root", header := "" }])

instance State.inhabited : Inhabited State := ⟨{ env := arbitrary _ }⟩

def mkState (env : Environment) (messages : MessageLog := {}) (opts : Options := {}) : State :=
{ env := env, messages := messages, scopes := [{ kind := "root", header := "", opts := opts }] }

abbrev CommandElabM := ReaderT Context (EStateM Exception State)
abbrev CommandElab  := SyntaxNode → CommandElabM Unit

instance CommandElabM.monadLog : MonadLog CommandElabM :=
{ getCmdPos   := do s ← get; pure s.cmdPos,
  getFileMap  := do ctx ← read; pure ctx.fileMap,
  getFileName := do ctx ← read; pure ctx.fileName,
  logMessage  := fun msg => modify $ fun s => { messages := s.messages.add msg, .. s } }

abbrev CommandElabTable := SMap SyntaxNodeKind CommandElab
def mkBuiltinCommandElabTable : IO (IO.Ref CommandElabTable) := IO.mkRef {}
@[init mkBuiltinCommandElabTable] constant builtinCommandElabTable : IO.Ref CommandElabTable := arbitrary _

def addBuiltinCommandElab (k : SyntaxNodeKind) (declName : Name) (elab : CommandElab) : IO Unit := do
m ← builtinCommandElabTable.get;
when (m.contains k) $
  throw (IO.userError ("invalid builtin command elaborator, elaborator for '" ++ toString k ++ "' has already been defined"));
builtinCommandElabTable.modify $ fun m => m.insert k elab

def declareBuiltinCommandElab (env : Environment) (kind : SyntaxNodeKind) (declName : Name) : IO Environment :=
let name := `_regBuiltinCommandElab ++ declName;
let type := mkApp (mkConst `IO) (mkConst `Unit);
let val  := mkAppN (mkConst `Lean.Elab.Command.addBuiltinCommandElab) #[toExpr kind, toExpr declName, mkConst declName];
let decl := Declaration.defnDecl { name := name, lparams := [], type := type, value := val, hints := ReducibilityHints.opaque, isUnsafe := false };
match env.addAndCompile {} decl with
-- TODO: pretty print error
| Except.error _ => throw (IO.userError ("failed to emit registration code for builtin command elaborator '" ++ toString declName ++ "'"))
| Except.ok env  => IO.ofExcept (setInitAttr env name)

@[init] def registerBuiltinCommandElabAttr : IO Unit :=
registerAttribute {
 name  := `builtinCommandElab,
 descr := "Builtin command elaborator",
 add   := fun env declName arg persistent => do {
   unless persistent $ throw (IO.userError ("invalid attribute 'builtinCommandElab', must be persistent"));
   kind ← syntaxNodeKindOfAttrParam env `Lean.Parser.Command arg;
   match env.find? declName with
   | none  => throw "unknown declaration"
   | some decl =>
     match decl.type with
     | Expr.const `Lean.Elab.Command.CommandElab _ _ => declareBuiltinCommandElab env kind declName
     | _ => throw (IO.userError ("unexpected command elaborator type at '" ++ toString declName ++ "' `CommandElab` expected"))
 },
 applicationTime := AttributeApplicationTime.afterCompilation
}

abbrev CommandElabAttribute := ElabAttribute CommandElabTable
def mkCommandElabAttribute : IO CommandElabAttribute := mkElabAttribute `commandTerm "command" builtinCommandElabTable
@[init mkCommandElabAttribute] constant commandElabAttribute : CommandElabAttribute := arbitrary _

def elabCommand (stx : Syntax) : CommandElabM Unit :=
stx.ifNode
  (fun n => do
    s ← get;
    let tables := commandElabAttribute.ext.getState s.env;
    let k := n.getKind;
    match tables.find? k with
    | some elab => elab n
    | none      => throwError stx ("command '" ++ toString k ++ "' has not been implemented"))
  (fun _ => throwError stx ("unexpected command"))

private def mkTermContext (ctx : Context) (s : State) : Term.Context :=
let scope := s.scopes.head!;
{ config         := { opts := scope.opts, foApprox := true, ctxApprox := true, quasiPatternApprox := true, isDefEqStuckEx := true },
  fileName       := ctx.fileName,
  fileMap        := ctx.fileMap,
  cmdPos         := s.cmdPos,
  currNamespace  := scope.currNamespace,
  univNames      := scope.univNames,
  openDecls      := scope.openDecls }

private def mkTermState (s : State) : Term.State :=
{ env      := s.env,
  messages := s.messages }

private def getVarDecls (s : State) : Array Syntax :=
s.scopes.head!.varDecls

private def toCommandResult {α} (ctx : Context) (s : State) (result : EStateM.Result Term.Exception Term.State α) : EStateM.Result Exception State α :=
match result with
| EStateM.Result.ok a newS                            => EStateM.Result.ok a { env := newS.env, messages := newS.messages, .. s }
| EStateM.Result.error (Term.Exception.error ex) newS => EStateM.Result.error ex { env := newS.env, messages := newS.messages, .. s }
| EStateM.Result.error Term.Exception.postpone newS   => unreachable!

@[inline] def runTermElabM {α} (x : TermElabM α) : CommandElabM α :=
fun ctx s => toCommandResult ctx s $ Term.tracingAtPos s.cmdPos (Term.elabBinders (getVarDecls s) (fun _ => x)) (mkTermContext ctx s) (mkTermState s)

def dbgTrace {α} [HasToString α] (a : α) : CommandElabM Unit :=
_root_.dbgTrace (toString a) $ fun _ => pure ()

def getEnv : CommandElabM Environment := do
s ← get; pure s.env

def setEnv (newEnv : Environment) : CommandElabM Unit :=
modify $ fun s => { env := newEnv, .. s }

def getScope : CommandElabM Scope := do
s ← get; pure s.scopes.head!

def getOptions : CommandElabM Options := do
scope ← getScope; pure scope.opts

def getCurrNamespace : CommandElabM Name := do
scope ← getScope; pure scope.currNamespace

private def addScope (kind : String) (header : String) (newNamespace : Name) : CommandElabM Unit :=
modify $ fun s => {
  env    := s.env.registerNamespace newNamespace,
  scopes := { kind := kind, header := header, currNamespace := newNamespace, .. s.scopes.head! } :: s.scopes,
  .. s }

private def addScopes (kind : String) (updateNamespace : Bool) : Name → CommandElabM Unit
| Name.anonymous => pure ()
| Name.str p header _ => do
  addScopes p;
  currNamespace ← getCurrNamespace;
  addScope kind header (if updateNamespace then currNamespace ++ header else currNamespace)
| _ => unreachable!

@[builtinCommandElab «namespace»] def elabNamespace : CommandElab :=
fun n => do
  let header := n.getIdAt 1;
  addScopes "namespace" true header

@[builtinCommandElab «section»] def elabSection : CommandElab :=
fun n => do
  let header? := (n.getArg 1).getOptionalIdent;
  match header? with
  | some header => addScopes "section" false header
  | none        => do currNamespace ← getCurrNamespace; addScope "section" "" currNamespace

def getScopes : CommandElabM (List Scope) := do
s ← get; pure s.scopes

private def checkAnonymousScope : List Scope → Bool
| { header := "", .. } :: _   => true
| _                           => false

private def checkEndHeader : Name → List Scope → Bool
| Name.anonymous, _                             => true
| Name.str p s _, { header := h, .. } :: scopes => h == s && checkEndHeader p scopes
| _,              _                             => false

@[builtinCommandElab «end»] def elabEnd : CommandElab :=
fun n => do
  let header? := (n.getArg 1).getOptionalIdent;
  let endSize := match header? with
    | none   => 1
    | some n => n.getNumParts;
  scopes ← getScopes;
  if endSize < scopes.length then
    modify $ fun s => { scopes := s.scopes.drop endSize, .. s }
  else do {
    -- we keep "root" scope
    modify $ fun s => { scopes := s.scopes.drop (s.scopes.length - 1), .. s };
    throwError n.val "invalid 'end', insufficient scopes"
  };
  match header? with
  | none        => unless (checkAnonymousScope scopes) $ throwError n.val "invalid 'end', name is missing"
  | some header => unless (checkEndHeader header scopes) $ throwError n.val "invalid 'end', name mismatch"

@[specialize] def modifyScope (f : Scope → Scope) : CommandElabM Unit :=
modify $ fun s =>
  { scopes := match s.scopes with
    | h::t => f h :: t
    | []   => unreachable!,
    .. s }

def getUniverseNames : CommandElabM (List Name) := do
scope ← getScope; pure scope.univNames

def addUniverse (idStx : Syntax) : CommandElabM Unit := do
let id := idStx.getId;
univs ← getUniverseNames;
if univs.elem id then
  throwError idStx ("a universe named '" ++ toString id ++ "' has already been declared in this Scope")
else
  modifyScope $ fun scope => { univNames := id :: scope.univNames, .. scope }

@[builtinCommandElab «universe»] def elabUniverse : CommandElab :=
fun n => do
  addUniverse (n.getArg 1)

@[builtinCommandElab «universes»] def elabUniverses : CommandElab :=
fun n => do
  let idsStx := n.getArg 1;
  idsStx.forArgsM addUniverse

@[builtinCommandElab «init_quot»] def elabInitQuot : CommandElab :=
fun stx => do
  env ← getEnv;
  match env.addDecl Declaration.quotDecl with
  | Except.ok env   => setEnv env
  | Except.error ex => do
    opts ← getOptions;
    throwError stx.val (ex.toMessageData opts)

def getOpenDecls : CommandElabM (List OpenDecl) := do
scope ← getScope; pure scope.openDecls

def logUnknownDecl (stx : Syntax) (declName : Name) : CommandElabM Unit :=
logError stx ("unknown declaration '" ++ toString declName ++ "'")

def resolveNamespace (id : Name) : CommandElabM Name := do
env           ← getEnv;
currNamespace ← getCurrNamespace;
openDecls ← getOpenDecls;
match Elab.resolveNamespace env currNamespace openDecls id with
| some ns => pure ns
| none    => throwErrorUsingCmdPos ("unknown namespace '" ++ toString id ++ "'")

@[builtinCommandElab «export»] def elabExport : CommandElab :=
fun stx => do
  -- `stx` is of the form (Command.export "export" <namespace> "(" (null <ids>*) ")")
  let id  := stx.getIdAt 1;
  ns ← resolveNamespace id;
  currNamespace ← getCurrNamespace;
  when (ns == currNamespace) $ throwError stx.val "invalid 'export', self export";
  env ← getEnv;
  let ids := (stx.getArg 3).getArgs;
  aliases ← ids.foldlM
   (fun (aliases : List (Name × Name)) (idStx : Syntax) => do {
      let id := idStx.getId;
      let declName := ns ++ id;
      if env.contains declName then
        pure $ (currNamespace ++ id, declName) :: aliases
      else do
        logUnknownDecl idStx declName;
        pure aliases
      })
    [];
  modify $ fun s => { env := aliases.foldl (fun env p => addAlias env p.1 p.2) s.env, .. s }

def addOpenDecl (d : OpenDecl) : CommandElabM Unit :=
modifyScope $ fun scope => { openDecls := d :: scope.openDecls, .. scope }

def elabOpenSimple (n : SyntaxNode) : CommandElabM Unit :=
-- `open` id+
let nss := n.getArg 0;
nss.forArgsM $ fun ns => do
  ns ← resolveNamespace ns.getId;
  addOpenDecl (OpenDecl.simple ns [])

-- `open` id `(` id+ `)`
def elabOpenOnly (n : SyntaxNode) : CommandElabM Unit := do
let ns  := n.getIdAt 0;
ns ← resolveNamespace ns;
let ids := n.getArg 2;
ids.forArgsM $ fun idStx => do
  let id := idStx.getId;
  let declName := ns ++ id;
  env ← getEnv;
  if env.contains declName then
    addOpenDecl (OpenDecl.explicit id declName)
  else
    logUnknownDecl idStx declName

-- `open` id `hiding` id+
def elabOpenHiding (n : SyntaxNode) : CommandElabM Unit := do
let ns := n.getIdAt 0;
ns ← resolveNamespace ns;
let idsStx := n.getArg 2;
env ← getEnv;
ids : List Name ← idsStx.foldArgsM (fun idStx ids => do
  let id := idStx.getId;
  let declName := ns ++ id;
  if env.contains declName then
    pure (id::ids)
  else do
    logUnknownDecl idStx declName;
    pure ids)
  [];
addOpenDecl (OpenDecl.simple ns ids)

-- `open` id `renaming` sepBy (id `->` id) `,`
def elabOpenRenaming (n : SyntaxNode) : CommandElabM Unit := do
let ns := n.getIdAt 0;
ns ← resolveNamespace ns;
let rs := (n.getArg 2);
rs.forSepArgsM $ fun stx => do
  let fromId   := stx.getIdAt 0;
  let toId     := stx.getIdAt 2;
  let declName := ns ++ fromId;
  env ← getEnv;
  if env.contains declName then
    addOpenDecl (OpenDecl.explicit toId declName)
  else
    logUnknownDecl stx declName

@[builtinCommandElab «open»] def elabOpen : CommandElab :=
fun n => do
  let body := (n.getArg 1).asNode;
  let k    := body.getKind;
  if k == `Lean.Parser.Command.openSimple then
    elabOpenSimple body
  else if k == `Lean.Parser.Command.openOnly then
    elabOpenOnly body
  else if k == `Lean.Parser.Command.openHiding then
    elabOpenHiding body
  else
    elabOpenRenaming body

/- We just ignore Lean3 notation declaration commands. -/
@[builtinCommandElab «mixfix»] def elabMixfix : CommandElab := fun _ => pure ()
@[builtinCommandElab «reserve»] def elabReserve : CommandElab := fun _ => pure ()
@[builtinCommandElab «notation»] def elabNotation : CommandElab := fun _ => pure ()

@[builtinCommandElab «variable»] def elabVariable : CommandElab :=
fun n => do
  -- `variable` bracktedBinder
  let binder := n.getArg 1;
  -- Try to elaborate `binder` for sanity checking
  runTermElabM $ Term.elabBinder binder $ fun _ => pure ();
  modifyScope $ fun scope => { varDecls := scope.varDecls.push binder, .. scope }

@[builtinCommandElab «variables»] def elabVariables : CommandElab :=
fun n => do
  -- `variables` bracktedBinder+
  let binders := (n.getArg 1).getArgs;
  -- Try to elaborate `binders` for sanity checking
  runTermElabM $ Term.elabBinders binders $ fun _ => pure ();
  modifyScope $ fun scope => { varDecls := scope.varDecls ++ binders, .. scope }

@[builtinCommandElab «check»] def elabCheck : CommandElab :=
fun stx => do
  let term := stx.getArg 1;
  runTermElabM $ do
    e    ← Term.elabTerm term none;
    Term.synthesizeSyntheticMVars false;
    type ← Term.inferType stx.val e;
    e    ← Term.instantiateMVars stx.val e;
    type ← Term.instantiateMVars stx.val type;
    logInfo stx.val (e ++ " : " ++ type);
    pure ()

end Command
end Elab
end Lean
