// Lean compiler output
// Module: init.lean.expander
// Imports: init.lean.parser.module init.lean.expr
#include "runtime/object.h"
#include "runtime/apply.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
extern obj* l_lean_parser_command_reserve__mixfix;
obj* l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__1;
extern obj* l_lean_parser_term_subtype;
obj* l_rbnode_find___main___at_lean_name__map_contains___spec__2(obj*, obj*, obj*, obj*, obj*);
obj* l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3(obj*);
obj* l_lean_expander_mk__simple__binder___boxed(obj*, obj*, obj*);
obj* l_lean_expander_intro__rule_transform___boxed(obj*, obj*);
obj* l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3___rarg(obj*, obj*, obj*);
extern obj* l_lean_parser_command_variables;
extern obj* l_lean_parser_term_arrow_has__view;
obj* l_rbmap_insert___main___at_lean_expander_builtin__transformers___spec__2___boxed(obj*, obj*);
obj* l_lean_expander_let_transform___closed__1;
obj* l_lean_expander_universes_transform___boxed(obj*, obj*);
obj* l_lean_expander_let_transform___boxed(obj*, obj*);
obj* l_lean_expander_binding__annotation__update_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_coe__name__ident(obj*);
obj* l_lean_expander_variable_transform___boxed(obj*, obj*);
obj* l_lean_expander_expand__bracketed__binder(obj*, obj*);
obj* l_lean_expander_sorry_transform___closed__1;
obj* l_lean_expander_expand__bracketed__binder___main___closed__13;
obj* l_id___boxed(obj*);
obj* l_lean_expander_pi_transform___lambda__1(obj*, obj*, obj*);
extern obj* l_lean_parser_term_binder__ident_has__view;
obj* l_lean_expander_if_transform___closed__1;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__4(uint8, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_command_constant_has__view;
obj* l_lean_expander_coe__simple__binder__binders(obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__19(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_assume_transform___boxed(obj*, obj*);
extern obj* l_lean_parser_level_leading_has__view;
extern obj* l_lean_parser_command_universes;
obj* l_lean_expander_get__opt__type___main___boxed(obj*);
obj* l_lean_expander_expand(obj*, obj*);
obj* l_lean_expander_expand__bracketed__binder___main___closed__2;
extern obj* l_lean_parser_command_reserve__notation_has__view;
obj* l_list_foldl___main___at_lean_expander_builtin__transformers___spec__6(obj*, obj*, obj*, obj*);
obj* l_lean_expander_if_transform(obj*, obj*);
obj* l_rbmap_find___main___at___private_init_lean_expander_2__expand__core___main___spec__2___boxed(obj*, obj*);
obj* l_lean_expander_no__expansion___boxed(obj*);
extern obj* l_lean_parser_command_declaration;
obj* l_list_map___main___at_lean_expander_intro__rule_transform___spec__1(obj*);
obj* l_lean_expander_universes_transform(obj*, obj*);
namespace lean {
obj* nat_add(obj*, obj*);
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__20___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__20(uint8, obj*, obj*, obj*, obj*);
extern obj* l_string_iterator_extract___main___closed__1;
obj* l_lean_expander_error___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__10___boxed(obj*, obj*, obj*, obj*);
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__7___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_variables_transform(obj*, obj*);
obj* l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__2;
obj* l_lean_expander_mixfix_transform___closed__2;
extern obj* l_lean_parser_command_variable;
extern obj* l_lean_parser_term_match_has__view;
obj* l_lean_expander_mixfix_transform___closed__1;
obj* l_lean_expander_coe__binders__ext___rarg(obj*, obj*);
extern obj* l_lean_parser_term_if_has__view;
extern obj* l_lean_parser_term_bracketed__binders;
obj* l_lean_parser_string__lit_has__view_x_27___lambda__1(obj*);
obj* l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__4___boxed(obj*);
obj* l_lean_expander_if_transform___closed__2;
obj* l_list_map___main___at_lean_expander_coe__binders__ext___spec__2___rarg(obj*, obj*);
obj* l_lean_expander_arrow_transform___boxed(obj*, obj*);
obj* l_lean_expander_paren_transform___boxed(obj*, obj*);
obj* l_list_map___main___at_lean_expander_universes_transform___spec__1(obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__9(obj*, obj*);
obj* l_lean_expander_coe__binders__ext(obj*);
obj* l_list_foldr1___main___at_lean_expander_paren_transform___spec__3(obj*, obj*);
obj* l_lean_parser_syntax_flip__scopes___main(obj*, obj*);
obj* l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__4(obj*);
obj* l_lean_expander_mixfix__to__notation__spec___boxed(obj*, obj*, obj*);
obj* l_lean_expander_error___rarg___lambda__1___closed__1;
obj* l_lean_expander_constant_transform___boxed(obj*, obj*);
obj* l_list_map___main___at_lean_expander_coe__binders__ext___spec__2___boxed(obj*);
obj* l_lean_expander_assume_transform___closed__1;
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__7(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
extern "C" obj* lean_name_mk_string(obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__6(obj*, obj*, obj*, obj*);
obj* l_lean_expander_binding__annotation__update_has__view;
obj* l_coe___at_lean_expander_coe__binders__ext___spec__1(obj*);
extern obj* l_lean_parser_command_mixfix_has__view;
obj* l_lean_expander_intro__rule_transform(obj*, obj*);
extern obj* l_lean_parser_command_universes_has__view;
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_expand__bracketed__binder___main___closed__6;
obj* l_list_map___main___at_lean_expander_universes_transform___spec__1___closed__1;
obj* l_lean_expander_declaration_transform___boxed(obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__3(uint8, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_subtype_transform___closed__1;
uint8 l_lean_parser_syntax_is__of__kind___main(obj*, obj*);
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__8___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_transform__m_monad;
obj* l_lean_expander_expand__binders___closed__1;
obj* l_lean_expander_expand__bracketed__binder___main___closed__4;
obj* l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__3;
obj* l_lean_expander_error___at___private_init_lean_expander_1__pop__stx__arg___spec__1___rarg___boxed(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_command_variable_has__view;
obj* l_lean_expander_arrow_transform___closed__1;
obj* l_lean_expander_error___at___private_init_lean_expander_1__pop__stx__arg___spec__1___boxed(obj*);
obj* l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(obj*);
extern obj* l_lean_parser_level_leading;
obj* l___private_init_lean_expander_1__pop__stx__arg___closed__1;
obj* l_lean_expander_mk__notation__transformer___lambda__1(obj*, obj*);
obj* l_lean_expander_mixfix_transform___closed__3;
obj* l_lean_expander_builtin__transformers;
obj* l_lean_expander_mk__simple__binder___closed__4;
obj* l_lean_expander_if_transform___closed__3;
obj* l_lean_expander_if_transform___boxed(obj*, obj*);
obj* l_lean_expander_expander__config_has__lift___boxed(obj*);
extern obj* l_lean_parser_term_pi_has__view;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__16___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_command_universe_has__view;
obj* l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1(obj*);
extern obj* l_lean_parser_ident__univs;
obj* l_list_assoc___main___at_lean_expander_mk__notation__transformer___spec__7(obj*, obj*);
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__2(obj*, obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_expander_let_transform___spec__1(obj*);
obj* l_rbmap_insert___main___at_lean_expander_builtin__transformers___spec__2___rarg(obj*, obj*, obj*);
extern obj* l_lean_parser_term_sorry;
obj* l___private_init_lean_expander_1__pop__stx__arg(obj*, obj*);
obj* l_lean_expander_reserve__mixfix_transform___closed__1;
extern obj* l_lean_parser_command_intro__rule_has__view;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__23___boxed(obj*, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__5(obj*);
extern obj* l_lean_name_to__string___closed__1;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__14___boxed(obj*, obj*, obj*, obj*);
obj* l_coe___at_lean_expander_coe__binders__ext___spec__1___rarg(obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__16(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_bracketed__binders_transform(obj*, obj*);
obj* l_except__t_monad__except___rarg(obj*);
obj* l_lean_expander_sorry_transform___boxed(obj*, obj*);
extern obj* l_lean_parser_command_variables_has__view;
obj* l_lean_expander_mk__simple__binder___closed__7;
obj* l_lean_expander_binding__annotation__update_parser___closed__1;
obj* l_lean_parser_number_view_of__nat(obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__12(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_error___at___private_init_lean_expander_2__expand__core___main___spec__1(obj*);
extern obj* l_lean_parser_term_binders_has__view;
extern obj* l_lean_parser_command_reserve__mixfix_has__view;
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__5___boxed(obj*, obj*, obj*);
obj* l_list_mmap___main___at___private_init_lean_expander_2__expand__core___main___spec__5(obj*, obj*, obj*, obj*);
obj* l_lean_expander_mixfix__to__notation__spec___closed__2;
obj* l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1___rarg(obj*, obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__15___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_join___main___rarg(obj*);
obj* l_coe___at_lean_expander_mk__notation__transformer___spec__2(obj*);
obj* l_list_mmap___main___at_lean_expander_variables_transform___spec__1___closed__1;
obj* l_lean_parser_syntax_get__pos(obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__8___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__12___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_sorry_transform(obj*, obj*);
obj* l_list_foldr1___main___at_lean_expander_paren_transform___spec__3___boxed(obj*, obj*);
obj* l_lean_expander_arrow_transform(obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__8(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_mixfix__to__notation__spec___closed__3;
obj* l_list_map___main___at_lean_expander_paren_transform___spec__1(obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__3___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_coe__ident__binder__id(obj*);
obj* l_option_get__or__else___main___rarg(obj*, obj*);
obj* l_lean_name_to__string__with__sep___main(obj*, obj*);
obj* l_lean_expander_binding__annotation__update_has__view_x_27;
obj* l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1___rarg___boxed(obj*, obj*, obj*);
obj* l_lean_expander_error___at___private_init_lean_expander_1__pop__stx__arg___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_expander_coe__binder__bracketed__binder___closed__2;
obj* l_lean_expander_error___at___private_init_lean_expander_2__expand__core___main___spec__1___boxed(obj*);
obj* l_lean_expander_expand__bracketed__binder___main___closed__11;
obj* l_lean_expander_glob__id(obj*);
obj* l_lean_expander_mk__simple__binder(obj*, uint8, obj*);
extern obj* l_lean_parser_no__kind;
obj* l_lean_parser_syntax_as__node___main(obj*);
obj* l_lean_expander_mixfix__to__notation__spec___closed__5;
obj* l_lean_expander_error___at___private_init_lean_expander_2__expand__core___main___spec__1___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_expander_mk__scope(obj*, obj*);
obj* l_lean_expander_mixfix_transform___closed__6;
obj* l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__1;
obj* l_list_assoc___main___at_lean_expander_mk__notation__transformer___spec__7___boxed(obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__23(uint8, obj*, obj*);
extern obj* l_lean_parser_term_bracketed__binders_has__view;
obj* l_rbmap_insert___main___at_lean_expander_builtin__transformers___spec__2(obj*, obj*);
obj* l_lean_expander_level_leading_transform___boxed(obj*, obj*);
obj* l_lean_expander_lambda_transform___closed__1;
extern obj* l_lean_parser_term_pi;
extern obj* l_lean_parser_term_paren_has__view;
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
extern obj* l_lean_parser_term__parser__m_lean_parser_monad__parsec;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__2(uint8, obj*, obj*, obj*, obj*);
obj* l_lean_expander_error___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_binding__annotation__update;
extern obj* l_lean_parser_term__parser__m_monad;
extern obj* l_lean_parser_term_let_has__view;
obj* l_lean_expander_transform__m_monad__reader;
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__3___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_mk__simple__binder___closed__2;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__21___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_pi_transform(obj*, obj*);
obj* l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__2;
obj* l_lean_parser_combinators_node_view___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_expander_2__expand__core(obj*, obj*, obj*, obj*);
obj* l_lean_expander_mixfix__to__notation__spec___closed__1;
obj* l_lean_expander_subtype_transform(obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__19___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_expander_coe__binders__ext___spec__2(obj*);
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__3(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_expander_2__expand__core___main___closed__1;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__7(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__4(obj*, obj*, obj*, obj*, obj*);
obj* l_coe___at_lean_expander_coe__binders__ext___spec__1___boxed(obj*);
obj* l_lean_expander_mixfix_transform___closed__4;
obj* l_reader__t_read___rarg(obj*, obj*);
obj* l_rbmap_from__list___at_lean_expander_builtin__transformers___spec__1;
obj* l_lean_expander_lambda_transform(obj*, obj*);
obj* l_lean_expander_declaration_transform(obj*, obj*);
obj* l_lean_expander_error___at___private_init_lean_expander_2__expand__core___main___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_expander_arrow_transform___closed__2;
obj* l_list_foldl___main___at_lean_expander_builtin__transformers___spec__6___boxed(obj*, obj*, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__5___boxed(obj*);
obj* l_lean_expander_no__expansion(obj*);
obj* l_lean_expander_binding__annotation__update_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_syntax_mk__node(obj*, obj*);
obj* l_lean_expander_declaration_transform___closed__2;
obj* l_rbnode_balance2___main___rarg(obj*, obj*);
obj* l_lean_expander_get__opt__type___main(obj*);
obj* l_lean_expander_binder__ident__to__ident(obj*);
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__8(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_binder__ident__to__ident___main(obj*);
extern obj* l_lean_parser_term_lambda_has__view;
obj* l_lean_expander_declaration_transform___closed__3;
obj* l_lean_expander_expand__bracketed__binder___main___closed__12;
obj* l_lean_expander_error___boxed(obj*, obj*);
obj* l_except__t_monad___rarg(obj*);
obj* l_lean_expander_expand__binders___closed__2;
extern obj* l_lean_parser_term_app_has__view;
obj* l_lean_expander_expander__config_has__lift(obj*);
obj* l_lean_expander_error___at___private_init_lean_expander_1__pop__stx__arg___spec__1(obj*);
obj* l_list_mmap___main___at_lean_expander_bracketed__binders_transform___spec__1(obj*, obj*);
obj* l_list_foldr1__opt___main___at_lean_expander_paren_transform___spec__2(obj*, obj*);
obj* l_list_map___main___at_lean_expander_mk__notation__transformer___spec__3(obj*);
extern obj* l_lean_parser_ident__univs_has__view;
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_subtype_transform___boxed(obj*, obj*);
obj* l_lean_expander_lambda_transform___lambda__1(obj*, obj*);
obj* l_reader__t_monad__except___rarg(obj*);
obj* l_lean_expander_mk__simple__binder___closed__6;
obj* l_lean_parser_try__view___at_lean_expander_mk__notation__transformer___spec__6(obj*);
extern obj* l_lean_parser_term_assume_has__view;
extern obj* l_lean_parser_command_intro__rule;
obj* l_id_monad___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__1(obj*, obj*, obj*);
obj* l_lean_expander_binder__ident__to__ident___main___closed__1;
obj* l_lean_expander_transform__m_monad__except;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__22(uint8, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__10(obj*, obj*, obj*, obj*);
obj* l_lean_expander_expand__bracketed__binder___main___closed__3;
obj* l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__5___rarg(obj*, obj*, obj*);
extern obj* l_lean_parser_term_paren;
obj* l_lean_expander_expand__binders___closed__4;
obj* l_rbmap_find___main___at___private_init_lean_expander_2__expand__core___main___spec__2(obj*, obj*);
obj* l_lean_expander_transformer__config__coe__frontend__config___boxed(obj*);
extern obj* l_lean_parser_term_hole_has__view;
obj* l_lean_expander_error(obj*, obj*);
obj* l_lean_expander_mixfix__to__notation__spec(obj*, obj*, obj*);
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_coe__binder__bracketed__binder___closed__1;
extern "C" uint8 lean_name_dec_eq(obj*, obj*);
obj* l_lean_expander_expand__binders___closed__3;
obj* l_lean_expander_error___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__18(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_declaration_transform___closed__1;
obj* l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1___boxed(obj*);
uint8 l_lean_name_quick__lt(obj*, obj*);
obj* l_lean_expander_coe__binders__ext__binders(obj*);
obj* l_lean_expander_mixfix_transform(obj*, obj*);
obj* l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_expand__bracketed__binder___main___closed__1;
obj* l_lean_expander_mixfix__to__notation__spec___closed__7;
obj* l_lean_expander_paren_transform___closed__1;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__18___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_rbnode_balance1___main___rarg(obj*, obj*);
obj* l_lean_expander_coe__ident__ident__univs(obj*);
obj* l_lean_expander_get__opt__type___boxed(obj*);
obj* l_lean_expander_paren_transform(obj*, obj*);
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__4___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__15(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_binder__ident__to__ident___main___boxed(obj*);
obj* l_lean_expander_transformer__config__coe__frontend__config(obj*);
obj* l_lean_expander_expand__bracketed__binder___main(obj*, obj*);
obj* l_lean_expander_binding__annotation__update_has__view_x_27___lambda__1(obj*);
obj* l_string_trim(obj*);
obj* l_lean_expander_variable_transform___closed__1;
obj* l_list_map___main___at_lean_expander_mk__notation__transformer___spec__5(obj*);
obj* l_lean_expander_expand__bracketed__binder___main___closed__9;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__13(obj*, obj*);
obj* l_lean_expander_error___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_command_constant;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__7___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_paren_transform___closed__2;
extern obj* l_lean_parser_term_if;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__11___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_term_assume;
obj* l_lean_expander_mk__notation__transformer(obj*, obj*, obj*);
obj* l_lean_expander_mixfix__to__notation__spec___closed__6;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__5(uint8, obj*, obj*);
obj* l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__3;
obj* l_lean_expander_mixfix_transform___closed__5;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__22___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_reader__t_monad___rarg(obj*);
extern obj* l_lean_parser_command_declaration_has__view;
obj* l___private_init_lean_expander_2__expand__core___main(obj*, obj*, obj*, obj*);
obj* l_lean_expander_assume_transform(obj*, obj*);
obj* l_lean_parser_syntax_mreplace___main___at_lean_parser_syntax_replace___spec__1(obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__17(obj*, obj*);
obj* l_list_map___main___at_lean_expander_constant_transform___spec__1(obj*);
obj* l_lean_expander_mk__simple__binder___closed__1;
extern obj* l_lean_parser_command_notation__spec_precedence_has__view;
obj* l_lean_expander_variable_transform(obj*, obj*);
obj* l_lean_expander_expand__bracketed__binder___main___closed__5;
obj* l_id_bind___boxed(obj*, obj*);
obj* l_lean_expander_expand__bracketed__binder___main___closed__8;
obj* l_lean_expander_expand__binders(obj*, obj*, obj*, obj*);
obj* l_lean_expander_mk__scope___boxed(obj*, obj*);
obj* l_lean_expander_mk__simple__binder___closed__5;
obj* l_lean_expander_expander__state_new;
extern obj* l_lean_parser_term_anonymous__constructor_has__view;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__5___boxed(obj*, obj*, obj*);
extern obj* l_lean_parser_term_subtype_has__view;
extern obj* l_lean_parser_term_binder__default_has__view;
extern obj* l_lean_parser_command_mixfix;
obj* l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_term_lambda;
extern obj* l_lean_parser_term_arrow;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_get__opt__type(obj*);
obj* l_lean_expander_reserve__mixfix_transform(obj*, obj*);
obj* l_list_foldr1___main___at_lean_expander_paren_transform___spec__3___closed__1;
obj* l_lean_expander_level_leading_transform(obj*, obj*);
obj* l_lean_expander_coe__binders__ext___boxed(obj*);
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_lean_expander_binding__annotation__update_parser_lean_parser_has__view;
obj* l_lean_file__map_to__position(obj*, obj*);
uint8 l_rbnode_is__red___main___rarg(obj*);
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__5(obj*, obj*, obj*);
obj* l_dlist_singleton___rarg(obj*, obj*);
obj* l_lean_expander_get__opt__type___main___closed__1;
obj* l_lean_expander_constant_transform___closed__1;
obj* l_lean_expander_mixfix__to__notation__spec___closed__4;
obj* l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__1___boxed(obj*, obj*, obj*);
obj* l_lean_expander_coe__binder__bracketed__binder(obj*);
obj* l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3___boxed(obj*);
obj* l_lean_expander_no__expansion___closed__1;
obj* l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6(obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__21(uint8, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__4;
extern obj* l_lean_parser_term__parser__m_monad__except;
obj* l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(obj*, obj*);
obj* l_lean_expander_expand__bracketed__binder___main___closed__10;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__6___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_substring_of__string(obj*);
obj* l_lean_expander_mk__simple__binder___closed__3;
obj* l_id_monad___lambda__2___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_expander_let_transform(obj*, obj*);
extern obj* l_lean_parser_term_let;
obj* l_lean_expander_expand__bracketed__binder___main___closed__7;
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__14(obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at___private_init_lean_expander_2__expand__core___main___spec__3(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_command_notation_has__view;
obj* l_list_map___main___at___private_init_lean_expander_2__expand__core___main___spec__4(obj*, obj*);
obj* l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__4___rarg(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_expander_variables_transform___spec__1(obj*, obj*);
obj* l_id_monad___lambda__3___boxed(obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__4___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_expander_constant_transform(obj*, obj*);
obj* l_lean_expander_binder__ident__to__ident___boxed(obj*);
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__11(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_rbnode_set__black___main___rarg(obj*);
extern obj* l_lean_parser_term__parser__m_alternative;
obj* l_lean_expander_transformer__config__coe__frontend__config(obj* x_0) {
_start:
{
lean::inc(x_0);
return x_0;
}
}
obj* l_lean_expander_transformer__config__coe__frontend__config___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_expander_transformer__config__coe__frontend__config(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_expander_transform__m_monad() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_id_monad___lambda__1___boxed), 4, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_id_monad___lambda__2___boxed), 4, 0);
lean::inc(x_1);
lean::inc(x_0);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_id___boxed), 1, 0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_id_monad___lambda__3___boxed), 4, 0);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_4);
lean::cnstr_set(x_7, 1, x_5);
lean::cnstr_set(x_7, 2, x_0);
lean::cnstr_set(x_7, 3, x_1);
lean::cnstr_set(x_7, 4, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_id_bind___boxed), 2, 0);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
x_10 = l_except__t_monad___rarg(x_9);
x_11 = l_reader__t_monad___rarg(x_10);
return x_11;
}
}
obj* _init_l_lean_expander_transform__m_monad__reader() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_id_monad___lambda__1___boxed), 4, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_id_monad___lambda__2___boxed), 4, 0);
lean::inc(x_1);
lean::inc(x_0);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_id___boxed), 1, 0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_id_monad___lambda__3___boxed), 4, 0);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_4);
lean::cnstr_set(x_7, 1, x_5);
lean::cnstr_set(x_7, 2, x_0);
lean::cnstr_set(x_7, 3, x_1);
lean::cnstr_set(x_7, 4, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_id_bind___boxed), 2, 0);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
x_10 = l_except__t_monad___rarg(x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_read___rarg), 2, 1);
lean::closure_set(x_11, 0, x_10);
return x_11;
}
}
obj* _init_l_lean_expander_transform__m_monad__except() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_id_monad___lambda__1___boxed), 4, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_id_monad___lambda__2___boxed), 4, 0);
lean::inc(x_1);
lean::inc(x_0);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_id___boxed), 1, 0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_id_monad___lambda__3___boxed), 4, 0);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_4);
lean::cnstr_set(x_7, 1, x_5);
lean::cnstr_set(x_7, 2, x_0);
lean::cnstr_set(x_7, 3, x_1);
lean::cnstr_set(x_7, 4, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_id_bind___boxed), 2, 0);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
x_10 = l_except__t_monad__except___rarg(x_9);
x_11 = l_reader__t_monad__except___rarg(x_10);
return x_11;
}
}
obj* _init_l_lean_expander_no__expansion___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_expander_no__expansion(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_expander_no__expansion___closed__1;
return x_1;
}
}
obj* l_lean_expander_no__expansion___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_expander_no__expansion(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_expander_error___rarg___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(0u);
x_2 = l_option_get__or__else___main___rarg(x_0, x_1);
return x_2;
}
}
obj* l_lean_expander_error___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; obj* x_9; obj* x_11; obj* x_14; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::apply_1(x_1, x_4);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 2);
lean::inc(x_11);
lean::dec(x_8);
x_14 = lean::box(0);
if (lean::obj_tag(x_2) == 0)
{
obj* x_15; obj* x_16; uint8 x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_15 = l_lean_expander_error___rarg___lambda__1___closed__1;
x_16 = l_lean_file__map_to__position(x_11, x_15);
x_17 = 2;
x_18 = l_string_iterator_extract___main___closed__1;
x_19 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_19, 0, x_9);
lean::cnstr_set(x_19, 1, x_16);
lean::cnstr_set(x_19, 2, x_14);
lean::cnstr_set(x_19, 3, x_18);
lean::cnstr_set(x_19, 4, x_3);
lean::cnstr_set_scalar(x_19, sizeof(void*)*5, x_17);
x_20 = x_19;
x_21 = lean::apply_2(x_5, lean::box(0), x_20);
return x_21;
}
else
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_27; uint8 x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_22 = lean::cnstr_get(x_2, 0);
x_23 = l_lean_parser_syntax_get__pos(x_22);
x_24 = lean::mk_nat_obj(0u);
x_25 = l_option_get__or__else___main___rarg(x_23, x_24);
lean::dec(x_23);
x_27 = l_lean_file__map_to__position(x_11, x_25);
x_28 = 2;
x_29 = l_string_iterator_extract___main___closed__1;
x_30 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_30, 0, x_9);
lean::cnstr_set(x_30, 1, x_27);
lean::cnstr_set(x_30, 2, x_14);
lean::cnstr_set(x_30, 3, x_29);
lean::cnstr_set(x_30, 4, x_3);
lean::cnstr_set_scalar(x_30, sizeof(void*)*5, x_28);
x_31 = x_30;
x_32 = lean::apply_2(x_5, lean::box(0), x_31);
return x_32;
}
}
}
obj* l_lean_expander_error___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_10; obj* x_11; 
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___rarg___lambda__1___boxed), 5, 4);
lean::closure_set(x_10, 0, x_3);
lean::closure_set(x_10, 1, x_2);
lean::closure_set(x_10, 2, x_5);
lean::closure_set(x_10, 3, x_6);
x_11 = lean::apply_4(x_7, lean::box(0), lean::box(0), x_1, x_10);
return x_11;
}
}
obj* l_lean_expander_error(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___rarg___boxed), 7, 0);
return x_2;
}
}
obj* l_lean_expander_error___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_expander_error___rarg___lambda__1(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_lean_expander_error___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_lean_expander_error___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_4);
return x_7;
}
}
obj* l_lean_expander_error___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expander_error(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_expander_coe__name__ident(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_1 = lean::box(0);
x_2 = l_lean_name_to__string___closed__1;
lean::inc(x_0);
x_4 = l_lean_name_to__string__with__sep___main(x_2, x_0);
x_5 = l_lean_parser_substring_of__string(x_4);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_1);
lean::cnstr_set(x_7, 1, x_5);
lean::cnstr_set(x_7, 2, x_0);
lean::cnstr_set(x_7, 3, x_6);
lean::cnstr_set(x_7, 4, x_6);
return x_7;
}
}
obj* l_lean_expander_glob__id(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_1 = l_lean_parser_ident__univs_has__view;
x_2 = lean::cnstr_get(x_1, 1);
lean::inc(x_2);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = l_lean_name_to__string___closed__1;
lean::inc(x_0);
x_8 = l_lean_name_to__string__with__sep___main(x_6, x_0);
x_9 = l_lean_parser_substring_of__string(x_8);
x_10 = lean::box(0);
lean::inc(x_0);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_0);
lean::cnstr_set(x_12, 1, x_10);
x_13 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_13, 0, x_5);
lean::cnstr_set(x_13, 1, x_9);
lean::cnstr_set(x_13, 2, x_0);
lean::cnstr_set(x_13, 3, x_12);
lean::cnstr_set(x_13, 4, x_10);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_5);
x_15 = lean::apply_1(x_2, x_14);
return x_15;
}
}
obj* l_lean_expander_coe__ident__ident__univs(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_lean_expander_coe__ident__binder__id(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_coe___at_lean_expander_coe__binders__ext___spec__1___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::apply_1(x_0, x_1);
return x_2;
}
}
obj* l_coe___at_lean_expander_coe__binders__ext___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_coe___at_lean_expander_coe__binders__ext___spec__1___rarg), 2, 0);
return x_1;
}
}
obj* l_list_map___main___at_lean_expander_coe__binders__ext___spec__2___rarg(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_12; 
x_4 = lean::cnstr_get(x_1, 0);
x_6 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 x_8 = x_1;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
lean::inc(x_0);
x_10 = lean::apply_1(x_0, x_4);
x_11 = l_list_map___main___at_lean_expander_coe__binders__ext___spec__2___rarg(x_0, x_6);
if (lean::is_scalar(x_8)) {
 x_12 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_12 = x_8;
}
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
}
obj* l_list_map___main___at_lean_expander_coe__binders__ext___spec__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_list_map___main___at_lean_expander_coe__binders__ext___spec__2___rarg), 2, 0);
return x_1;
}
}
obj* l_lean_expander_coe__binders__ext___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
x_2 = l_list_map___main___at_lean_expander_coe__binders__ext___spec__2___rarg(x_0, x_1);
x_3 = lean::box(0);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
}
obj* l_lean_expander_coe__binders__ext(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_coe__binders__ext___rarg), 2, 0);
return x_1;
}
}
obj* l_coe___at_lean_expander_coe__binders__ext___spec__1___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_coe___at_lean_expander_coe__binders__ext___spec__1(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_list_map___main___at_lean_expander_coe__binders__ext___spec__2___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_list_map___main___at_lean_expander_coe__binders__ext___spec__2(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_expander_coe__binders__ext___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_expander_coe__binders__ext(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_expander_coe__binders__ext__binders(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_expander_coe__simple__binder__binders(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_expander_coe__binder__bracketed__binder___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("(");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_expander_coe__binder__bracketed__binder___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string(")");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* l_lean_expander_coe__binder__bracketed__binder(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
else
{
obj* x_4; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_4);
x_8 = l_lean_expander_coe__binder__bracketed__binder___closed__1;
x_9 = l_lean_expander_coe__binder__bracketed__binder___closed__2;
x_10 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_7);
lean::cnstr_set(x_10, 2, x_9);
x_11 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
return x_11;
}
}
}
obj* l_lean_expander_error___at___private_init_lean_expander_1__pop__stx__arg___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_9; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 2);
lean::inc(x_6);
lean::dec(x_3);
x_9 = lean::box(0);
if (lean::obj_tag(x_0) == 0)
{
obj* x_10; obj* x_11; uint8 x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_10 = l_lean_expander_error___rarg___lambda__1___closed__1;
x_11 = l_lean_file__map_to__position(x_6, x_10);
x_12 = 2;
x_13 = l_string_iterator_extract___main___closed__1;
x_14 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_14, 0, x_4);
lean::cnstr_set(x_14, 1, x_11);
lean::cnstr_set(x_14, 2, x_9);
lean::cnstr_set(x_14, 3, x_13);
lean::cnstr_set(x_14, 4, x_1);
lean::cnstr_set_scalar(x_14, sizeof(void*)*5, x_12);
x_15 = x_14;
x_16 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_16, 0, x_15);
return x_16;
}
else
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_22; uint8 x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_17 = lean::cnstr_get(x_0, 0);
x_18 = l_lean_parser_syntax_get__pos(x_17);
x_19 = lean::mk_nat_obj(0u);
x_20 = l_option_get__or__else___main___rarg(x_18, x_19);
lean::dec(x_18);
x_22 = l_lean_file__map_to__position(x_6, x_20);
x_23 = 2;
x_24 = l_string_iterator_extract___main___closed__1;
x_25 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_25, 0, x_4);
lean::cnstr_set(x_25, 1, x_22);
lean::cnstr_set(x_25, 2, x_9);
lean::cnstr_set(x_25, 3, x_24);
lean::cnstr_set(x_25, 4, x_1);
lean::cnstr_set_scalar(x_25, sizeof(void*)*5, x_23);
x_26 = x_25;
x_27 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_27, 0, x_26);
return x_27;
}
}
}
obj* l_lean_expander_error___at___private_init_lean_expander_1__pop__stx__arg___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at___private_init_lean_expander_1__pop__stx__arg___spec__1___rarg___boxed), 4, 0);
return x_1;
}
}
obj* _init_l___private_init_lean_expander_1__pop__stx__arg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("mk_notation_transformer: unreachable");
return x_0;
}
}
obj* l___private_init_lean_expander_1__pop__stx__arg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; obj* x_6; obj* x_7; obj* x_8; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_4);
x_7 = l___private_init_lean_expander_1__pop__stx__arg___closed__1;
x_8 = l_lean_expander_error___at___private_init_lean_expander_1__pop__stx__arg___spec__1___rarg(x_6, x_7, x_0, x_1);
lean::dec(x_0);
lean::dec(x_6);
return x_8;
}
else
{
obj* x_12; obj* x_14; obj* x_17; obj* x_19; obj* x_21; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_1);
x_12 = lean::cnstr_get(x_2, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_2, 1);
lean::inc(x_14);
lean::dec(x_2);
x_17 = lean::cnstr_get(x_0, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_0, 2);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_0, 3);
lean::inc(x_21);
lean::dec(x_0);
x_24 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_24, 0, x_17);
lean::cnstr_set(x_24, 1, x_14);
lean::cnstr_set(x_24, 2, x_19);
lean::cnstr_set(x_24, 3, x_21);
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_12);
lean::cnstr_set(x_25, 1, x_24);
x_26 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_26, 0, x_25);
return x_26;
}
}
}
obj* l_lean_expander_error___at___private_init_lean_expander_1__pop__stx__arg___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_expander_error___at___private_init_lean_expander_1__pop__stx__arg___spec__1___rarg(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_2);
return x_4;
}
}
obj* l_lean_expander_error___at___private_init_lean_expander_1__pop__stx__arg___spec__1___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_expander_error___at___private_init_lean_expander_1__pop__stx__arg___spec__1(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 2);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::box(0);
if (lean::obj_tag(x_0) == 0)
{
obj* x_9; obj* x_10; uint8 x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_9 = l_lean_expander_error___rarg___lambda__1___closed__1;
x_10 = l_lean_file__map_to__position(x_5, x_9);
x_11 = 2;
x_12 = l_string_iterator_extract___main___closed__1;
x_13 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_13, 0, x_3);
lean::cnstr_set(x_13, 1, x_10);
lean::cnstr_set(x_13, 2, x_8);
lean::cnstr_set(x_13, 3, x_12);
lean::cnstr_set(x_13, 4, x_1);
lean::cnstr_set_scalar(x_13, sizeof(void*)*5, x_11);
x_14 = x_13;
x_15 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_15, 0, x_14);
return x_15;
}
else
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_21; uint8 x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_16 = lean::cnstr_get(x_0, 0);
x_17 = l_lean_parser_syntax_get__pos(x_16);
x_18 = lean::mk_nat_obj(0u);
x_19 = l_option_get__or__else___main___rarg(x_17, x_18);
lean::dec(x_17);
x_21 = l_lean_file__map_to__position(x_5, x_19);
x_22 = 2;
x_23 = l_string_iterator_extract___main___closed__1;
x_24 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_24, 0, x_3);
lean::cnstr_set(x_24, 1, x_21);
lean::cnstr_set(x_24, 2, x_8);
lean::cnstr_set(x_24, 3, x_23);
lean::cnstr_set(x_24, 4, x_1);
lean::cnstr_set_scalar(x_24, sizeof(void*)*5, x_22);
x_25 = x_24;
x_26 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_26, 0, x_25);
return x_26;
}
}
}
obj* l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1___rarg___boxed), 3, 0);
return x_1;
}
}
obj* l_coe___at_lean_expander_mk__notation__transformer___spec__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_list_map___main___at_lean_expander_mk__notation__transformer___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_7, 0, x_2);
x_8 = l_list_map___main___at_lean_expander_mk__notation__transformer___spec__3(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* _init_l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("mk_notation_transformer: unimplemented");
return x_0;
}
}
obj* _init_l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_string("\xce\xbb");
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
}
obj* _init_l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string(",");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_3);
lean::dec(x_0);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_2);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_16; obj* x_18; obj* x_20; 
x_9 = lean::cnstr_get(x_1, 0);
x_11 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_13 = x_1;
} else {
 lean::inc(x_9);
 lean::inc(x_11);
 lean::dec(x_1);
 x_13 = lean::box(0);
}
x_18 = lean::cnstr_get(x_9, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_18, 1);
lean::inc(x_20);
lean::dec(x_18);
if (lean::obj_tag(x_20) == 0)
{
obj* x_24; obj* x_25; obj* x_27; 
lean::inc(x_0);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_0);
x_25 = l___private_init_lean_expander_1__pop__stx__arg___closed__1;
lean::inc(x_3);
x_27 = l_lean_expander_error___at___private_init_lean_expander_1__pop__stx__arg___spec__1___rarg(x_24, x_25, x_2, x_3);
lean::dec(x_2);
lean::dec(x_24);
if (lean::obj_tag(x_27) == 0)
{
obj* x_35; obj* x_37; obj* x_38; 
lean::dec(x_9);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
x_35 = lean::cnstr_get(x_27, 0);
if (lean::is_exclusive(x_27)) {
 x_37 = x_27;
} else {
 lean::inc(x_35);
 lean::dec(x_27);
 x_37 = lean::box(0);
}
if (lean::is_scalar(x_37)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_37;
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_39; 
x_39 = lean::cnstr_get(x_27, 0);
lean::inc(x_39);
lean::dec(x_27);
x_14 = x_39;
goto lbl_15;
}
}
else
{
obj* x_45; 
lean::dec(x_13);
lean::dec(x_20);
lean::inc(x_3);
x_45 = l___private_init_lean_expander_1__pop__stx__arg(x_2, x_3);
if (lean::obj_tag(x_45) == 0)
{
obj* x_50; obj* x_52; obj* x_53; 
lean::dec(x_9);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
x_50 = lean::cnstr_get(x_45, 0);
if (lean::is_exclusive(x_45)) {
 x_52 = x_45;
} else {
 lean::inc(x_50);
 lean::dec(x_45);
 x_52 = lean::box(0);
}
if (lean::is_scalar(x_52)) {
 x_53 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_53 = x_52;
}
lean::cnstr_set(x_53, 0, x_50);
return x_53;
}
else
{
obj* x_54; 
x_54 = lean::cnstr_get(x_45, 0);
lean::inc(x_54);
lean::dec(x_45);
x_16 = x_54;
goto lbl_17;
}
}
lbl_15:
{
obj* x_57; 
x_57 = lean::cnstr_get(x_9, 1);
lean::inc(x_57);
lean::dec(x_9);
if (lean::obj_tag(x_57) == 0)
{
obj* x_61; 
lean::dec(x_13);
x_61 = lean::cnstr_get(x_14, 1);
lean::inc(x_61);
lean::dec(x_14);
x_1 = x_11;
x_2 = x_61;
goto _start;
}
else
{
obj* x_65; obj* x_67; 
x_65 = lean::cnstr_get(x_57, 0);
if (lean::is_exclusive(x_57)) {
 lean::cnstr_set(x_57, 0, lean::box(0));
 x_67 = x_57;
} else {
 lean::inc(x_65);
 lean::dec(x_57);
 x_67 = lean::box(0);
}
switch (lean::obj_tag(x_65)) {
case 0:
{
obj* x_69; obj* x_73; 
lean::dec(x_65);
x_69 = lean::cnstr_get(x_14, 1);
lean::inc(x_69);
lean::dec(x_14);
lean::inc(x_3);
x_73 = l___private_init_lean_expander_1__pop__stx__arg(x_69, x_3);
if (lean::obj_tag(x_73) == 0)
{
obj* x_79; obj* x_81; obj* x_82; 
lean::dec(x_67);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
x_79 = lean::cnstr_get(x_73, 0);
if (lean::is_exclusive(x_73)) {
 x_81 = x_73;
} else {
 lean::inc(x_79);
 lean::dec(x_73);
 x_81 = lean::box(0);
}
if (lean::is_scalar(x_81)) {
 x_82 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_82 = x_81;
}
lean::cnstr_set(x_82, 0, x_79);
return x_82;
}
else
{
obj* x_83; obj* x_86; obj* x_88; obj* x_91; obj* x_93; obj* x_95; obj* x_98; obj* x_99; obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; obj* x_108; obj* x_109; 
x_83 = lean::cnstr_get(x_73, 0);
lean::inc(x_83);
lean::dec(x_73);
x_86 = lean::cnstr_get(x_83, 0);
lean::inc(x_86);
x_88 = lean::cnstr_get(x_83, 1);
lean::inc(x_88);
lean::dec(x_83);
x_91 = lean::cnstr_get(x_88, 0);
lean::inc(x_91);
x_93 = lean::cnstr_get(x_88, 1);
lean::inc(x_93);
x_95 = lean::cnstr_get(x_88, 2);
lean::inc(x_95);
lean::dec(x_88);
x_98 = l_lean_parser_term_binder__ident_has__view;
x_99 = lean::cnstr_get(x_98, 0);
lean::inc(x_99);
lean::dec(x_98);
x_102 = lean::apply_1(x_99, x_86);
x_103 = lean::box(0);
if (lean::is_scalar(x_13)) {
 x_104 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_104 = x_13;
}
lean::cnstr_set(x_104, 0, x_102);
lean::cnstr_set(x_104, 1, x_103);
x_105 = lean::box(0);
x_106 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_106, 0, x_104);
lean::cnstr_set(x_106, 1, x_105);
x_107 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_107, 0, x_106);
if (lean::is_scalar(x_67)) {
 x_108 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_108 = x_67;
}
lean::cnstr_set(x_108, 0, x_107);
x_109 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_109, 0, x_91);
lean::cnstr_set(x_109, 1, x_93);
lean::cnstr_set(x_109, 2, x_95);
lean::cnstr_set(x_109, 3, x_108);
x_1 = x_11;
x_2 = x_109;
goto _start;
}
}
case 1:
{
obj* x_113; obj* x_117; 
lean::dec(x_65);
lean::dec(x_13);
x_113 = lean::cnstr_get(x_14, 1);
lean::inc(x_113);
lean::dec(x_14);
lean::inc(x_3);
x_117 = l___private_init_lean_expander_1__pop__stx__arg(x_113, x_3);
if (lean::obj_tag(x_117) == 0)
{
obj* x_122; obj* x_124; obj* x_125; 
lean::dec(x_67);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
x_122 = lean::cnstr_get(x_117, 0);
if (lean::is_exclusive(x_117)) {
 x_124 = x_117;
} else {
 lean::inc(x_122);
 lean::dec(x_117);
 x_124 = lean::box(0);
}
if (lean::is_scalar(x_124)) {
 x_125 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_125 = x_124;
}
lean::cnstr_set(x_125, 0, x_122);
return x_125;
}
else
{
obj* x_126; obj* x_129; obj* x_131; obj* x_134; obj* x_136; obj* x_138; obj* x_141; obj* x_142; obj* x_145; obj* x_146; obj* x_147; 
x_126 = lean::cnstr_get(x_117, 0);
lean::inc(x_126);
lean::dec(x_117);
x_129 = lean::cnstr_get(x_126, 0);
lean::inc(x_129);
x_131 = lean::cnstr_get(x_126, 1);
lean::inc(x_131);
lean::dec(x_126);
x_134 = lean::cnstr_get(x_131, 0);
lean::inc(x_134);
x_136 = lean::cnstr_get(x_131, 1);
lean::inc(x_136);
x_138 = lean::cnstr_get(x_131, 2);
lean::inc(x_138);
lean::dec(x_131);
x_141 = l_lean_parser_term_binders_has__view;
x_142 = lean::cnstr_get(x_141, 0);
lean::inc(x_142);
lean::dec(x_141);
x_145 = lean::apply_1(x_142, x_129);
if (lean::is_scalar(x_67)) {
 x_146 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_146 = x_67;
}
lean::cnstr_set(x_146, 0, x_145);
x_147 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_147, 0, x_134);
lean::cnstr_set(x_147, 1, x_136);
lean::cnstr_set(x_147, 2, x_138);
lean::cnstr_set(x_147, 3, x_146);
x_1 = x_11;
x_2 = x_147;
goto _start;
}
}
default:
{
obj* x_150; obj* x_153; 
lean::dec(x_67);
x_150 = lean::cnstr_get(x_65, 0);
lean::inc(x_150);
lean::dec(x_65);
x_153 = lean::cnstr_get(x_150, 1);
lean::inc(x_153);
if (lean::obj_tag(x_153) == 0)
{
obj* x_155; obj* x_158; obj* x_162; 
x_155 = lean::cnstr_get(x_14, 1);
lean::inc(x_155);
lean::dec(x_14);
x_158 = lean::cnstr_get(x_150, 0);
lean::inc(x_158);
lean::dec(x_150);
lean::inc(x_3);
x_162 = l___private_init_lean_expander_1__pop__stx__arg(x_155, x_3);
if (lean::obj_tag(x_162) == 0)
{
obj* x_168; obj* x_170; obj* x_171; 
lean::dec(x_158);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
x_168 = lean::cnstr_get(x_162, 0);
if (lean::is_exclusive(x_162)) {
 x_170 = x_162;
} else {
 lean::inc(x_168);
 lean::dec(x_162);
 x_170 = lean::box(0);
}
if (lean::is_scalar(x_170)) {
 x_171 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_171 = x_170;
}
lean::cnstr_set(x_171, 0, x_168);
return x_171;
}
else
{
obj* x_172; obj* x_175; obj* x_177; obj* x_179; obj* x_180; obj* x_182; obj* x_184; obj* x_185; obj* x_187; obj* x_188; obj* x_191; 
x_172 = lean::cnstr_get(x_162, 0);
lean::inc(x_172);
lean::dec(x_162);
x_175 = lean::cnstr_get(x_172, 0);
x_177 = lean::cnstr_get(x_172, 1);
if (lean::is_exclusive(x_172)) {
 x_179 = x_172;
} else {
 lean::inc(x_175);
 lean::inc(x_177);
 lean::dec(x_172);
 x_179 = lean::box(0);
}
x_180 = lean::cnstr_get(x_177, 0);
lean::inc(x_180);
x_182 = lean::cnstr_get(x_177, 1);
lean::inc(x_182);
if (lean::is_scalar(x_179)) {
 x_184 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_184 = x_179;
}
lean::cnstr_set(x_184, 0, x_158);
lean::cnstr_set(x_184, 1, x_175);
x_185 = lean::cnstr_get(x_177, 2);
lean::inc(x_185);
if (lean::is_scalar(x_13)) {
 x_187 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_187 = x_13;
}
lean::cnstr_set(x_187, 0, x_184);
lean::cnstr_set(x_187, 1, x_185);
x_188 = lean::cnstr_get(x_177, 3);
lean::inc(x_188);
lean::dec(x_177);
x_191 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_191, 0, x_180);
lean::cnstr_set(x_191, 1, x_182);
lean::cnstr_set(x_191, 2, x_187);
lean::cnstr_set(x_191, 3, x_188);
x_1 = x_11;
x_2 = x_191;
goto _start;
}
}
else
{
obj* x_193; obj* x_195; obj* x_196; 
x_193 = lean::cnstr_get(x_153, 0);
if (lean::is_exclusive(x_153)) {
 lean::cnstr_set(x_153, 0, lean::box(0));
 x_195 = x_153;
} else {
 lean::inc(x_193);
 lean::dec(x_153);
 x_195 = lean::box(0);
}
x_196 = lean::cnstr_get(x_193, 1);
lean::inc(x_196);
lean::dec(x_193);
switch (lean::obj_tag(x_196)) {
case 0:
{
obj* x_201; obj* x_204; obj* x_208; 
lean::dec(x_195);
lean::dec(x_196);
x_201 = lean::cnstr_get(x_14, 1);
lean::inc(x_201);
lean::dec(x_14);
x_204 = lean::cnstr_get(x_150, 0);
lean::inc(x_204);
lean::dec(x_150);
lean::inc(x_3);
x_208 = l___private_init_lean_expander_1__pop__stx__arg(x_201, x_3);
if (lean::obj_tag(x_208) == 0)
{
obj* x_214; obj* x_216; obj* x_217; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
lean::dec(x_204);
x_214 = lean::cnstr_get(x_208, 0);
if (lean::is_exclusive(x_208)) {
 x_216 = x_208;
} else {
 lean::inc(x_214);
 lean::dec(x_208);
 x_216 = lean::box(0);
}
if (lean::is_scalar(x_216)) {
 x_217 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_217 = x_216;
}
lean::cnstr_set(x_217, 0, x_214);
return x_217;
}
else
{
obj* x_218; obj* x_221; obj* x_223; obj* x_225; obj* x_226; obj* x_228; obj* x_230; obj* x_231; obj* x_233; obj* x_234; obj* x_237; 
x_218 = lean::cnstr_get(x_208, 0);
lean::inc(x_218);
lean::dec(x_208);
x_221 = lean::cnstr_get(x_218, 0);
x_223 = lean::cnstr_get(x_218, 1);
if (lean::is_exclusive(x_218)) {
 x_225 = x_218;
} else {
 lean::inc(x_221);
 lean::inc(x_223);
 lean::dec(x_218);
 x_225 = lean::box(0);
}
x_226 = lean::cnstr_get(x_223, 0);
lean::inc(x_226);
x_228 = lean::cnstr_get(x_223, 1);
lean::inc(x_228);
if (lean::is_scalar(x_225)) {
 x_230 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_230 = x_225;
}
lean::cnstr_set(x_230, 0, x_204);
lean::cnstr_set(x_230, 1, x_221);
x_231 = lean::cnstr_get(x_223, 2);
lean::inc(x_231);
if (lean::is_scalar(x_13)) {
 x_233 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_233 = x_13;
}
lean::cnstr_set(x_233, 0, x_230);
lean::cnstr_set(x_233, 1, x_231);
x_234 = lean::cnstr_get(x_223, 3);
lean::inc(x_234);
lean::dec(x_223);
x_237 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_237, 0, x_226);
lean::cnstr_set(x_237, 1, x_228);
lean::cnstr_set(x_237, 2, x_233);
lean::cnstr_set(x_237, 3, x_234);
x_1 = x_11;
x_2 = x_237;
goto _start;
}
}
case 2:
{
obj* x_239; obj* x_242; obj* x_245; obj* x_249; 
x_239 = lean::cnstr_get(x_14, 1);
lean::inc(x_239);
lean::dec(x_14);
x_242 = lean::cnstr_get(x_150, 0);
lean::inc(x_242);
lean::dec(x_150);
x_245 = lean::cnstr_get(x_196, 0);
lean::inc(x_245);
lean::dec(x_196);
lean::inc(x_3);
x_249 = l___private_init_lean_expander_1__pop__stx__arg(x_239, x_3);
if (lean::obj_tag(x_249) == 0)
{
obj* x_257; obj* x_259; obj* x_260; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
lean::dec(x_195);
lean::dec(x_242);
lean::dec(x_245);
x_257 = lean::cnstr_get(x_249, 0);
if (lean::is_exclusive(x_249)) {
 x_259 = x_249;
} else {
 lean::inc(x_257);
 lean::dec(x_249);
 x_259 = lean::box(0);
}
if (lean::is_scalar(x_259)) {
 x_260 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_260 = x_259;
}
lean::cnstr_set(x_260, 0, x_257);
return x_260;
}
else
{
obj* x_261; obj* x_264; obj* x_266; 
x_261 = lean::cnstr_get(x_249, 0);
lean::inc(x_261);
lean::dec(x_249);
x_264 = lean::cnstr_get(x_261, 1);
lean::inc(x_264);
x_266 = lean::cnstr_get(x_264, 3);
lean::inc(x_266);
if (lean::obj_tag(x_266) == 0)
{
obj* x_273; obj* x_274; obj* x_276; 
lean::dec(x_13);
lean::dec(x_261);
lean::dec(x_242);
lean::dec(x_245);
lean::inc(x_0);
if (lean::is_scalar(x_195)) {
 x_273 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_273 = x_195;
}
lean::cnstr_set(x_273, 0, x_0);
x_274 = l___private_init_lean_expander_1__pop__stx__arg___closed__1;
lean::inc(x_3);
x_276 = l_lean_expander_error___at___private_init_lean_expander_1__pop__stx__arg___spec__1___rarg(x_273, x_274, x_264, x_3);
lean::dec(x_264);
lean::dec(x_273);
if (lean::obj_tag(x_276) == 0)
{
obj* x_282; obj* x_284; obj* x_285; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
x_282 = lean::cnstr_get(x_276, 0);
if (lean::is_exclusive(x_276)) {
 x_284 = x_276;
} else {
 lean::inc(x_282);
 lean::dec(x_276);
 x_284 = lean::box(0);
}
if (lean::is_scalar(x_284)) {
 x_285 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_285 = x_284;
}
lean::cnstr_set(x_285, 0, x_282);
return x_285;
}
else
{
obj* x_286; obj* x_289; 
x_286 = lean::cnstr_get(x_276, 0);
lean::inc(x_286);
lean::dec(x_276);
x_289 = lean::cnstr_get(x_286, 1);
lean::inc(x_289);
lean::dec(x_286);
x_1 = x_11;
x_2 = x_289;
goto _start;
}
}
else
{
obj* x_294; obj* x_296; obj* x_297; obj* x_299; obj* x_301; obj* x_303; obj* x_304; obj* x_306; obj* x_307; obj* x_310; obj* x_311; obj* x_313; obj* x_314; obj* x_315; obj* x_316; obj* x_317; obj* x_318; obj* x_321; obj* x_322; obj* x_323; obj* x_325; obj* x_326; obj* x_327; obj* x_328; obj* x_329; obj* x_332; obj* x_333; obj* x_334; obj* x_335; obj* x_336; 
lean::dec(x_195);
x_294 = lean::cnstr_get(x_261, 0);
if (lean::is_exclusive(x_261)) {
 lean::cnstr_release(x_261, 1);
 x_296 = x_261;
} else {
 lean::inc(x_294);
 lean::dec(x_261);
 x_296 = lean::box(0);
}
x_297 = lean::cnstr_get(x_264, 0);
x_299 = lean::cnstr_get(x_264, 1);
x_301 = lean::cnstr_get(x_264, 2);
if (lean::is_exclusive(x_264)) {
 lean::cnstr_release(x_264, 3);
 x_303 = x_264;
} else {
 lean::inc(x_297);
 lean::inc(x_299);
 lean::inc(x_301);
 lean::dec(x_264);
 x_303 = lean::box(0);
}
x_304 = lean::cnstr_get(x_266, 0);
lean::inc(x_304);
x_306 = l_lean_parser_term_lambda_has__view;
x_307 = lean::cnstr_get(x_306, 1);
lean::inc(x_307);
lean::dec(x_306);
x_310 = lean::box(0);
x_311 = lean::cnstr_get(x_245, 3);
lean::inc(x_311);
x_313 = lean::box(0);
if (lean::is_scalar(x_13)) {
 x_314 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_314 = x_13;
}
lean::cnstr_set(x_314, 0, x_311);
lean::cnstr_set(x_314, 1, x_313);
x_315 = l_list_map___main___at_lean_expander_mk__notation__transformer___spec__3(x_314);
x_316 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_316, 0, x_315);
lean::cnstr_set(x_316, 1, x_310);
x_317 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_317, 0, x_316);
x_318 = lean::cnstr_get(x_245, 5);
lean::inc(x_318);
lean::dec(x_245);
x_321 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__2;
x_322 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__3;
x_323 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_323, 0, x_321);
lean::cnstr_set(x_323, 1, x_317);
lean::cnstr_set(x_323, 2, x_322);
lean::cnstr_set(x_323, 3, x_318);
lean::inc(x_307);
x_325 = lean::apply_1(x_307, x_323);
x_326 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_326, 0, x_321);
lean::cnstr_set(x_326, 1, x_304);
lean::cnstr_set(x_326, 2, x_322);
lean::cnstr_set(x_326, 3, x_294);
x_327 = lean::apply_1(x_307, x_326);
x_328 = l_lean_parser_term_app_has__view;
x_329 = lean::cnstr_get(x_328, 1);
lean::inc(x_329);
lean::dec(x_328);
x_332 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_332, 0, x_325);
lean::cnstr_set(x_332, 1, x_327);
x_333 = lean::apply_1(x_329, x_332);
if (lean::is_scalar(x_296)) {
 x_334 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_334 = x_296;
}
lean::cnstr_set(x_334, 0, x_242);
lean::cnstr_set(x_334, 1, x_333);
x_335 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_335, 0, x_334);
lean::cnstr_set(x_335, 1, x_301);
if (lean::is_scalar(x_303)) {
 x_336 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_336 = x_303;
}
lean::cnstr_set(x_336, 0, x_297);
lean::cnstr_set(x_336, 1, x_299);
lean::cnstr_set(x_336, 2, x_335);
lean::cnstr_set(x_336, 3, x_266);
x_1 = x_11;
x_2 = x_336;
goto _start;
}
}
}
default:
{
obj* x_341; obj* x_345; obj* x_346; obj* x_348; 
lean::dec(x_150);
lean::dec(x_13);
lean::dec(x_196);
x_341 = lean::cnstr_get(x_14, 1);
lean::inc(x_341);
lean::dec(x_14);
lean::inc(x_0);
if (lean::is_scalar(x_195)) {
 x_345 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_345 = x_195;
}
lean::cnstr_set(x_345, 0, x_0);
x_346 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__1;
lean::inc(x_3);
x_348 = l_lean_expander_error___at___private_init_lean_expander_1__pop__stx__arg___spec__1___rarg(x_345, x_346, x_341, x_3);
lean::dec(x_341);
lean::dec(x_345);
if (lean::obj_tag(x_348) == 0)
{
obj* x_354; obj* x_356; obj* x_357; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
x_354 = lean::cnstr_get(x_348, 0);
if (lean::is_exclusive(x_348)) {
 x_356 = x_348;
} else {
 lean::inc(x_354);
 lean::dec(x_348);
 x_356 = lean::box(0);
}
if (lean::is_scalar(x_356)) {
 x_357 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_357 = x_356;
}
lean::cnstr_set(x_357, 0, x_354);
return x_357;
}
else
{
obj* x_358; obj* x_361; 
x_358 = lean::cnstr_get(x_348, 0);
lean::inc(x_358);
lean::dec(x_348);
x_361 = lean::cnstr_get(x_358, 1);
lean::inc(x_361);
lean::dec(x_358);
x_1 = x_11;
x_2 = x_361;
goto _start;
}
}
}
}
}
}
}
}
lbl_17:
{
obj* x_365; 
x_365 = lean::cnstr_get(x_9, 1);
lean::inc(x_365);
lean::dec(x_9);
if (lean::obj_tag(x_365) == 0)
{
obj* x_368; 
x_368 = lean::cnstr_get(x_16, 1);
lean::inc(x_368);
lean::dec(x_16);
x_1 = x_11;
x_2 = x_368;
goto _start;
}
else
{
obj* x_372; obj* x_374; 
x_372 = lean::cnstr_get(x_365, 0);
if (lean::is_exclusive(x_365)) {
 lean::cnstr_set(x_365, 0, lean::box(0));
 x_374 = x_365;
} else {
 lean::inc(x_372);
 lean::dec(x_365);
 x_374 = lean::box(0);
}
switch (lean::obj_tag(x_372)) {
case 0:
{
obj* x_376; obj* x_380; 
lean::dec(x_372);
x_376 = lean::cnstr_get(x_16, 1);
lean::inc(x_376);
lean::dec(x_16);
lean::inc(x_3);
x_380 = l___private_init_lean_expander_1__pop__stx__arg(x_376, x_3);
if (lean::obj_tag(x_380) == 0)
{
obj* x_385; obj* x_387; obj* x_388; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_374);
x_385 = lean::cnstr_get(x_380, 0);
if (lean::is_exclusive(x_380)) {
 x_387 = x_380;
} else {
 lean::inc(x_385);
 lean::dec(x_380);
 x_387 = lean::box(0);
}
if (lean::is_scalar(x_387)) {
 x_388 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_388 = x_387;
}
lean::cnstr_set(x_388, 0, x_385);
return x_388;
}
else
{
obj* x_389; obj* x_392; obj* x_394; obj* x_397; obj* x_399; obj* x_401; obj* x_404; obj* x_405; obj* x_408; obj* x_409; obj* x_410; obj* x_411; obj* x_412; obj* x_413; obj* x_414; obj* x_415; 
x_389 = lean::cnstr_get(x_380, 0);
lean::inc(x_389);
lean::dec(x_380);
x_392 = lean::cnstr_get(x_389, 0);
lean::inc(x_392);
x_394 = lean::cnstr_get(x_389, 1);
lean::inc(x_394);
lean::dec(x_389);
x_397 = lean::cnstr_get(x_394, 0);
lean::inc(x_397);
x_399 = lean::cnstr_get(x_394, 1);
lean::inc(x_399);
x_401 = lean::cnstr_get(x_394, 2);
lean::inc(x_401);
lean::dec(x_394);
x_404 = l_lean_parser_term_binder__ident_has__view;
x_405 = lean::cnstr_get(x_404, 0);
lean::inc(x_405);
lean::dec(x_404);
x_408 = lean::apply_1(x_405, x_392);
x_409 = lean::box(0);
x_410 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_410, 0, x_408);
lean::cnstr_set(x_410, 1, x_409);
x_411 = lean::box(0);
x_412 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_412, 0, x_410);
lean::cnstr_set(x_412, 1, x_411);
x_413 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_413, 0, x_412);
if (lean::is_scalar(x_374)) {
 x_414 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_414 = x_374;
}
lean::cnstr_set(x_414, 0, x_413);
x_415 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_415, 0, x_397);
lean::cnstr_set(x_415, 1, x_399);
lean::cnstr_set(x_415, 2, x_401);
lean::cnstr_set(x_415, 3, x_414);
x_1 = x_11;
x_2 = x_415;
goto _start;
}
}
case 1:
{
obj* x_418; obj* x_422; 
lean::dec(x_372);
x_418 = lean::cnstr_get(x_16, 1);
lean::inc(x_418);
lean::dec(x_16);
lean::inc(x_3);
x_422 = l___private_init_lean_expander_1__pop__stx__arg(x_418, x_3);
if (lean::obj_tag(x_422) == 0)
{
obj* x_427; obj* x_429; obj* x_430; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_374);
x_427 = lean::cnstr_get(x_422, 0);
if (lean::is_exclusive(x_422)) {
 x_429 = x_422;
} else {
 lean::inc(x_427);
 lean::dec(x_422);
 x_429 = lean::box(0);
}
if (lean::is_scalar(x_429)) {
 x_430 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_430 = x_429;
}
lean::cnstr_set(x_430, 0, x_427);
return x_430;
}
else
{
obj* x_431; obj* x_434; obj* x_436; obj* x_439; obj* x_441; obj* x_443; obj* x_446; obj* x_447; obj* x_450; obj* x_451; obj* x_452; 
x_431 = lean::cnstr_get(x_422, 0);
lean::inc(x_431);
lean::dec(x_422);
x_434 = lean::cnstr_get(x_431, 0);
lean::inc(x_434);
x_436 = lean::cnstr_get(x_431, 1);
lean::inc(x_436);
lean::dec(x_431);
x_439 = lean::cnstr_get(x_436, 0);
lean::inc(x_439);
x_441 = lean::cnstr_get(x_436, 1);
lean::inc(x_441);
x_443 = lean::cnstr_get(x_436, 2);
lean::inc(x_443);
lean::dec(x_436);
x_446 = l_lean_parser_term_binders_has__view;
x_447 = lean::cnstr_get(x_446, 0);
lean::inc(x_447);
lean::dec(x_446);
x_450 = lean::apply_1(x_447, x_434);
if (lean::is_scalar(x_374)) {
 x_451 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_451 = x_374;
}
lean::cnstr_set(x_451, 0, x_450);
x_452 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_452, 0, x_439);
lean::cnstr_set(x_452, 1, x_441);
lean::cnstr_set(x_452, 2, x_443);
lean::cnstr_set(x_452, 3, x_451);
x_1 = x_11;
x_2 = x_452;
goto _start;
}
}
default:
{
obj* x_455; obj* x_458; 
lean::dec(x_374);
x_455 = lean::cnstr_get(x_372, 0);
lean::inc(x_455);
lean::dec(x_372);
x_458 = lean::cnstr_get(x_455, 1);
lean::inc(x_458);
if (lean::obj_tag(x_458) == 0)
{
obj* x_460; obj* x_463; obj* x_467; 
x_460 = lean::cnstr_get(x_16, 1);
lean::inc(x_460);
lean::dec(x_16);
x_463 = lean::cnstr_get(x_455, 0);
lean::inc(x_463);
lean::dec(x_455);
lean::inc(x_3);
x_467 = l___private_init_lean_expander_1__pop__stx__arg(x_460, x_3);
if (lean::obj_tag(x_467) == 0)
{
obj* x_472; obj* x_474; obj* x_475; 
lean::dec(x_463);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
x_472 = lean::cnstr_get(x_467, 0);
if (lean::is_exclusive(x_467)) {
 x_474 = x_467;
} else {
 lean::inc(x_472);
 lean::dec(x_467);
 x_474 = lean::box(0);
}
if (lean::is_scalar(x_474)) {
 x_475 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_475 = x_474;
}
lean::cnstr_set(x_475, 0, x_472);
return x_475;
}
else
{
obj* x_476; obj* x_479; obj* x_481; obj* x_483; obj* x_484; obj* x_486; obj* x_488; obj* x_489; obj* x_491; obj* x_492; obj* x_495; 
x_476 = lean::cnstr_get(x_467, 0);
lean::inc(x_476);
lean::dec(x_467);
x_479 = lean::cnstr_get(x_476, 0);
x_481 = lean::cnstr_get(x_476, 1);
if (lean::is_exclusive(x_476)) {
 x_483 = x_476;
} else {
 lean::inc(x_479);
 lean::inc(x_481);
 lean::dec(x_476);
 x_483 = lean::box(0);
}
x_484 = lean::cnstr_get(x_481, 0);
lean::inc(x_484);
x_486 = lean::cnstr_get(x_481, 1);
lean::inc(x_486);
if (lean::is_scalar(x_483)) {
 x_488 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_488 = x_483;
}
lean::cnstr_set(x_488, 0, x_463);
lean::cnstr_set(x_488, 1, x_479);
x_489 = lean::cnstr_get(x_481, 2);
lean::inc(x_489);
x_491 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_491, 0, x_488);
lean::cnstr_set(x_491, 1, x_489);
x_492 = lean::cnstr_get(x_481, 3);
lean::inc(x_492);
lean::dec(x_481);
x_495 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_495, 0, x_484);
lean::cnstr_set(x_495, 1, x_486);
lean::cnstr_set(x_495, 2, x_491);
lean::cnstr_set(x_495, 3, x_492);
x_1 = x_11;
x_2 = x_495;
goto _start;
}
}
else
{
obj* x_497; obj* x_499; obj* x_500; 
x_497 = lean::cnstr_get(x_458, 0);
if (lean::is_exclusive(x_458)) {
 lean::cnstr_set(x_458, 0, lean::box(0));
 x_499 = x_458;
} else {
 lean::inc(x_497);
 lean::dec(x_458);
 x_499 = lean::box(0);
}
x_500 = lean::cnstr_get(x_497, 1);
lean::inc(x_500);
lean::dec(x_497);
switch (lean::obj_tag(x_500)) {
case 0:
{
obj* x_505; obj* x_508; obj* x_512; 
lean::dec(x_500);
lean::dec(x_499);
x_505 = lean::cnstr_get(x_16, 1);
lean::inc(x_505);
lean::dec(x_16);
x_508 = lean::cnstr_get(x_455, 0);
lean::inc(x_508);
lean::dec(x_455);
lean::inc(x_3);
x_512 = l___private_init_lean_expander_1__pop__stx__arg(x_505, x_3);
if (lean::obj_tag(x_512) == 0)
{
obj* x_517; obj* x_519; obj* x_520; 
lean::dec(x_508);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
x_517 = lean::cnstr_get(x_512, 0);
if (lean::is_exclusive(x_512)) {
 x_519 = x_512;
} else {
 lean::inc(x_517);
 lean::dec(x_512);
 x_519 = lean::box(0);
}
if (lean::is_scalar(x_519)) {
 x_520 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_520 = x_519;
}
lean::cnstr_set(x_520, 0, x_517);
return x_520;
}
else
{
obj* x_521; obj* x_524; obj* x_526; obj* x_528; obj* x_529; obj* x_531; obj* x_533; obj* x_534; obj* x_536; obj* x_537; obj* x_540; 
x_521 = lean::cnstr_get(x_512, 0);
lean::inc(x_521);
lean::dec(x_512);
x_524 = lean::cnstr_get(x_521, 0);
x_526 = lean::cnstr_get(x_521, 1);
if (lean::is_exclusive(x_521)) {
 x_528 = x_521;
} else {
 lean::inc(x_524);
 lean::inc(x_526);
 lean::dec(x_521);
 x_528 = lean::box(0);
}
x_529 = lean::cnstr_get(x_526, 0);
lean::inc(x_529);
x_531 = lean::cnstr_get(x_526, 1);
lean::inc(x_531);
if (lean::is_scalar(x_528)) {
 x_533 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_533 = x_528;
}
lean::cnstr_set(x_533, 0, x_508);
lean::cnstr_set(x_533, 1, x_524);
x_534 = lean::cnstr_get(x_526, 2);
lean::inc(x_534);
x_536 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_536, 0, x_533);
lean::cnstr_set(x_536, 1, x_534);
x_537 = lean::cnstr_get(x_526, 3);
lean::inc(x_537);
lean::dec(x_526);
x_540 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_540, 0, x_529);
lean::cnstr_set(x_540, 1, x_531);
lean::cnstr_set(x_540, 2, x_536);
lean::cnstr_set(x_540, 3, x_537);
x_1 = x_11;
x_2 = x_540;
goto _start;
}
}
case 2:
{
obj* x_542; obj* x_545; obj* x_548; obj* x_552; 
x_542 = lean::cnstr_get(x_16, 1);
lean::inc(x_542);
lean::dec(x_16);
x_545 = lean::cnstr_get(x_455, 0);
lean::inc(x_545);
lean::dec(x_455);
x_548 = lean::cnstr_get(x_500, 0);
lean::inc(x_548);
lean::dec(x_500);
lean::inc(x_3);
x_552 = l___private_init_lean_expander_1__pop__stx__arg(x_542, x_3);
if (lean::obj_tag(x_552) == 0)
{
obj* x_559; obj* x_561; obj* x_562; 
lean::dec(x_499);
lean::dec(x_545);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_548);
x_559 = lean::cnstr_get(x_552, 0);
if (lean::is_exclusive(x_552)) {
 x_561 = x_552;
} else {
 lean::inc(x_559);
 lean::dec(x_552);
 x_561 = lean::box(0);
}
if (lean::is_scalar(x_561)) {
 x_562 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_562 = x_561;
}
lean::cnstr_set(x_562, 0, x_559);
return x_562;
}
else
{
obj* x_563; obj* x_566; obj* x_568; 
x_563 = lean::cnstr_get(x_552, 0);
lean::inc(x_563);
lean::dec(x_552);
x_566 = lean::cnstr_get(x_563, 1);
lean::inc(x_566);
x_568 = lean::cnstr_get(x_566, 3);
lean::inc(x_568);
if (lean::obj_tag(x_568) == 0)
{
obj* x_574; obj* x_575; obj* x_577; 
lean::dec(x_545);
lean::dec(x_563);
lean::dec(x_548);
lean::inc(x_0);
if (lean::is_scalar(x_499)) {
 x_574 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_574 = x_499;
}
lean::cnstr_set(x_574, 0, x_0);
x_575 = l___private_init_lean_expander_1__pop__stx__arg___closed__1;
lean::inc(x_3);
x_577 = l_lean_expander_error___at___private_init_lean_expander_1__pop__stx__arg___spec__1___rarg(x_574, x_575, x_566, x_3);
lean::dec(x_566);
lean::dec(x_574);
if (lean::obj_tag(x_577) == 0)
{
obj* x_583; obj* x_585; obj* x_586; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
x_583 = lean::cnstr_get(x_577, 0);
if (lean::is_exclusive(x_577)) {
 x_585 = x_577;
} else {
 lean::inc(x_583);
 lean::dec(x_577);
 x_585 = lean::box(0);
}
if (lean::is_scalar(x_585)) {
 x_586 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_586 = x_585;
}
lean::cnstr_set(x_586, 0, x_583);
return x_586;
}
else
{
obj* x_587; obj* x_590; 
x_587 = lean::cnstr_get(x_577, 0);
lean::inc(x_587);
lean::dec(x_577);
x_590 = lean::cnstr_get(x_587, 1);
lean::inc(x_590);
lean::dec(x_587);
x_1 = x_11;
x_2 = x_590;
goto _start;
}
}
else
{
obj* x_595; obj* x_597; obj* x_598; obj* x_600; obj* x_602; obj* x_604; obj* x_605; obj* x_607; obj* x_608; obj* x_611; obj* x_612; obj* x_614; obj* x_615; obj* x_616; obj* x_617; obj* x_618; obj* x_619; obj* x_622; obj* x_623; obj* x_624; obj* x_626; obj* x_627; obj* x_628; obj* x_629; obj* x_630; obj* x_633; obj* x_634; obj* x_635; obj* x_636; obj* x_637; 
lean::dec(x_499);
x_595 = lean::cnstr_get(x_563, 0);
if (lean::is_exclusive(x_563)) {
 lean::cnstr_release(x_563, 1);
 x_597 = x_563;
} else {
 lean::inc(x_595);
 lean::dec(x_563);
 x_597 = lean::box(0);
}
x_598 = lean::cnstr_get(x_566, 0);
x_600 = lean::cnstr_get(x_566, 1);
x_602 = lean::cnstr_get(x_566, 2);
if (lean::is_exclusive(x_566)) {
 lean::cnstr_release(x_566, 3);
 x_604 = x_566;
} else {
 lean::inc(x_598);
 lean::inc(x_600);
 lean::inc(x_602);
 lean::dec(x_566);
 x_604 = lean::box(0);
}
x_605 = lean::cnstr_get(x_568, 0);
lean::inc(x_605);
x_607 = l_lean_parser_term_lambda_has__view;
x_608 = lean::cnstr_get(x_607, 1);
lean::inc(x_608);
lean::dec(x_607);
x_611 = lean::box(0);
x_612 = lean::cnstr_get(x_548, 3);
lean::inc(x_612);
x_614 = lean::box(0);
x_615 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_615, 0, x_612);
lean::cnstr_set(x_615, 1, x_614);
x_616 = l_list_map___main___at_lean_expander_mk__notation__transformer___spec__3(x_615);
x_617 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_617, 0, x_616);
lean::cnstr_set(x_617, 1, x_611);
x_618 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_618, 0, x_617);
x_619 = lean::cnstr_get(x_548, 5);
lean::inc(x_619);
lean::dec(x_548);
x_622 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__2;
x_623 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__3;
x_624 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_624, 0, x_622);
lean::cnstr_set(x_624, 1, x_618);
lean::cnstr_set(x_624, 2, x_623);
lean::cnstr_set(x_624, 3, x_619);
lean::inc(x_608);
x_626 = lean::apply_1(x_608, x_624);
x_627 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_627, 0, x_622);
lean::cnstr_set(x_627, 1, x_605);
lean::cnstr_set(x_627, 2, x_623);
lean::cnstr_set(x_627, 3, x_595);
x_628 = lean::apply_1(x_608, x_627);
x_629 = l_lean_parser_term_app_has__view;
x_630 = lean::cnstr_get(x_629, 1);
lean::inc(x_630);
lean::dec(x_629);
x_633 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_633, 0, x_626);
lean::cnstr_set(x_633, 1, x_628);
x_634 = lean::apply_1(x_630, x_633);
if (lean::is_scalar(x_597)) {
 x_635 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_635 = x_597;
}
lean::cnstr_set(x_635, 0, x_545);
lean::cnstr_set(x_635, 1, x_634);
x_636 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_636, 0, x_635);
lean::cnstr_set(x_636, 1, x_602);
if (lean::is_scalar(x_604)) {
 x_637 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_637 = x_604;
}
lean::cnstr_set(x_637, 0, x_598);
lean::cnstr_set(x_637, 1, x_600);
lean::cnstr_set(x_637, 2, x_636);
lean::cnstr_set(x_637, 3, x_568);
x_1 = x_11;
x_2 = x_637;
goto _start;
}
}
}
default:
{
obj* x_641; obj* x_645; obj* x_646; obj* x_648; 
lean::dec(x_500);
lean::dec(x_455);
x_641 = lean::cnstr_get(x_16, 1);
lean::inc(x_641);
lean::dec(x_16);
lean::inc(x_0);
if (lean::is_scalar(x_499)) {
 x_645 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_645 = x_499;
}
lean::cnstr_set(x_645, 0, x_0);
x_646 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__1;
lean::inc(x_3);
x_648 = l_lean_expander_error___at___private_init_lean_expander_1__pop__stx__arg___spec__1___rarg(x_645, x_646, x_641, x_3);
lean::dec(x_641);
lean::dec(x_645);
if (lean::obj_tag(x_648) == 0)
{
obj* x_654; obj* x_656; obj* x_657; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
x_654 = lean::cnstr_get(x_648, 0);
if (lean::is_exclusive(x_648)) {
 x_656 = x_648;
} else {
 lean::inc(x_654);
 lean::dec(x_648);
 x_656 = lean::box(0);
}
if (lean::is_scalar(x_656)) {
 x_657 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_657 = x_656;
}
lean::cnstr_set(x_657, 0, x_654);
return x_657;
}
else
{
obj* x_658; obj* x_661; 
x_658 = lean::cnstr_get(x_648, 0);
lean::inc(x_658);
lean::dec(x_648);
x_661 = lean::cnstr_get(x_658, 1);
lean::inc(x_661);
lean::dec(x_658);
x_1 = x_11;
x_2 = x_661;
goto _start;
}
}
}
}
}
}
}
}
}
}
}
obj* l_list_map___main___at_lean_expander_mk__notation__transformer___spec__5(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_16; obj* x_17; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::cnstr_get(x_2, 0);
x_9 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 x_11 = x_2;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_2);
 x_11 = lean::box(0);
}
x_12 = l_list_map___main___at_lean_expander_mk__notation__transformer___spec__5(x_4);
x_13 = lean::cnstr_get(x_7, 2);
lean::inc(x_13);
lean::dec(x_7);
if (lean::is_scalar(x_11)) {
 x_16 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_16 = x_11;
}
lean::cnstr_set(x_16, 0, x_13);
lean::cnstr_set(x_16, 1, x_9);
if (lean::is_scalar(x_6)) {
 x_17 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_17 = x_6;
}
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_12);
return x_17;
}
}
}
obj* l_lean_parser_try__view___at_lean_expander_mk__notation__transformer___spec__6(obj* x_0) {
_start:
{
obj* x_1; uint8 x_2; 
x_1 = l_lean_parser_ident__univs;
x_2 = l_lean_parser_syntax_is__of__kind___main(x_1, x_0);
if (x_2 == 0)
{
obj* x_4; 
lean::dec(x_0);
x_4 = lean::box(0);
return x_4;
}
else
{
obj* x_5; obj* x_6; obj* x_9; obj* x_10; 
x_5 = l_lean_parser_ident__univs_has__view;
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
lean::dec(x_5);
x_9 = lean::apply_1(x_6, x_0);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_9);
return x_10;
}
}
}
obj* l_list_assoc___main___at_lean_expander_mk__notation__transformer___spec__7(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_10; uint8 x_13; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_3, 1);
lean::inc(x_10);
lean::dec(x_3);
x_13 = lean_name_dec_eq(x_8, x_1);
lean::dec(x_8);
if (x_13 == 0)
{
lean::dec(x_10);
x_0 = x_5;
goto _start;
}
else
{
obj* x_18; 
lean::dec(x_5);
x_18 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_18, 0, x_10);
return x_18;
}
}
}
}
obj* l_lean_expander_mk__notation__transformer___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_try__view___at_lean_expander_mk__notation__transformer___spec__6(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; 
lean::dec(x_0);
x_4 = lean::box(0);
return x_4;
}
else
{
obj* x_5; obj* x_8; 
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
obj* x_10; obj* x_13; obj* x_16; 
x_10 = lean::cnstr_get(x_5, 0);
lean::inc(x_10);
lean::dec(x_5);
x_13 = lean::cnstr_get(x_10, 2);
lean::inc(x_13);
lean::dec(x_10);
x_16 = l_list_assoc___main___at_lean_expander_mk__notation__transformer___spec__7(x_0, x_13);
lean::dec(x_13);
return x_16;
}
else
{
obj* x_21; 
lean::dec(x_8);
lean::dec(x_5);
lean::dec(x_0);
x_21 = lean::box(0);
return x_21;
}
}
}
}
obj* l_lean_expander_mk__notation__transformer(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; 
lean::inc(x_1);
x_4 = l_lean_parser_syntax_as__node___main(x_1);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_1);
x_7 = l___private_init_lean_expander_1__pop__stx__arg___closed__1;
x_8 = l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1___rarg(x_6, x_7, x_2);
lean::dec(x_6);
return x_8;
}
else
{
obj* x_10; obj* x_12; obj* x_13; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_23; obj* x_25; obj* x_27; 
x_10 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_set(x_4, 0, lean::box(0));
 x_12 = x_4;
} else {
 lean::inc(x_10);
 lean::dec(x_4);
 x_12 = lean::box(0);
}
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
lean::dec(x_10);
x_16 = lean::box(0);
x_17 = lean::box(0);
lean::inc(x_1);
x_19 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_19, 0, x_1);
lean::cnstr_set(x_19, 1, x_13);
lean::cnstr_set(x_19, 2, x_16);
lean::cnstr_set(x_19, 3, x_17);
x_20 = lean::cnstr_get(x_0, 1);
lean::inc(x_20);
lean::dec(x_0);
x_23 = lean::cnstr_get(x_20, 2);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_23, 0);
lean::inc(x_25);
if (lean::obj_tag(x_25) == 0)
{
obj* x_29; obj* x_30; 
x_29 = lean::box(0);
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_19);
x_27 = x_30;
goto lbl_28;
}
else
{
obj* x_31; obj* x_35; 
x_31 = lean::cnstr_get(x_25, 0);
lean::inc(x_31);
lean::dec(x_25);
lean::inc(x_2);
x_35 = l___private_init_lean_expander_1__pop__stx__arg(x_19, x_2);
if (lean::obj_tag(x_35) == 0)
{
obj* x_42; obj* x_44; obj* x_45; 
lean::dec(x_1);
lean::dec(x_12);
lean::dec(x_2);
lean::dec(x_31);
lean::dec(x_20);
lean::dec(x_23);
x_42 = lean::cnstr_get(x_35, 0);
if (lean::is_exclusive(x_35)) {
 x_44 = x_35;
} else {
 lean::inc(x_42);
 lean::dec(x_35);
 x_44 = lean::box(0);
}
if (lean::is_scalar(x_44)) {
 x_45 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_45 = x_44;
}
lean::cnstr_set(x_45, 0, x_42);
return x_45;
}
else
{
obj* x_46; obj* x_49; obj* x_51; obj* x_53; obj* x_54; obj* x_56; obj* x_58; obj* x_59; obj* x_61; obj* x_62; obj* x_65; obj* x_66; obj* x_67; 
x_46 = lean::cnstr_get(x_35, 0);
lean::inc(x_46);
lean::dec(x_35);
x_49 = lean::cnstr_get(x_46, 0);
x_51 = lean::cnstr_get(x_46, 1);
if (lean::is_exclusive(x_46)) {
 x_53 = x_46;
} else {
 lean::inc(x_49);
 lean::inc(x_51);
 lean::dec(x_46);
 x_53 = lean::box(0);
}
x_54 = lean::cnstr_get(x_51, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_51, 1);
lean::inc(x_56);
if (lean::is_scalar(x_53)) {
 x_58 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_58 = x_53;
}
lean::cnstr_set(x_58, 0, x_31);
lean::cnstr_set(x_58, 1, x_49);
x_59 = lean::cnstr_get(x_51, 2);
lean::inc(x_59);
x_61 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_61, 0, x_58);
lean::cnstr_set(x_61, 1, x_59);
x_62 = lean::cnstr_get(x_51, 3);
lean::inc(x_62);
lean::dec(x_51);
x_65 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_65, 0, x_54);
lean::cnstr_set(x_65, 1, x_56);
lean::cnstr_set(x_65, 2, x_61);
lean::cnstr_set(x_65, 3, x_62);
x_66 = lean::box(0);
x_67 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_65);
x_27 = x_67;
goto lbl_28;
}
}
lbl_28:
{
obj* x_68; obj* x_71; obj* x_74; 
x_68 = lean::cnstr_get(x_27, 1);
lean::inc(x_68);
lean::dec(x_27);
x_71 = lean::cnstr_get(x_23, 1);
lean::inc(x_71);
lean::dec(x_23);
x_74 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4(x_1, x_71, x_68, x_2);
if (lean::obj_tag(x_74) == 0)
{
obj* x_77; obj* x_79; obj* x_80; 
lean::dec(x_12);
lean::dec(x_20);
x_77 = lean::cnstr_get(x_74, 0);
if (lean::is_exclusive(x_74)) {
 x_79 = x_74;
} else {
 lean::inc(x_77);
 lean::dec(x_74);
 x_79 = lean::box(0);
}
if (lean::is_scalar(x_79)) {
 x_80 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_80 = x_79;
}
lean::cnstr_set(x_80, 0, x_77);
return x_80;
}
else
{
obj* x_81; obj* x_83; obj* x_84; obj* x_87; obj* x_90; obj* x_91; obj* x_92; obj* x_95; obj* x_96; obj* x_97; 
x_81 = lean::cnstr_get(x_74, 0);
if (lean::is_exclusive(x_74)) {
 x_83 = x_74;
} else {
 lean::inc(x_81);
 lean::dec(x_74);
 x_83 = lean::box(0);
}
x_84 = lean::cnstr_get(x_81, 1);
lean::inc(x_84);
lean::dec(x_81);
x_87 = lean::cnstr_get(x_84, 2);
lean::inc(x_87);
lean::dec(x_84);
x_90 = l_list_map___main___at_lean_expander_mk__notation__transformer___spec__5(x_87);
x_91 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_mk__notation__transformer___lambda__1), 2, 1);
lean::closure_set(x_91, 0, x_90);
x_92 = lean::cnstr_get(x_20, 4);
lean::inc(x_92);
lean::dec(x_20);
x_95 = l_lean_parser_syntax_mreplace___main___at_lean_parser_syntax_replace___spec__1(x_91, x_92);
if (lean::is_scalar(x_12)) {
 x_96 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_96 = x_12;
}
lean::cnstr_set(x_96, 0, x_95);
if (lean::is_scalar(x_83)) {
 x_97 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_97 = x_83;
}
lean::cnstr_set(x_97, 0, x_96);
return x_97;
}
}
}
}
}
obj* l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1___rarg(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_list_assoc___main___at_lean_expander_mk__notation__transformer___spec__7___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_list_assoc___main___at_lean_expander_mk__notation__transformer___spec__7(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_lean_expander_mixfix__to__notation__spec___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::box(0);
x_3 = lean::mk_string("b");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string(".");
lean::inc(x_4);
x_7 = l_lean_name_to__string__with__sep___main(x_5, x_4);
lean::dec(x_5);
x_9 = l_lean_parser_substring_of__string(x_7);
x_10 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_10, 0, x_0);
lean::cnstr_set(x_10, 1, x_9);
lean::cnstr_set(x_10, 2, x_4);
lean::cnstr_set(x_10, 3, x_1);
lean::cnstr_set(x_10, 4, x_1);
return x_10;
}
}
obj* _init_l_lean_expander_mixfix__to__notation__spec___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::box(0);
x_1 = lean::mk_string("a");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::box(0);
x_4 = lean::mk_string(".");
lean::inc(x_2);
x_6 = l_lean_name_to__string__with__sep___main(x_4, x_2);
lean::dec(x_4);
x_8 = l_lean_parser_substring_of__string(x_6);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_10, 0, x_3);
lean::cnstr_set(x_10, 1, x_8);
lean::cnstr_set(x_10, 2, x_2);
lean::cnstr_set(x_10, 3, x_9);
lean::cnstr_set(x_10, 4, x_9);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
return x_11;
}
}
obj* _init_l_lean_expander_mixfix__to__notation__spec___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::box(0);
x_3 = lean::mk_string("b");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string(".");
lean::inc(x_4);
x_7 = l_lean_name_to__string__with__sep___main(x_5, x_4);
lean::dec(x_5);
x_9 = l_lean_parser_substring_of__string(x_7);
x_10 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_10, 0, x_0);
lean::cnstr_set(x_10, 1, x_9);
lean::cnstr_set(x_10, 2, x_4);
lean::cnstr_set(x_10, 3, x_1);
lean::cnstr_set(x_10, 4, x_1);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_0);
x_12 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_12, 0, x_11);
x_13 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_13, 0, x_12);
return x_13;
}
}
obj* _init_l_lean_expander_mixfix__to__notation__spec___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string(":");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_expander_mixfix__to__notation__spec___closed__5() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("b");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string(".");
lean::inc(x_3);
x_6 = l_lean_name_to__string__with__sep___main(x_4, x_3);
lean::dec(x_4);
x_8 = l_lean_parser_substring_of__string(x_6);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_10, 0, x_0);
lean::cnstr_set(x_10, 1, x_8);
lean::cnstr_set(x_10, 2, x_3);
lean::cnstr_set(x_10, 3, x_9);
lean::cnstr_set(x_10, 4, x_9);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_0);
x_12 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_12, 0, x_11);
x_13 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_13, 0, x_12);
return x_13;
}
}
obj* _init_l_lean_expander_mixfix__to__notation__spec___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("b");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string(".");
lean::inc(x_3);
x_6 = l_lean_name_to__string__with__sep___main(x_4, x_3);
lean::dec(x_4);
x_8 = l_lean_parser_substring_of__string(x_6);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_10, 0, x_0);
lean::cnstr_set(x_10, 1, x_8);
lean::cnstr_set(x_10, 2, x_3);
lean::cnstr_set(x_10, 3, x_9);
lean::cnstr_set(x_10, 4, x_9);
return x_10;
}
}
obj* _init_l_lean_expander_mixfix__to__notation__spec___closed__7() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid `infixr` declaration, given precedence must greater than zero");
return x_0;
}
}
obj* l_lean_expander_mixfix__to__notation__spec(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; 
x_5 = lean::cnstr_get(x_1, 3);
lean::inc(x_5);
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_10; obj* x_11; 
lean::dec(x_2);
x_10 = lean::box(0);
x_11 = lean::box(0);
if (lean::obj_tag(x_5) == 0)
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_12 = l_lean_expander_mixfix__to__notation__spec___closed__5;
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_1);
lean::cnstr_set(x_13, 1, x_12);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_10);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_16, 0, x_15);
return x_16;
}
else
{
obj* x_17; obj* x_19; obj* x_20; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_17 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 x_19 = x_5;
} else {
 lean::inc(x_17);
 lean::dec(x_5);
 x_19 = lean::box(0);
}
x_20 = lean::cnstr_get(x_17, 1);
lean::inc(x_20);
lean::dec(x_17);
x_23 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_23, 0, x_20);
x_24 = l_lean_expander_mixfix__to__notation__spec___closed__4;
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_23);
if (lean::is_scalar(x_19)) {
 x_26 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_26 = x_19;
}
lean::cnstr_set(x_26, 0, x_25);
x_27 = l_lean_expander_mixfix__to__notation__spec___closed__6;
x_28 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_26);
x_29 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_29, 0, x_28);
x_30 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_30, 0, x_29);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_1);
lean::cnstr_set(x_31, 1, x_30);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_11);
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_10);
lean::cnstr_set(x_33, 1, x_32);
x_34 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_34, 0, x_33);
return x_34;
}
}
case 3:
{
if (lean::obj_tag(x_5) == 0)
{
obj* x_36; 
lean::dec(x_2);
x_36 = lean::box(0);
x_3 = x_36;
goto lbl_4;
}
else
{
obj* x_37; obj* x_39; obj* x_40; obj* x_42; obj* x_43; uint8 x_44; 
x_37 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_set(x_5, 0, lean::box(0));
 x_39 = x_5;
} else {
 lean::inc(x_37);
 lean::dec(x_5);
 x_39 = lean::box(0);
}
x_40 = lean::cnstr_get(x_37, 1);
lean::inc(x_40);
x_42 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_40);
x_43 = lean::mk_nat_obj(0u);
x_44 = lean::nat_dec_eq(x_42, x_43);
if (x_44 == 0)
{
obj* x_47; obj* x_48; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; 
lean::dec(x_2);
lean::dec(x_37);
x_47 = lean::mk_nat_obj(1u);
x_48 = lean::nat_sub(x_42, x_47);
lean::dec(x_42);
x_50 = l_lean_parser_number_view_of__nat(x_48);
x_51 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_51, 0, x_50);
x_52 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_52, 0, x_51);
x_53 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_53, 0, x_52);
x_54 = l_lean_expander_mixfix__to__notation__spec___closed__4;
x_55 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_55, 0, x_54);
lean::cnstr_set(x_55, 1, x_53);
if (lean::is_scalar(x_39)) {
 x_56 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_56 = x_39;
}
lean::cnstr_set(x_56, 0, x_55);
x_3 = x_56;
goto lbl_4;
}
else
{
obj* x_58; obj* x_59; obj* x_62; obj* x_63; obj* x_64; obj* x_65; 
lean::dec(x_42);
x_58 = l_lean_parser_command_notation__spec_precedence_has__view;
x_59 = lean::cnstr_get(x_58, 1);
lean::inc(x_59);
lean::dec(x_58);
x_62 = lean::apply_1(x_59, x_37);
if (lean::is_scalar(x_39)) {
 x_63 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_63 = x_39;
}
lean::cnstr_set(x_63, 0, x_62);
x_64 = l_lean_expander_mixfix__to__notation__spec___closed__7;
x_65 = l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1___rarg(x_63, x_64, x_2);
lean::dec(x_63);
if (lean::obj_tag(x_65) == 0)
{
obj* x_68; obj* x_70; obj* x_71; 
lean::dec(x_1);
x_68 = lean::cnstr_get(x_65, 0);
if (lean::is_exclusive(x_65)) {
 x_70 = x_65;
} else {
 lean::inc(x_68);
 lean::dec(x_65);
 x_70 = lean::box(0);
}
if (lean::is_scalar(x_70)) {
 x_71 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_71 = x_70;
}
lean::cnstr_set(x_71, 0, x_68);
return x_71;
}
else
{
obj* x_72; 
x_72 = lean::cnstr_get(x_65, 0);
lean::inc(x_72);
lean::dec(x_65);
x_3 = x_72;
goto lbl_4;
}
}
}
}
case 4:
{
obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; 
lean::dec(x_5);
lean::dec(x_2);
x_77 = lean::box(0);
x_78 = lean::box(0);
x_79 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_79, 0, x_1);
lean::cnstr_set(x_79, 1, x_77);
x_80 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_80, 0, x_79);
lean::cnstr_set(x_80, 1, x_78);
x_81 = l_lean_expander_mixfix__to__notation__spec___closed__2;
x_82 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_82, 0, x_81);
lean::cnstr_set(x_82, 1, x_80);
x_83 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_83, 0, x_82);
return x_83;
}
default:
{
obj* x_85; 
lean::dec(x_2);
x_85 = lean::box(0);
x_7 = x_85;
goto lbl_8;
}
}
lbl_4:
{
obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; obj* x_94; obj* x_95; 
x_86 = lean::box(0);
x_87 = l_lean_expander_mixfix__to__notation__spec___closed__1;
x_88 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_88, 0, x_87);
lean::cnstr_set(x_88, 1, x_3);
x_89 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_89, 0, x_88);
x_90 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_90, 0, x_89);
x_91 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_91, 0, x_1);
lean::cnstr_set(x_91, 1, x_90);
x_92 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_92, 0, x_91);
lean::cnstr_set(x_92, 1, x_86);
x_93 = l_lean_expander_mixfix__to__notation__spec___closed__2;
x_94 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_94, 0, x_93);
lean::cnstr_set(x_94, 1, x_92);
x_95 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_95, 0, x_94);
return x_95;
}
lbl_8:
{
obj* x_97; 
lean::dec(x_7);
x_97 = lean::box(0);
if (lean::obj_tag(x_5) == 0)
{
obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; 
x_98 = l_lean_expander_mixfix__to__notation__spec___closed__3;
x_99 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_99, 0, x_1);
lean::cnstr_set(x_99, 1, x_98);
x_100 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_100, 0, x_99);
lean::cnstr_set(x_100, 1, x_97);
x_101 = l_lean_expander_mixfix__to__notation__spec___closed__2;
x_102 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_102, 0, x_101);
lean::cnstr_set(x_102, 1, x_100);
x_103 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_103, 0, x_102);
return x_103;
}
else
{
obj* x_104; obj* x_106; obj* x_107; obj* x_110; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; obj* x_120; obj* x_121; obj* x_122; 
x_104 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 x_106 = x_5;
} else {
 lean::inc(x_104);
 lean::dec(x_5);
 x_106 = lean::box(0);
}
x_107 = lean::cnstr_get(x_104, 1);
lean::inc(x_107);
lean::dec(x_104);
x_110 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_110, 0, x_107);
x_111 = l_lean_expander_mixfix__to__notation__spec___closed__4;
x_112 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_112, 0, x_111);
lean::cnstr_set(x_112, 1, x_110);
if (lean::is_scalar(x_106)) {
 x_113 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_113 = x_106;
}
lean::cnstr_set(x_113, 0, x_112);
x_114 = l_lean_expander_mixfix__to__notation__spec___closed__1;
x_115 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_115, 0, x_114);
lean::cnstr_set(x_115, 1, x_113);
x_116 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_116, 0, x_115);
x_117 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_117, 0, x_116);
x_118 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_118, 0, x_1);
lean::cnstr_set(x_118, 1, x_117);
x_119 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_119, 0, x_118);
lean::cnstr_set(x_119, 1, x_97);
x_120 = l_lean_expander_mixfix__to__notation__spec___closed__2;
x_121 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_121, 0, x_120);
lean::cnstr_set(x_121, 1, x_119);
x_122 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_122, 0, x_121);
return x_122;
}
}
}
}
obj* l_lean_expander_mixfix__to__notation__spec___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_expander_mixfix__to__notation__spec(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* _init_l_lean_expander_mixfix_transform___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_0 = lean::box(0);
x_1 = l_lean_parser_ident__univs_has__view;
x_2 = lean::cnstr_get(x_1, 1);
lean::inc(x_2);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = lean::mk_string("a");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string(".");
lean::inc(x_7);
x_10 = l_lean_name_to__string__with__sep___main(x_8, x_7);
lean::dec(x_8);
x_12 = l_lean_parser_substring_of__string(x_10);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_14, 0, x_0);
lean::cnstr_set(x_14, 1, x_12);
lean::cnstr_set(x_14, 2, x_7);
lean::cnstr_set(x_14, 3, x_13);
lean::cnstr_set(x_14, 4, x_13);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_0);
x_16 = lean::apply_1(x_2, x_15);
return x_16;
}
}
obj* _init_l_lean_expander_mixfix_transform___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_0 = lean::box(0);
x_1 = l_lean_parser_ident__univs_has__view;
x_2 = lean::cnstr_get(x_1, 1);
lean::inc(x_2);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = lean::box(0);
x_7 = lean::mk_string("b");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean::mk_string(".");
lean::inc(x_8);
x_11 = l_lean_name_to__string__with__sep___main(x_9, x_8);
lean::dec(x_9);
x_13 = l_lean_parser_substring_of__string(x_11);
x_14 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_14, 0, x_0);
lean::cnstr_set(x_14, 1, x_13);
lean::cnstr_set(x_14, 2, x_8);
lean::cnstr_set(x_14, 3, x_5);
lean::cnstr_set(x_14, 4, x_5);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_0);
x_16 = lean::apply_1(x_2, x_15);
return x_16;
}
}
obj* _init_l_lean_expander_mixfix_transform___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("notation");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_expander_mixfix_transform___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string(":=");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_expander_mixfix_transform___closed__5() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_0 = lean::box(0);
x_1 = l_lean_parser_ident__univs_has__view;
x_2 = lean::cnstr_get(x_1, 1);
lean::inc(x_2);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = lean::mk_string("b");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean::mk_string(".");
lean::inc(x_7);
x_10 = l_lean_name_to__string__with__sep___main(x_8, x_7);
lean::dec(x_8);
x_12 = l_lean_parser_substring_of__string(x_10);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_14, 0, x_0);
lean::cnstr_set(x_14, 1, x_12);
lean::cnstr_set(x_14, 2, x_7);
lean::cnstr_set(x_14, 3, x_13);
lean::cnstr_set(x_14, 4, x_13);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_0);
x_16 = lean::apply_1(x_2, x_15);
return x_16;
}
}
obj* _init_l_lean_expander_mixfix_transform___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_string("`");
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
}
obj* l_lean_expander_mixfix_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_6; obj* x_7; obj* x_9; obj* x_11; 
x_2 = l_lean_parser_command_mixfix_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
lean::dec(x_2);
x_6 = lean::apply_1(x_3, x_0);
x_7 = lean::cnstr_get(x_6, 2);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
if (lean::obj_tag(x_7) == 0)
{
obj* x_13; 
x_13 = lean::cnstr_get(x_7, 0);
lean::inc(x_13);
lean::dec(x_7);
x_11 = x_13;
goto lbl_12;
}
else
{
obj* x_16; obj* x_19; obj* x_20; obj* x_21; 
x_16 = lean::cnstr_get(x_7, 0);
lean::inc(x_16);
lean::dec(x_7);
x_19 = lean::box(0);
x_20 = l_lean_expander_mixfix_transform___closed__6;
x_21 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_16);
lean::cnstr_set(x_21, 2, x_20);
lean::cnstr_set(x_21, 3, x_19);
x_11 = x_21;
goto lbl_12;
}
lbl_12:
{
obj* x_22; 
x_22 = l_lean_expander_mixfix__to__notation__spec(x_9, x_11, x_1);
if (lean::obj_tag(x_22) == 0)
{
obj* x_25; obj* x_27; obj* x_28; 
lean::dec(x_6);
lean::dec(x_9);
x_25 = lean::cnstr_get(x_22, 0);
if (lean::is_exclusive(x_22)) {
 x_27 = x_22;
} else {
 lean::inc(x_25);
 lean::dec(x_22);
 x_27 = lean::box(0);
}
if (lean::is_scalar(x_27)) {
 x_28 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_28 = x_27;
}
lean::cnstr_set(x_28, 0, x_25);
return x_28;
}
else
{
obj* x_29; obj* x_31; obj* x_32; obj* x_33; obj* x_36; obj* x_38; 
x_29 = lean::cnstr_get(x_22, 0);
if (lean::is_exclusive(x_22)) {
 lean::cnstr_set(x_22, 0, lean::box(0));
 x_31 = x_22;
} else {
 lean::inc(x_29);
 lean::dec(x_22);
 x_31 = lean::box(0);
}
x_32 = l_lean_parser_command_notation_has__view;
x_33 = lean::cnstr_get(x_32, 1);
lean::inc(x_33);
lean::dec(x_32);
x_36 = lean::cnstr_get(x_6, 0);
lean::inc(x_36);
switch (lean::obj_tag(x_9)) {
case 0:
{
obj* x_42; obj* x_43; obj* x_46; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; 
lean::dec(x_9);
lean::dec(x_31);
x_42 = l_lean_parser_term_app_has__view;
x_43 = lean::cnstr_get(x_42, 1);
lean::inc(x_43);
lean::dec(x_42);
x_46 = lean::cnstr_get(x_6, 4);
lean::inc(x_46);
lean::dec(x_6);
x_49 = l_lean_expander_mixfix_transform___closed__5;
x_50 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_50, 0, x_46);
lean::cnstr_set(x_50, 1, x_49);
x_51 = lean::apply_1(x_43, x_50);
x_52 = l_lean_expander_mixfix_transform___closed__3;
x_53 = l_lean_expander_mixfix_transform___closed__4;
x_54 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_54, 0, x_36);
lean::cnstr_set(x_54, 1, x_52);
lean::cnstr_set(x_54, 2, x_29);
lean::cnstr_set(x_54, 3, x_53);
lean::cnstr_set(x_54, 4, x_51);
x_55 = lean::apply_1(x_33, x_54);
x_56 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_56, 0, x_55);
x_57 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_57, 0, x_56);
return x_57;
}
case 4:
{
obj* x_60; obj* x_61; obj* x_64; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; 
lean::dec(x_9);
lean::dec(x_31);
x_60 = l_lean_parser_term_app_has__view;
x_61 = lean::cnstr_get(x_60, 1);
lean::inc(x_61);
lean::dec(x_60);
x_64 = lean::cnstr_get(x_6, 4);
lean::inc(x_64);
lean::dec(x_6);
x_67 = l_lean_expander_mixfix_transform___closed__1;
x_68 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_68, 0, x_64);
lean::cnstr_set(x_68, 1, x_67);
x_69 = lean::apply_1(x_61, x_68);
x_70 = l_lean_expander_mixfix_transform___closed__3;
x_71 = l_lean_expander_mixfix_transform___closed__4;
x_72 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_72, 0, x_36);
lean::cnstr_set(x_72, 1, x_70);
lean::cnstr_set(x_72, 2, x_29);
lean::cnstr_set(x_72, 3, x_71);
lean::cnstr_set(x_72, 4, x_69);
x_73 = lean::apply_1(x_33, x_72);
x_74 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_74, 0, x_73);
x_75 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_75, 0, x_74);
return x_75;
}
default:
{
obj* x_77; 
lean::dec(x_9);
x_77 = lean::box(0);
x_38 = x_77;
goto lbl_39;
}
}
lbl_39:
{
obj* x_79; obj* x_80; obj* x_83; obj* x_86; obj* x_87; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; obj* x_94; obj* x_95; obj* x_96; obj* x_97; obj* x_98; 
lean::dec(x_38);
x_79 = l_lean_parser_term_app_has__view;
x_80 = lean::cnstr_get(x_79, 1);
lean::inc(x_80);
lean::dec(x_79);
x_83 = lean::cnstr_get(x_6, 4);
lean::inc(x_83);
lean::dec(x_6);
x_86 = l_lean_expander_mixfix_transform___closed__1;
x_87 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_87, 0, x_83);
lean::cnstr_set(x_87, 1, x_86);
lean::inc(x_80);
x_89 = lean::apply_1(x_80, x_87);
x_90 = l_lean_expander_mixfix_transform___closed__2;
x_91 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_91, 0, x_89);
lean::cnstr_set(x_91, 1, x_90);
x_92 = lean::apply_1(x_80, x_91);
x_93 = l_lean_expander_mixfix_transform___closed__3;
x_94 = l_lean_expander_mixfix_transform___closed__4;
x_95 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_95, 0, x_36);
lean::cnstr_set(x_95, 1, x_93);
lean::cnstr_set(x_95, 2, x_29);
lean::cnstr_set(x_95, 3, x_94);
lean::cnstr_set(x_95, 4, x_92);
x_96 = lean::apply_1(x_33, x_95);
x_97 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_97, 0, x_96);
if (lean::is_scalar(x_31)) {
 x_98 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_98 = x_31;
}
lean::cnstr_set(x_98, 0, x_97);
return x_98;
}
}
}
}
}
obj* _init_l_lean_expander_reserve__mixfix_transform___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("reserve");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* l_lean_expander_reserve__mixfix_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_6; obj* x_7; obj* x_9; obj* x_12; 
x_2 = l_lean_parser_command_reserve__mixfix_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
lean::dec(x_2);
x_6 = lean::apply_1(x_3, x_0);
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 2);
lean::inc(x_9);
lean::dec(x_6);
x_12 = l_lean_expander_mixfix__to__notation__spec(x_7, x_9, x_1);
lean::dec(x_7);
if (lean::obj_tag(x_12) == 0)
{
obj* x_14; obj* x_16; obj* x_17; 
x_14 = lean::cnstr_get(x_12, 0);
if (lean::is_exclusive(x_12)) {
 x_16 = x_12;
} else {
 lean::inc(x_14);
 lean::dec(x_12);
 x_16 = lean::box(0);
}
if (lean::is_scalar(x_16)) {
 x_17 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_17 = x_16;
}
lean::cnstr_set(x_17, 0, x_14);
return x_17;
}
else
{
obj* x_18; obj* x_20; obj* x_21; obj* x_22; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_18 = lean::cnstr_get(x_12, 0);
if (lean::is_exclusive(x_12)) {
 x_20 = x_12;
} else {
 lean::inc(x_18);
 lean::dec(x_12);
 x_20 = lean::box(0);
}
x_21 = l_lean_parser_command_reserve__notation_has__view;
x_22 = lean::cnstr_get(x_21, 1);
lean::inc(x_22);
lean::dec(x_21);
x_25 = l_lean_expander_reserve__mixfix_transform___closed__1;
x_26 = l_lean_expander_mixfix_transform___closed__3;
x_27 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_27, 0, x_25);
lean::cnstr_set(x_27, 1, x_26);
lean::cnstr_set(x_27, 2, x_18);
x_28 = lean::apply_1(x_22, x_27);
x_29 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_29, 0, x_28);
if (lean::is_scalar(x_20)) {
 x_30 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_30 = x_20;
}
lean::cnstr_set(x_30, 0, x_29);
return x_30;
}
}
}
obj* _init_l_lean_expander_mk__simple__binder___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string(" : ");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_expander_mk__simple__binder___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("{");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_expander_mk__simple__binder___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("}");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_expander_mk__simple__binder___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("\xe2\xa6\x83");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_expander_mk__simple__binder___closed__5() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("\xe2\xa6\x84");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_expander_mk__simple__binder___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("[");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_expander_mk__simple__binder___closed__7() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("]");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* l_lean_expander_mk__simple__binder(obj* x_0, uint8 x_1, obj* x_2) {
_start:
{
switch (x_1) {
case 1:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_3 = l_lean_expander_mk__simple__binder___closed__2;
x_4 = l_lean_expander_mk__simple__binder___closed__1;
x_5 = l_lean_expander_mk__simple__binder___closed__3;
x_6 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_6, 0, x_3);
lean::cnstr_set(x_6, 1, x_0);
lean::cnstr_set(x_6, 2, x_4);
lean::cnstr_set(x_6, 3, x_2);
lean::cnstr_set(x_6, 4, x_5);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
case 2:
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = l_lean_expander_mk__simple__binder___closed__4;
x_9 = l_lean_expander_mk__simple__binder___closed__1;
x_10 = l_lean_expander_mk__simple__binder___closed__5;
x_11 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_0);
lean::cnstr_set(x_11, 2, x_9);
lean::cnstr_set(x_11, 3, x_2);
lean::cnstr_set(x_11, 4, x_10);
x_12 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_12, 0, x_11);
return x_12;
}
case 3:
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_13 = l_lean_expander_mk__simple__binder___closed__6;
x_14 = l_lean_expander_mk__simple__binder___closed__1;
x_15 = l_lean_expander_mk__simple__binder___closed__7;
x_16 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_16, 0, x_13);
lean::cnstr_set(x_16, 1, x_0);
lean::cnstr_set(x_16, 2, x_14);
lean::cnstr_set(x_16, 3, x_2);
lean::cnstr_set(x_16, 4, x_15);
x_17 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_17, 0, x_16);
return x_17;
}
default:
{
obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_18 = l_lean_expander_coe__binder__bracketed__binder___closed__1;
x_19 = l_lean_expander_mk__simple__binder___closed__1;
x_20 = l_lean_expander_coe__binder__bracketed__binder___closed__2;
x_21 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_21, 0, x_18);
lean::cnstr_set(x_21, 1, x_0);
lean::cnstr_set(x_21, 2, x_19);
lean::cnstr_set(x_21, 3, x_2);
lean::cnstr_set(x_21, 4, x_20);
x_22 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_22, 0, x_21);
return x_22;
}
}
}
}
obj* l_lean_expander_mk__simple__binder___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = lean::unbox(x_1);
x_4 = l_lean_expander_mk__simple__binder(x_0, x_3, x_2);
return x_4;
}
}
obj* _init_l_lean_expander_binder__ident__to__ident___main___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("a");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::box(0);
x_4 = lean::mk_string(".");
lean::inc(x_2);
x_6 = l_lean_name_to__string__with__sep___main(x_4, x_2);
lean::dec(x_4);
x_8 = l_lean_parser_substring_of__string(x_6);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_10, 0, x_3);
lean::cnstr_set(x_10, 1, x_8);
lean::cnstr_set(x_10, 2, x_2);
lean::cnstr_set(x_10, 3, x_9);
lean::cnstr_set(x_10, 4, x_9);
return x_10;
}
}
obj* l_lean_expander_binder__ident__to__ident___main(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
return x_1;
}
else
{
obj* x_3; 
x_3 = l_lean_expander_binder__ident__to__ident___main___closed__1;
return x_3;
}
}
}
obj* l_lean_expander_binder__ident__to__ident___main___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_expander_binder__ident__to__ident___main(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_expander_binder__ident__to__ident(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_expander_binder__ident__to__ident___main(x_0);
return x_1;
}
}
obj* l_lean_expander_binder__ident__to__ident___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_expander_binder__ident__to__ident(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_expander_get__opt__type___main___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_0 = l_lean_parser_term_hole_has__view;
x_1 = lean::cnstr_get(x_0, 1);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::box(0);
x_5 = lean::mk_string("_");
x_6 = l_string_trim(x_5);
lean::dec(x_5);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_4);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
x_10 = lean::apply_1(x_1, x_9);
return x_10;
}
}
obj* l_lean_expander_get__opt__type___main(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_lean_expander_get__opt__type___main___closed__1;
return x_1;
}
else
{
obj* x_2; obj* x_3; 
x_2 = lean::cnstr_get(x_0, 0);
x_3 = lean::cnstr_get(x_2, 1);
lean::inc(x_3);
return x_3;
}
}
}
obj* l_lean_expander_get__opt__type___main___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_expander_get__opt__type___main(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_expander_get__opt__type(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_expander_get__opt__type___main(x_0);
return x_1;
}
}
obj* l_lean_expander_get__opt__type___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_expander_get__opt__type(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; 
lean::dec(x_1);
x_4 = lean::box(0);
return x_4;
}
else
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; uint8 x_12; obj* x_14; obj* x_15; obj* x_16; 
x_5 = lean::cnstr_get(x_2, 0);
x_7 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 x_9 = x_2;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::dec(x_2);
 x_9 = lean::box(0);
}
x_10 = l_lean_expander_binder__ident__to__ident___main(x_5);
lean::dec(x_5);
x_12 = 0;
lean::inc(x_1);
x_14 = l_lean_expander_mk__simple__binder(x_10, x_12, x_1);
x_15 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__1(x_0, x_1, x_7);
if (lean::is_scalar(x_9)) {
 x_16 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_16 = x_9;
}
lean::cnstr_set(x_16, 0, x_14);
lean::cnstr_set(x_16, 1, x_15);
return x_16;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__2(uint8 x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; 
lean::dec(x_3);
x_6 = lean::box(0);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_15; obj* x_16; obj* x_17; 
x_7 = lean::cnstr_get(x_4, 0);
x_9 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 x_11 = x_4;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_4);
 x_11 = lean::box(0);
}
x_12 = l_lean_expander_binder__ident__to__ident___main(x_7);
lean::dec(x_7);
lean::inc(x_3);
x_15 = l_lean_expander_mk__simple__binder(x_12, x_0, x_3);
x_16 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__2(x_0, x_1, x_2, x_3, x_9);
if (lean::is_scalar(x_11)) {
 x_17 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_17 = x_11;
}
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__3(uint8 x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10, obj* x_11, obj* x_12) {
_start:
{
if (lean::obj_tag(x_12) == 0)
{
obj* x_14; 
lean::dec(x_11);
x_14 = lean::box(0);
return x_14;
}
else
{
obj* x_15; obj* x_17; obj* x_19; obj* x_20; obj* x_23; obj* x_24; obj* x_25; 
x_15 = lean::cnstr_get(x_12, 0);
x_17 = lean::cnstr_get(x_12, 1);
if (lean::is_exclusive(x_12)) {
 x_19 = x_12;
} else {
 lean::inc(x_15);
 lean::inc(x_17);
 lean::dec(x_12);
 x_19 = lean::box(0);
}
x_20 = l_lean_expander_binder__ident__to__ident___main(x_15);
lean::dec(x_15);
lean::inc(x_11);
x_23 = l_lean_expander_mk__simple__binder(x_20, x_0, x_11);
x_24 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__3(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_17);
if (lean::is_scalar(x_19)) {
 x_25 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_25 = x_19;
}
lean::cnstr_set(x_25, 0, x_23);
lean::cnstr_set(x_25, 1, x_24);
return x_25;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__4(uint8 x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
if (lean::obj_tag(x_8) == 0)
{
obj* x_10; 
lean::dec(x_7);
x_10 = lean::box(0);
return x_10;
}
else
{
obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_19; obj* x_20; obj* x_21; 
x_11 = lean::cnstr_get(x_8, 0);
x_13 = lean::cnstr_get(x_8, 1);
if (lean::is_exclusive(x_8)) {
 x_15 = x_8;
} else {
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_8);
 x_15 = lean::box(0);
}
x_16 = l_lean_expander_binder__ident__to__ident___main(x_11);
lean::dec(x_11);
lean::inc(x_7);
x_19 = l_lean_expander_mk__simple__binder(x_16, x_0, x_7);
x_20 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__4(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_13);
if (lean::is_scalar(x_15)) {
 x_21 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_21 = x_15;
}
lean::cnstr_set(x_21, 0, x_19);
lean::cnstr_set(x_21, 1, x_20);
return x_21;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__5(uint8 x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; 
lean::dec(x_1);
x_4 = lean::box(0);
return x_4;
}
else
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_13; obj* x_14; obj* x_15; 
x_5 = lean::cnstr_get(x_2, 0);
x_7 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 x_9 = x_2;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::dec(x_2);
 x_9 = lean::box(0);
}
x_10 = l_lean_expander_binder__ident__to__ident___main(x_5);
lean::dec(x_5);
lean::inc(x_1);
x_13 = l_lean_expander_mk__simple__binder(x_10, x_0, x_1);
x_14 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__5(x_0, x_1, x_7);
if (lean::is_scalar(x_9)) {
 x_15 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_15 = x_9;
}
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
return x_15;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__6(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_5; 
lean::dec(x_2);
x_5 = lean::box(0);
return x_5;
}
else
{
obj* x_6; obj* x_8; obj* x_10; obj* x_11; uint8 x_13; obj* x_15; obj* x_16; obj* x_17; 
x_6 = lean::cnstr_get(x_3, 0);
x_8 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 x_10 = x_3;
} else {
 lean::inc(x_6);
 lean::inc(x_8);
 lean::dec(x_3);
 x_10 = lean::box(0);
}
x_11 = l_lean_expander_binder__ident__to__ident___main(x_6);
lean::dec(x_6);
x_13 = 0;
lean::inc(x_2);
x_15 = l_lean_expander_mk__simple__binder(x_11, x_13, x_2);
x_16 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__6(x_0, x_1, x_2, x_8);
if (lean::is_scalar(x_10)) {
 x_17 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_17 = x_10;
}
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__7(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10, obj* x_11) {
_start:
{
if (lean::obj_tag(x_11) == 0)
{
obj* x_13; 
lean::dec(x_10);
x_13 = lean::box(0);
return x_13;
}
else
{
obj* x_14; obj* x_16; obj* x_18; obj* x_19; uint8 x_21; obj* x_23; obj* x_24; obj* x_25; 
x_14 = lean::cnstr_get(x_11, 0);
x_16 = lean::cnstr_get(x_11, 1);
if (lean::is_exclusive(x_11)) {
 x_18 = x_11;
} else {
 lean::inc(x_14);
 lean::inc(x_16);
 lean::dec(x_11);
 x_18 = lean::box(0);
}
x_19 = l_lean_expander_binder__ident__to__ident___main(x_14);
lean::dec(x_14);
x_21 = 0;
lean::inc(x_10);
x_23 = l_lean_expander_mk__simple__binder(x_19, x_21, x_10);
x_24 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__7(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_16);
if (lean::is_scalar(x_18)) {
 x_25 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_25 = x_18;
}
lean::cnstr_set(x_25, 0, x_23);
lean::cnstr_set(x_25, 1, x_24);
return x_25;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__8(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
if (lean::obj_tag(x_7) == 0)
{
obj* x_9; 
lean::dec(x_6);
x_9 = lean::box(0);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; uint8 x_17; obj* x_19; obj* x_20; obj* x_21; 
x_10 = lean::cnstr_get(x_7, 0);
x_12 = lean::cnstr_get(x_7, 1);
if (lean::is_exclusive(x_7)) {
 x_14 = x_7;
} else {
 lean::inc(x_10);
 lean::inc(x_12);
 lean::dec(x_7);
 x_14 = lean::box(0);
}
x_15 = l_lean_expander_binder__ident__to__ident___main(x_10);
lean::dec(x_10);
x_17 = 0;
lean::inc(x_6);
x_19 = l_lean_expander_mk__simple__binder(x_15, x_17, x_6);
x_20 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__8(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_12);
if (lean::is_scalar(x_14)) {
 x_21 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_21 = x_14;
}
lean::cnstr_set(x_21, 0, x_19);
lean::cnstr_set(x_21, 1, x_20);
return x_21;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__9(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; uint8 x_11; obj* x_13; obj* x_14; obj* x_15; 
x_4 = lean::cnstr_get(x_1, 0);
x_6 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 x_8 = x_1;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
x_9 = l_lean_expander_binder__ident__to__ident___main(x_4);
lean::dec(x_4);
x_11 = 0;
lean::inc(x_0);
x_13 = l_lean_expander_mk__simple__binder(x_9, x_11, x_0);
x_14 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__9(x_0, x_6);
if (lean::is_scalar(x_8)) {
 x_15 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_15 = x_8;
}
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
return x_15;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__10(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_5; 
lean::dec(x_2);
x_5 = lean::box(0);
return x_5;
}
else
{
obj* x_6; obj* x_8; obj* x_10; obj* x_11; uint8 x_13; obj* x_15; obj* x_16; obj* x_17; 
x_6 = lean::cnstr_get(x_3, 0);
x_8 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 x_10 = x_3;
} else {
 lean::inc(x_6);
 lean::inc(x_8);
 lean::dec(x_3);
 x_10 = lean::box(0);
}
x_11 = l_lean_expander_binder__ident__to__ident___main(x_6);
lean::dec(x_6);
x_13 = 1;
lean::inc(x_2);
x_15 = l_lean_expander_mk__simple__binder(x_11, x_13, x_2);
x_16 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__10(x_0, x_1, x_2, x_8);
if (lean::is_scalar(x_10)) {
 x_17 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_17 = x_10;
}
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__11(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10, obj* x_11) {
_start:
{
if (lean::obj_tag(x_11) == 0)
{
obj* x_13; 
lean::dec(x_10);
x_13 = lean::box(0);
return x_13;
}
else
{
obj* x_14; obj* x_16; obj* x_18; obj* x_19; uint8 x_21; obj* x_23; obj* x_24; obj* x_25; 
x_14 = lean::cnstr_get(x_11, 0);
x_16 = lean::cnstr_get(x_11, 1);
if (lean::is_exclusive(x_11)) {
 x_18 = x_11;
} else {
 lean::inc(x_14);
 lean::inc(x_16);
 lean::dec(x_11);
 x_18 = lean::box(0);
}
x_19 = l_lean_expander_binder__ident__to__ident___main(x_14);
lean::dec(x_14);
x_21 = 1;
lean::inc(x_10);
x_23 = l_lean_expander_mk__simple__binder(x_19, x_21, x_10);
x_24 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__11(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_16);
if (lean::is_scalar(x_18)) {
 x_25 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_25 = x_18;
}
lean::cnstr_set(x_25, 0, x_23);
lean::cnstr_set(x_25, 1, x_24);
return x_25;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__12(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
if (lean::obj_tag(x_7) == 0)
{
obj* x_9; 
lean::dec(x_6);
x_9 = lean::box(0);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; uint8 x_17; obj* x_19; obj* x_20; obj* x_21; 
x_10 = lean::cnstr_get(x_7, 0);
x_12 = lean::cnstr_get(x_7, 1);
if (lean::is_exclusive(x_7)) {
 x_14 = x_7;
} else {
 lean::inc(x_10);
 lean::inc(x_12);
 lean::dec(x_7);
 x_14 = lean::box(0);
}
x_15 = l_lean_expander_binder__ident__to__ident___main(x_10);
lean::dec(x_10);
x_17 = 1;
lean::inc(x_6);
x_19 = l_lean_expander_mk__simple__binder(x_15, x_17, x_6);
x_20 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__12(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_12);
if (lean::is_scalar(x_14)) {
 x_21 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_21 = x_14;
}
lean::cnstr_set(x_21, 0, x_19);
lean::cnstr_set(x_21, 1, x_20);
return x_21;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__13(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; uint8 x_11; obj* x_13; obj* x_14; obj* x_15; 
x_4 = lean::cnstr_get(x_1, 0);
x_6 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 x_8 = x_1;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
x_9 = l_lean_expander_binder__ident__to__ident___main(x_4);
lean::dec(x_4);
x_11 = 1;
lean::inc(x_0);
x_13 = l_lean_expander_mk__simple__binder(x_9, x_11, x_0);
x_14 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__13(x_0, x_6);
if (lean::is_scalar(x_8)) {
 x_15 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_15 = x_8;
}
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
return x_15;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__14(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_5; 
lean::dec(x_2);
x_5 = lean::box(0);
return x_5;
}
else
{
obj* x_6; obj* x_8; obj* x_10; obj* x_11; uint8 x_13; obj* x_15; obj* x_16; obj* x_17; 
x_6 = lean::cnstr_get(x_3, 0);
x_8 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 x_10 = x_3;
} else {
 lean::inc(x_6);
 lean::inc(x_8);
 lean::dec(x_3);
 x_10 = lean::box(0);
}
x_11 = l_lean_expander_binder__ident__to__ident___main(x_6);
lean::dec(x_6);
x_13 = 2;
lean::inc(x_2);
x_15 = l_lean_expander_mk__simple__binder(x_11, x_13, x_2);
x_16 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__14(x_0, x_1, x_2, x_8);
if (lean::is_scalar(x_10)) {
 x_17 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_17 = x_10;
}
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__15(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10, obj* x_11) {
_start:
{
if (lean::obj_tag(x_11) == 0)
{
obj* x_13; 
lean::dec(x_10);
x_13 = lean::box(0);
return x_13;
}
else
{
obj* x_14; obj* x_16; obj* x_18; obj* x_19; uint8 x_21; obj* x_23; obj* x_24; obj* x_25; 
x_14 = lean::cnstr_get(x_11, 0);
x_16 = lean::cnstr_get(x_11, 1);
if (lean::is_exclusive(x_11)) {
 x_18 = x_11;
} else {
 lean::inc(x_14);
 lean::inc(x_16);
 lean::dec(x_11);
 x_18 = lean::box(0);
}
x_19 = l_lean_expander_binder__ident__to__ident___main(x_14);
lean::dec(x_14);
x_21 = 2;
lean::inc(x_10);
x_23 = l_lean_expander_mk__simple__binder(x_19, x_21, x_10);
x_24 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__15(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_16);
if (lean::is_scalar(x_18)) {
 x_25 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_25 = x_18;
}
lean::cnstr_set(x_25, 0, x_23);
lean::cnstr_set(x_25, 1, x_24);
return x_25;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__16(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
if (lean::obj_tag(x_7) == 0)
{
obj* x_9; 
lean::dec(x_6);
x_9 = lean::box(0);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; uint8 x_17; obj* x_19; obj* x_20; obj* x_21; 
x_10 = lean::cnstr_get(x_7, 0);
x_12 = lean::cnstr_get(x_7, 1);
if (lean::is_exclusive(x_7)) {
 x_14 = x_7;
} else {
 lean::inc(x_10);
 lean::inc(x_12);
 lean::dec(x_7);
 x_14 = lean::box(0);
}
x_15 = l_lean_expander_binder__ident__to__ident___main(x_10);
lean::dec(x_10);
x_17 = 2;
lean::inc(x_6);
x_19 = l_lean_expander_mk__simple__binder(x_15, x_17, x_6);
x_20 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__16(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_12);
if (lean::is_scalar(x_14)) {
 x_21 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_21 = x_14;
}
lean::cnstr_set(x_21, 0, x_19);
lean::cnstr_set(x_21, 1, x_20);
return x_21;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__17(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; uint8 x_11; obj* x_13; obj* x_14; obj* x_15; 
x_4 = lean::cnstr_get(x_1, 0);
x_6 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 x_8 = x_1;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
x_9 = l_lean_expander_binder__ident__to__ident___main(x_4);
lean::dec(x_4);
x_11 = 2;
lean::inc(x_0);
x_13 = l_lean_expander_mk__simple__binder(x_9, x_11, x_0);
x_14 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__17(x_0, x_6);
if (lean::is_scalar(x_8)) {
 x_15 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_15 = x_8;
}
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
return x_15;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__18(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
if (lean::obj_tag(x_9) == 0)
{
obj* x_11; 
lean::dec(x_8);
x_11 = lean::box(0);
return x_11;
}
else
{
obj* x_12; obj* x_14; obj* x_16; obj* x_17; uint8 x_19; obj* x_21; obj* x_22; obj* x_23; 
x_12 = lean::cnstr_get(x_9, 0);
x_14 = lean::cnstr_get(x_9, 1);
if (lean::is_exclusive(x_9)) {
 x_16 = x_9;
} else {
 lean::inc(x_12);
 lean::inc(x_14);
 lean::dec(x_9);
 x_16 = lean::box(0);
}
x_17 = l_lean_expander_binder__ident__to__ident___main(x_12);
lean::dec(x_12);
x_19 = 3;
lean::inc(x_8);
x_21 = l_lean_expander_mk__simple__binder(x_17, x_19, x_8);
x_22 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__18(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean::is_scalar(x_16)) {
 x_23 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_23 = x_16;
}
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_22);
return x_23;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__19(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
if (lean::obj_tag(x_9) == 0)
{
obj* x_11; 
lean::dec(x_8);
x_11 = lean::box(0);
return x_11;
}
else
{
obj* x_12; obj* x_14; obj* x_16; obj* x_17; uint8 x_19; obj* x_21; obj* x_22; obj* x_23; 
x_12 = lean::cnstr_get(x_9, 0);
x_14 = lean::cnstr_get(x_9, 1);
if (lean::is_exclusive(x_9)) {
 x_16 = x_9;
} else {
 lean::inc(x_12);
 lean::inc(x_14);
 lean::dec(x_9);
 x_16 = lean::box(0);
}
x_17 = l_lean_expander_binder__ident__to__ident___main(x_12);
lean::dec(x_12);
x_19 = 3;
lean::inc(x_8);
x_21 = l_lean_expander_mk__simple__binder(x_17, x_19, x_8);
x_22 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__19(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean::is_scalar(x_16)) {
 x_23 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_23 = x_16;
}
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_22);
return x_23;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__20(uint8 x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; 
lean::dec(x_3);
x_6 = lean::box(0);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_15; obj* x_16; obj* x_17; 
x_7 = lean::cnstr_get(x_4, 0);
x_9 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 x_11 = x_4;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_4);
 x_11 = lean::box(0);
}
x_12 = l_lean_expander_binder__ident__to__ident___main(x_7);
lean::dec(x_7);
lean::inc(x_3);
x_15 = l_lean_expander_mk__simple__binder(x_12, x_0, x_3);
x_16 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__20(x_0, x_1, x_2, x_3, x_9);
if (lean::is_scalar(x_11)) {
 x_17 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_17 = x_11;
}
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__21(uint8 x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10, obj* x_11, obj* x_12) {
_start:
{
if (lean::obj_tag(x_12) == 0)
{
obj* x_14; 
lean::dec(x_11);
x_14 = lean::box(0);
return x_14;
}
else
{
obj* x_15; obj* x_17; obj* x_19; obj* x_20; obj* x_23; obj* x_24; obj* x_25; 
x_15 = lean::cnstr_get(x_12, 0);
x_17 = lean::cnstr_get(x_12, 1);
if (lean::is_exclusive(x_12)) {
 x_19 = x_12;
} else {
 lean::inc(x_15);
 lean::inc(x_17);
 lean::dec(x_12);
 x_19 = lean::box(0);
}
x_20 = l_lean_expander_binder__ident__to__ident___main(x_15);
lean::dec(x_15);
lean::inc(x_11);
x_23 = l_lean_expander_mk__simple__binder(x_20, x_0, x_11);
x_24 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__21(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_17);
if (lean::is_scalar(x_19)) {
 x_25 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_25 = x_19;
}
lean::cnstr_set(x_25, 0, x_23);
lean::cnstr_set(x_25, 1, x_24);
return x_25;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__22(uint8 x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
if (lean::obj_tag(x_8) == 0)
{
obj* x_10; 
lean::dec(x_7);
x_10 = lean::box(0);
return x_10;
}
else
{
obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_19; obj* x_20; obj* x_21; 
x_11 = lean::cnstr_get(x_8, 0);
x_13 = lean::cnstr_get(x_8, 1);
if (lean::is_exclusive(x_8)) {
 x_15 = x_8;
} else {
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_8);
 x_15 = lean::box(0);
}
x_16 = l_lean_expander_binder__ident__to__ident___main(x_11);
lean::dec(x_11);
lean::inc(x_7);
x_19 = l_lean_expander_mk__simple__binder(x_16, x_0, x_7);
x_20 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__22(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_13);
if (lean::is_scalar(x_15)) {
 x_21 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_21 = x_15;
}
lean::cnstr_set(x_21, 0, x_19);
lean::cnstr_set(x_21, 1, x_20);
return x_21;
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__23(uint8 x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; 
lean::dec(x_1);
x_4 = lean::box(0);
return x_4;
}
else
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_13; obj* x_14; obj* x_15; 
x_5 = lean::cnstr_get(x_2, 0);
x_7 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 x_9 = x_2;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::dec(x_2);
 x_9 = lean::box(0);
}
x_10 = l_lean_expander_binder__ident__to__ident___main(x_5);
lean::dec(x_5);
lean::inc(x_1);
x_13 = l_lean_expander_mk__simple__binder(x_10, x_0, x_1);
x_14 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__23(x_0, x_1, x_7);
if (lean::is_scalar(x_9)) {
 x_15 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_15 = x_9;
}
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
return x_15;
}
}
}
obj* _init_l_lean_expander_expand__bracketed__binder___main___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = l_lean_expander_get__opt__type___main(x_1);
x_3 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__1(x_1, x_2, x_0);
x_4 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_4, 0, x_3);
return x_4;
}
}
obj* _init_l_lean_expander_expand__bracketed__binder___main___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_string("opt_param");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = l_lean_expander_glob__id(x_2);
return x_3;
}
}
obj* _init_l_lean_expander_expand__bracketed__binder___main___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("opt_param");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_expander_expand__bracketed__binder___main___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_string("auto_param");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = l_lean_expander_glob__id(x_2);
return x_3;
}
}
obj* _init_l_lean_expander_expand__bracketed__binder___main___closed__5() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("auto_param");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_expander_expand__bracketed__binder___main___closed__6() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unexpected auto param after type annotation");
return x_0;
}
}
obj* _init_l_lean_expander_expand__bracketed__binder___main___closed__7() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; uint8 x_3; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
lean::cnstr_set(x_2, 2, x_1);
x_3 = 0;
x_4 = lean::box(x_3);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
return x_5;
}
}
obj* _init_l_lean_expander_expand__bracketed__binder___main___closed__8() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_expander_expand__bracketed__binder___main___closed__9() {
_start:
{
obj* x_0; 
x_0 = l_lean_expander_expand__bracketed__binder___main___closed__1;
return x_0;
}
}
obj* _init_l_lean_expander_expand__bracketed__binder___main___closed__10() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string(" : ");
x_1 = l_string_trim(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_expander_expand__bracketed__binder___main___closed__11() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; 
x_0 = lean::box(0);
x_1 = lean::mk_string(" : ");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
return x_4;
}
}
obj* _init_l_lean_expander_expand__bracketed__binder___main___closed__12() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_inst_");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::box(0);
x_4 = lean::mk_string(".");
lean::inc(x_2);
x_6 = l_lean_name_to__string__with__sep___main(x_4, x_2);
lean::dec(x_4);
x_8 = l_lean_parser_substring_of__string(x_6);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_10, 0, x_3);
lean::cnstr_set(x_10, 1, x_8);
lean::cnstr_set(x_10, 2, x_2);
lean::cnstr_set(x_10, 3, x_9);
lean::cnstr_set(x_10, 4, x_9);
x_11 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_9);
return x_12;
}
}
obj* _init_l_lean_expander_expand__bracketed__binder___main___closed__13() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unexpected anonymous constructor");
return x_0;
}
}
obj* l_lean_expander_expand__bracketed__binder___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_4; obj* x_6; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_4, 1);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_12; 
lean::dec(x_6);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_0);
x_12 = l_lean_expander_expand__bracketed__binder___main___closed__8;
return x_12;
}
else
{
switch (lean::obj_tag(x_0)) {
case 0:
{
lean::dec(x_4);
lean::dec(x_0);
if (lean::obj_tag(x_6) == 0)
{
obj* x_17; 
lean::dec(x_6);
lean::dec(x_1);
x_17 = l_lean_expander_expand__bracketed__binder___main___closed__9;
return x_17;
}
else
{
obj* x_18; obj* x_21; obj* x_23; obj* x_24; 
x_18 = lean::cnstr_get(x_6, 0);
lean::inc(x_18);
lean::dec(x_6);
x_21 = lean::cnstr_get(x_18, 1);
lean::inc(x_21);
x_23 = l_lean_expander_get__opt__type___main(x_21);
x_24 = lean::cnstr_get(x_18, 2);
lean::inc(x_24);
if (lean::obj_tag(x_24) == 0)
{
obj* x_27; obj* x_29; obj* x_32; 
lean::dec(x_1);
x_27 = lean::cnstr_get(x_18, 0);
lean::inc(x_27);
x_29 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__6(x_18, x_21, x_23, x_27);
lean::dec(x_21);
lean::dec(x_18);
x_32 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_32, 0, x_29);
return x_32;
}
else
{
obj* x_33; 
x_33 = lean::cnstr_get(x_24, 0);
lean::inc(x_33);
lean::dec(x_24);
if (lean::obj_tag(x_33) == 0)
{
obj* x_37; obj* x_40; obj* x_42; obj* x_44; obj* x_47; obj* x_48; obj* x_50; obj* x_51; obj* x_53; obj* x_54; obj* x_62; 
lean::dec(x_1);
x_37 = lean::cnstr_get(x_33, 0);
lean::inc(x_37);
lean::dec(x_33);
x_40 = lean::cnstr_get(x_37, 1);
lean::inc(x_40);
x_42 = lean::box(0);
lean::inc(x_40);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_40);
lean::cnstr_set(x_44, 1, x_42);
lean::inc(x_44);
lean::inc(x_23);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_23);
lean::cnstr_set(x_47, 1, x_44);
x_48 = l_lean_expander_expand__bracketed__binder___main___closed__2;
lean::inc(x_47);
x_50 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_48, x_47);
x_51 = lean::cnstr_get(x_18, 0);
lean::inc(x_51);
x_53 = l_lean_expander_expand__bracketed__binder___main___closed__3;
x_54 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__7(x_18, x_21, x_23, x_37, x_53, x_48, x_40, x_42, x_44, x_47, x_50, x_51);
lean::dec(x_47);
lean::dec(x_44);
lean::dec(x_40);
lean::dec(x_37);
lean::dec(x_23);
lean::dec(x_21);
lean::dec(x_18);
x_62 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_62, 0, x_54);
return x_62;
}
else
{
lean::dec(x_23);
if (lean::obj_tag(x_21) == 0)
{
obj* x_65; obj* x_68; obj* x_70; obj* x_72; obj* x_73; obj* x_75; obj* x_76; obj* x_79; obj* x_80; obj* x_84; 
lean::dec(x_1);
x_65 = lean::cnstr_get(x_33, 0);
lean::inc(x_65);
lean::dec(x_33);
x_68 = lean::cnstr_get(x_65, 1);
lean::inc(x_68);
x_70 = lean::box(0);
lean::inc(x_68);
x_72 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_72, 0, x_68);
lean::cnstr_set(x_72, 1, x_70);
x_73 = l_lean_expander_expand__bracketed__binder___main___closed__4;
lean::inc(x_72);
x_75 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_73, x_72);
x_76 = lean::cnstr_get(x_18, 0);
lean::inc(x_76);
lean::dec(x_18);
x_79 = l_lean_expander_expand__bracketed__binder___main___closed__5;
x_80 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__8(x_65, x_79, x_73, x_68, x_70, x_72, x_75, x_76);
lean::dec(x_72);
lean::dec(x_68);
lean::dec(x_65);
x_84 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_84, 0, x_80);
return x_84;
}
else
{
obj* x_85; obj* x_86; obj* x_87; obj* x_90; obj* x_91; obj* x_92; obj* x_93; 
if (lean::is_exclusive(x_21)) {
 lean::cnstr_release(x_21, 0);
 x_85 = x_21;
} else {
 lean::dec(x_21);
 x_85 = lean::box(0);
}
x_86 = l_lean_parser_term_binder__default_has__view;
x_87 = lean::cnstr_get(x_86, 1);
lean::inc(x_87);
lean::dec(x_86);
x_90 = lean::apply_1(x_87, x_33);
if (lean::is_scalar(x_85)) {
 x_91 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_91 = x_85;
}
lean::cnstr_set(x_91, 0, x_90);
x_92 = l_lean_expander_expand__bracketed__binder___main___closed__6;
x_93 = l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1___rarg(x_91, x_92, x_1);
lean::dec(x_91);
if (lean::obj_tag(x_93) == 0)
{
obj* x_96; obj* x_98; obj* x_99; 
lean::dec(x_18);
x_96 = lean::cnstr_get(x_93, 0);
if (lean::is_exclusive(x_93)) {
 x_98 = x_93;
} else {
 lean::inc(x_96);
 lean::dec(x_93);
 x_98 = lean::box(0);
}
if (lean::is_scalar(x_98)) {
 x_99 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_99 = x_98;
}
lean::cnstr_set(x_99, 0, x_96);
return x_99;
}
else
{
obj* x_100; obj* x_102; obj* x_103; obj* x_106; obj* x_107; 
x_100 = lean::cnstr_get(x_93, 0);
if (lean::is_exclusive(x_93)) {
 x_102 = x_93;
} else {
 lean::inc(x_100);
 lean::dec(x_93);
 x_102 = lean::box(0);
}
x_103 = lean::cnstr_get(x_18, 0);
lean::inc(x_103);
lean::dec(x_18);
x_106 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__9(x_100, x_103);
if (lean::is_scalar(x_102)) {
 x_107 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_107 = x_102;
}
lean::cnstr_set(x_107, 0, x_106);
return x_107;
}
}
}
}
}
}
case 1:
{
obj* x_110; obj* x_112; obj* x_113; 
lean::dec(x_4);
lean::dec(x_0);
x_110 = lean::cnstr_get(x_6, 1);
lean::inc(x_110);
x_112 = l_lean_expander_get__opt__type___main(x_110);
x_113 = lean::cnstr_get(x_6, 2);
lean::inc(x_113);
if (lean::obj_tag(x_113) == 0)
{
obj* x_116; obj* x_118; obj* x_121; 
lean::dec(x_1);
x_116 = lean::cnstr_get(x_6, 0);
lean::inc(x_116);
x_118 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__10(x_6, x_110, x_112, x_116);
lean::dec(x_110);
lean::dec(x_6);
x_121 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_121, 0, x_118);
return x_121;
}
else
{
obj* x_122; 
x_122 = lean::cnstr_get(x_113, 0);
lean::inc(x_122);
lean::dec(x_113);
if (lean::obj_tag(x_122) == 0)
{
obj* x_126; obj* x_129; obj* x_131; obj* x_133; obj* x_136; obj* x_137; obj* x_139; obj* x_140; obj* x_142; obj* x_143; obj* x_151; 
lean::dec(x_1);
x_126 = lean::cnstr_get(x_122, 0);
lean::inc(x_126);
lean::dec(x_122);
x_129 = lean::cnstr_get(x_126, 1);
lean::inc(x_129);
x_131 = lean::box(0);
lean::inc(x_129);
x_133 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_133, 0, x_129);
lean::cnstr_set(x_133, 1, x_131);
lean::inc(x_133);
lean::inc(x_112);
x_136 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_136, 0, x_112);
lean::cnstr_set(x_136, 1, x_133);
x_137 = l_lean_expander_expand__bracketed__binder___main___closed__2;
lean::inc(x_136);
x_139 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_137, x_136);
x_140 = lean::cnstr_get(x_6, 0);
lean::inc(x_140);
x_142 = l_lean_expander_expand__bracketed__binder___main___closed__3;
x_143 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__11(x_6, x_110, x_112, x_126, x_142, x_137, x_129, x_131, x_133, x_136, x_139, x_140);
lean::dec(x_136);
lean::dec(x_133);
lean::dec(x_129);
lean::dec(x_126);
lean::dec(x_112);
lean::dec(x_110);
lean::dec(x_6);
x_151 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_151, 0, x_143);
return x_151;
}
else
{
lean::dec(x_112);
if (lean::obj_tag(x_110) == 0)
{
obj* x_154; obj* x_157; obj* x_159; obj* x_161; obj* x_162; obj* x_164; obj* x_165; obj* x_168; obj* x_169; obj* x_173; 
lean::dec(x_1);
x_154 = lean::cnstr_get(x_122, 0);
lean::inc(x_154);
lean::dec(x_122);
x_157 = lean::cnstr_get(x_154, 1);
lean::inc(x_157);
x_159 = lean::box(0);
lean::inc(x_157);
x_161 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_161, 0, x_157);
lean::cnstr_set(x_161, 1, x_159);
x_162 = l_lean_expander_expand__bracketed__binder___main___closed__4;
lean::inc(x_161);
x_164 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_162, x_161);
x_165 = lean::cnstr_get(x_6, 0);
lean::inc(x_165);
lean::dec(x_6);
x_168 = l_lean_expander_expand__bracketed__binder___main___closed__5;
x_169 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__12(x_154, x_168, x_162, x_157, x_159, x_161, x_164, x_165);
lean::dec(x_161);
lean::dec(x_157);
lean::dec(x_154);
x_173 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_173, 0, x_169);
return x_173;
}
else
{
obj* x_174; obj* x_175; obj* x_176; obj* x_179; obj* x_180; obj* x_181; obj* x_182; 
if (lean::is_exclusive(x_110)) {
 lean::cnstr_release(x_110, 0);
 x_174 = x_110;
} else {
 lean::dec(x_110);
 x_174 = lean::box(0);
}
x_175 = l_lean_parser_term_binder__default_has__view;
x_176 = lean::cnstr_get(x_175, 1);
lean::inc(x_176);
lean::dec(x_175);
x_179 = lean::apply_1(x_176, x_122);
if (lean::is_scalar(x_174)) {
 x_180 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_180 = x_174;
}
lean::cnstr_set(x_180, 0, x_179);
x_181 = l_lean_expander_expand__bracketed__binder___main___closed__6;
x_182 = l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1___rarg(x_180, x_181, x_1);
lean::dec(x_180);
if (lean::obj_tag(x_182) == 0)
{
obj* x_185; obj* x_187; obj* x_188; 
lean::dec(x_6);
x_185 = lean::cnstr_get(x_182, 0);
if (lean::is_exclusive(x_182)) {
 x_187 = x_182;
} else {
 lean::inc(x_185);
 lean::dec(x_182);
 x_187 = lean::box(0);
}
if (lean::is_scalar(x_187)) {
 x_188 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_188 = x_187;
}
lean::cnstr_set(x_188, 0, x_185);
return x_188;
}
else
{
obj* x_189; obj* x_191; obj* x_192; obj* x_195; obj* x_196; 
x_189 = lean::cnstr_get(x_182, 0);
if (lean::is_exclusive(x_182)) {
 x_191 = x_182;
} else {
 lean::inc(x_189);
 lean::dec(x_182);
 x_191 = lean::box(0);
}
x_192 = lean::cnstr_get(x_6, 0);
lean::inc(x_192);
lean::dec(x_6);
x_195 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__13(x_189, x_192);
if (lean::is_scalar(x_191)) {
 x_196 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_196 = x_191;
}
lean::cnstr_set(x_196, 0, x_195);
return x_196;
}
}
}
}
}
case 2:
{
obj* x_199; obj* x_201; obj* x_202; 
lean::dec(x_4);
lean::dec(x_0);
x_199 = lean::cnstr_get(x_6, 1);
lean::inc(x_199);
x_201 = l_lean_expander_get__opt__type___main(x_199);
x_202 = lean::cnstr_get(x_6, 2);
lean::inc(x_202);
if (lean::obj_tag(x_202) == 0)
{
obj* x_205; obj* x_207; obj* x_210; 
lean::dec(x_1);
x_205 = lean::cnstr_get(x_6, 0);
lean::inc(x_205);
x_207 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__14(x_6, x_199, x_201, x_205);
lean::dec(x_199);
lean::dec(x_6);
x_210 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_210, 0, x_207);
return x_210;
}
else
{
obj* x_211; 
x_211 = lean::cnstr_get(x_202, 0);
lean::inc(x_211);
lean::dec(x_202);
if (lean::obj_tag(x_211) == 0)
{
obj* x_215; obj* x_218; obj* x_220; obj* x_222; obj* x_225; obj* x_226; obj* x_228; obj* x_229; obj* x_231; obj* x_232; obj* x_240; 
lean::dec(x_1);
x_215 = lean::cnstr_get(x_211, 0);
lean::inc(x_215);
lean::dec(x_211);
x_218 = lean::cnstr_get(x_215, 1);
lean::inc(x_218);
x_220 = lean::box(0);
lean::inc(x_218);
x_222 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_222, 0, x_218);
lean::cnstr_set(x_222, 1, x_220);
lean::inc(x_222);
lean::inc(x_201);
x_225 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_225, 0, x_201);
lean::cnstr_set(x_225, 1, x_222);
x_226 = l_lean_expander_expand__bracketed__binder___main___closed__2;
lean::inc(x_225);
x_228 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_226, x_225);
x_229 = lean::cnstr_get(x_6, 0);
lean::inc(x_229);
x_231 = l_lean_expander_expand__bracketed__binder___main___closed__3;
x_232 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__15(x_6, x_199, x_201, x_215, x_231, x_226, x_218, x_220, x_222, x_225, x_228, x_229);
lean::dec(x_225);
lean::dec(x_222);
lean::dec(x_218);
lean::dec(x_215);
lean::dec(x_201);
lean::dec(x_199);
lean::dec(x_6);
x_240 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_240, 0, x_232);
return x_240;
}
else
{
lean::dec(x_201);
if (lean::obj_tag(x_199) == 0)
{
obj* x_243; obj* x_246; obj* x_248; obj* x_250; obj* x_251; obj* x_253; obj* x_254; obj* x_257; obj* x_258; obj* x_262; 
lean::dec(x_1);
x_243 = lean::cnstr_get(x_211, 0);
lean::inc(x_243);
lean::dec(x_211);
x_246 = lean::cnstr_get(x_243, 1);
lean::inc(x_246);
x_248 = lean::box(0);
lean::inc(x_246);
x_250 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_250, 0, x_246);
lean::cnstr_set(x_250, 1, x_248);
x_251 = l_lean_expander_expand__bracketed__binder___main___closed__4;
lean::inc(x_250);
x_253 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_251, x_250);
x_254 = lean::cnstr_get(x_6, 0);
lean::inc(x_254);
lean::dec(x_6);
x_257 = l_lean_expander_expand__bracketed__binder___main___closed__5;
x_258 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__16(x_243, x_257, x_251, x_246, x_248, x_250, x_253, x_254);
lean::dec(x_250);
lean::dec(x_246);
lean::dec(x_243);
x_262 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_262, 0, x_258);
return x_262;
}
else
{
obj* x_263; obj* x_264; obj* x_265; obj* x_268; obj* x_269; obj* x_270; obj* x_271; 
if (lean::is_exclusive(x_199)) {
 lean::cnstr_release(x_199, 0);
 x_263 = x_199;
} else {
 lean::dec(x_199);
 x_263 = lean::box(0);
}
x_264 = l_lean_parser_term_binder__default_has__view;
x_265 = lean::cnstr_get(x_264, 1);
lean::inc(x_265);
lean::dec(x_264);
x_268 = lean::apply_1(x_265, x_211);
if (lean::is_scalar(x_263)) {
 x_269 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_269 = x_263;
}
lean::cnstr_set(x_269, 0, x_268);
x_270 = l_lean_expander_expand__bracketed__binder___main___closed__6;
x_271 = l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1___rarg(x_269, x_270, x_1);
lean::dec(x_269);
if (lean::obj_tag(x_271) == 0)
{
obj* x_274; obj* x_276; obj* x_277; 
lean::dec(x_6);
x_274 = lean::cnstr_get(x_271, 0);
if (lean::is_exclusive(x_271)) {
 x_276 = x_271;
} else {
 lean::inc(x_274);
 lean::dec(x_271);
 x_276 = lean::box(0);
}
if (lean::is_scalar(x_276)) {
 x_277 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_277 = x_276;
}
lean::cnstr_set(x_277, 0, x_274);
return x_277;
}
else
{
obj* x_278; obj* x_280; obj* x_281; obj* x_284; obj* x_285; 
x_278 = lean::cnstr_get(x_271, 0);
if (lean::is_exclusive(x_271)) {
 x_280 = x_271;
} else {
 lean::inc(x_278);
 lean::dec(x_271);
 x_280 = lean::box(0);
}
x_281 = lean::cnstr_get(x_6, 0);
lean::inc(x_281);
lean::dec(x_6);
x_284 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__17(x_278, x_281);
if (lean::is_scalar(x_280)) {
 x_285 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_285 = x_280;
}
lean::cnstr_set(x_285, 0, x_284);
return x_285;
}
}
}
}
}
case 3:
{
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_0);
if (lean::obj_tag(x_6) == 0)
{
obj* x_289; obj* x_292; obj* x_294; obj* x_295; obj* x_296; obj* x_297; obj* x_298; obj* x_300; obj* x_302; obj* x_304; obj* x_305; obj* x_306; obj* x_307; obj* x_308; obj* x_313; 
x_289 = lean::cnstr_get(x_6, 0);
lean::inc(x_289);
lean::dec(x_6);
x_292 = lean::cnstr_get(x_289, 0);
lean::inc(x_292);
x_294 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_294, 0, x_292);
x_295 = lean::box(0);
x_296 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_296, 0, x_294);
lean::cnstr_set(x_296, 1, x_295);
x_297 = lean::box(0);
x_298 = lean::cnstr_get(x_289, 2);
lean::inc(x_298);
x_300 = l_lean_expander_mk__simple__binder___closed__1;
lean::inc(x_298);
x_302 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_302, 0, x_300);
lean::cnstr_set(x_302, 1, x_298);
lean::inc(x_302);
x_304 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_304, 0, x_302);
x_305 = l_lean_expander_get__opt__type___main(x_304);
x_306 = l_lean_expander_expand__bracketed__binder___main___closed__10;
x_307 = l_lean_expander_expand__bracketed__binder___main___closed__11;
x_308 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__18(x_289, x_297, x_306, x_307, x_300, x_298, x_302, x_304, x_305, x_296);
lean::dec(x_304);
lean::dec(x_302);
lean::dec(x_298);
lean::dec(x_289);
x_313 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_313, 0, x_308);
return x_313;
}
else
{
obj* x_314; obj* x_317; obj* x_318; obj* x_320; obj* x_322; obj* x_323; obj* x_324; obj* x_325; obj* x_326; obj* x_327; obj* x_331; 
x_314 = lean::cnstr_get(x_6, 0);
lean::inc(x_314);
lean::dec(x_6);
x_317 = lean::box(0);
x_318 = l_lean_expander_mk__simple__binder___closed__1;
lean::inc(x_314);
x_320 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_320, 0, x_318);
lean::cnstr_set(x_320, 1, x_314);
lean::inc(x_320);
x_322 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_322, 0, x_320);
x_323 = l_lean_expander_get__opt__type___main(x_322);
x_324 = l_lean_expander_expand__bracketed__binder___main___closed__10;
x_325 = l_lean_expander_expand__bracketed__binder___main___closed__11;
x_326 = l_lean_expander_expand__bracketed__binder___main___closed__12;
x_327 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__19(x_314, x_317, x_324, x_325, x_318, x_314, x_320, x_322, x_323, x_326);
lean::dec(x_322);
lean::dec(x_320);
lean::dec(x_314);
x_331 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_331, 0, x_327);
return x_331;
}
}
default:
{
obj* x_334; obj* x_335; obj* x_338; obj* x_339; obj* x_340; obj* x_342; 
lean::dec(x_6);
lean::dec(x_0);
x_334 = l_lean_parser_term_anonymous__constructor_has__view;
x_335 = lean::cnstr_get(x_334, 1);
lean::inc(x_335);
lean::dec(x_334);
x_338 = lean::apply_1(x_335, x_4);
x_339 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_339, 0, x_338);
x_340 = l_lean_expander_expand__bracketed__binder___main___closed__13;
lean::inc(x_1);
x_342 = l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1___rarg(x_339, x_340, x_1);
lean::dec(x_339);
if (lean::obj_tag(x_342) == 0)
{
obj* x_345; obj* x_347; obj* x_348; 
lean::dec(x_1);
x_345 = lean::cnstr_get(x_342, 0);
if (lean::is_exclusive(x_342)) {
 x_347 = x_342;
} else {
 lean::inc(x_345);
 lean::dec(x_342);
 x_347 = lean::box(0);
}
if (lean::is_scalar(x_347)) {
 x_348 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_348 = x_347;
}
lean::cnstr_set(x_348, 0, x_345);
return x_348;
}
else
{
obj* x_349; obj* x_351; obj* x_352; obj* x_354; obj* x_357; obj* x_359; obj* x_360; 
x_349 = lean::cnstr_get(x_342, 0);
if (lean::is_exclusive(x_342)) {
 lean::cnstr_set(x_342, 0, lean::box(0));
 x_351 = x_342;
} else {
 lean::inc(x_349);
 lean::dec(x_342);
 x_351 = lean::box(0);
}
x_352 = lean::cnstr_get(x_349, 0);
lean::inc(x_352);
x_354 = lean::cnstr_get(x_349, 1);
lean::inc(x_354);
lean::dec(x_349);
x_357 = lean::cnstr_get(x_354, 1);
lean::inc(x_357);
x_359 = l_lean_expander_get__opt__type___main(x_357);
x_360 = lean::cnstr_get(x_354, 2);
lean::inc(x_360);
if (lean::obj_tag(x_360) == 0)
{
obj* x_363; uint8 x_365; obj* x_366; obj* x_369; 
lean::dec(x_1);
x_363 = lean::cnstr_get(x_354, 0);
lean::inc(x_363);
x_365 = lean::unbox(x_352);
x_366 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__20(x_365, x_354, x_357, x_359, x_363);
lean::dec(x_357);
lean::dec(x_354);
if (lean::is_scalar(x_351)) {
 x_369 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_369 = x_351;
}
lean::cnstr_set(x_369, 0, x_366);
return x_369;
}
else
{
obj* x_370; 
x_370 = lean::cnstr_get(x_360, 0);
lean::inc(x_370);
lean::dec(x_360);
if (lean::obj_tag(x_370) == 0)
{
obj* x_374; obj* x_377; obj* x_379; obj* x_381; obj* x_384; obj* x_385; obj* x_387; obj* x_388; obj* x_390; uint8 x_391; obj* x_392; obj* x_400; 
lean::dec(x_1);
x_374 = lean::cnstr_get(x_370, 0);
lean::inc(x_374);
lean::dec(x_370);
x_377 = lean::cnstr_get(x_374, 1);
lean::inc(x_377);
x_379 = lean::box(0);
lean::inc(x_377);
x_381 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_381, 0, x_377);
lean::cnstr_set(x_381, 1, x_379);
lean::inc(x_381);
lean::inc(x_359);
x_384 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_384, 0, x_359);
lean::cnstr_set(x_384, 1, x_381);
x_385 = l_lean_expander_expand__bracketed__binder___main___closed__2;
lean::inc(x_384);
x_387 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_385, x_384);
x_388 = lean::cnstr_get(x_354, 0);
lean::inc(x_388);
x_390 = l_lean_expander_expand__bracketed__binder___main___closed__3;
x_391 = lean::unbox(x_352);
x_392 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__21(x_391, x_354, x_357, x_359, x_374, x_390, x_385, x_377, x_379, x_381, x_384, x_387, x_388);
lean::dec(x_384);
lean::dec(x_381);
lean::dec(x_377);
lean::dec(x_374);
lean::dec(x_359);
lean::dec(x_357);
lean::dec(x_354);
if (lean::is_scalar(x_351)) {
 x_400 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_400 = x_351;
}
lean::cnstr_set(x_400, 0, x_392);
return x_400;
}
else
{
lean::dec(x_359);
if (lean::obj_tag(x_357) == 0)
{
obj* x_403; obj* x_406; obj* x_408; obj* x_410; obj* x_411; obj* x_413; obj* x_414; obj* x_417; uint8 x_418; obj* x_419; obj* x_423; 
lean::dec(x_1);
x_403 = lean::cnstr_get(x_370, 0);
lean::inc(x_403);
lean::dec(x_370);
x_406 = lean::cnstr_get(x_403, 1);
lean::inc(x_406);
x_408 = lean::box(0);
lean::inc(x_406);
x_410 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_410, 0, x_406);
lean::cnstr_set(x_410, 1, x_408);
x_411 = l_lean_expander_expand__bracketed__binder___main___closed__4;
lean::inc(x_410);
x_413 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_411, x_410);
x_414 = lean::cnstr_get(x_354, 0);
lean::inc(x_414);
lean::dec(x_354);
x_417 = l_lean_expander_expand__bracketed__binder___main___closed__5;
x_418 = lean::unbox(x_352);
x_419 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__22(x_418, x_403, x_417, x_411, x_406, x_408, x_410, x_413, x_414);
lean::dec(x_410);
lean::dec(x_406);
lean::dec(x_403);
if (lean::is_scalar(x_351)) {
 x_423 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_423 = x_351;
}
lean::cnstr_set(x_423, 0, x_419);
return x_423;
}
else
{
obj* x_425; obj* x_426; obj* x_427; obj* x_430; obj* x_431; obj* x_432; obj* x_433; 
lean::dec(x_351);
if (lean::is_exclusive(x_357)) {
 lean::cnstr_release(x_357, 0);
 x_425 = x_357;
} else {
 lean::dec(x_357);
 x_425 = lean::box(0);
}
x_426 = l_lean_parser_term_binder__default_has__view;
x_427 = lean::cnstr_get(x_426, 1);
lean::inc(x_427);
lean::dec(x_426);
x_430 = lean::apply_1(x_427, x_370);
if (lean::is_scalar(x_425)) {
 x_431 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_431 = x_425;
}
lean::cnstr_set(x_431, 0, x_430);
x_432 = l_lean_expander_expand__bracketed__binder___main___closed__6;
x_433 = l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1___rarg(x_431, x_432, x_1);
lean::dec(x_431);
if (lean::obj_tag(x_433) == 0)
{
obj* x_437; obj* x_439; obj* x_440; 
lean::dec(x_352);
lean::dec(x_354);
x_437 = lean::cnstr_get(x_433, 0);
if (lean::is_exclusive(x_433)) {
 x_439 = x_433;
} else {
 lean::inc(x_437);
 lean::dec(x_433);
 x_439 = lean::box(0);
}
if (lean::is_scalar(x_439)) {
 x_440 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_440 = x_439;
}
lean::cnstr_set(x_440, 0, x_437);
return x_440;
}
else
{
obj* x_441; obj* x_443; obj* x_444; uint8 x_447; obj* x_448; obj* x_449; 
x_441 = lean::cnstr_get(x_433, 0);
if (lean::is_exclusive(x_433)) {
 x_443 = x_433;
} else {
 lean::inc(x_441);
 lean::dec(x_433);
 x_443 = lean::box(0);
}
x_444 = lean::cnstr_get(x_354, 0);
lean::inc(x_444);
lean::dec(x_354);
x_447 = lean::unbox(x_352);
x_448 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__23(x_447, x_441, x_444);
if (lean::is_scalar(x_443)) {
 x_449 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_449 = x_443;
}
lean::cnstr_set(x_449, 0, x_448);
return x_449;
}
}
}
}
}
}
}
}
}
default:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_450; obj* x_453; 
x_450 = lean::cnstr_get(x_0, 0);
lean::inc(x_450);
lean::dec(x_0);
x_453 = lean::cnstr_get(x_450, 1);
lean::inc(x_453);
lean::dec(x_450);
if (lean::obj_tag(x_453) == 0)
{
obj* x_457; 
lean::dec(x_453);
x_457 = l_lean_expander_expand__bracketed__binder___main___closed__7;
x_2 = x_457;
goto lbl_3;
}
else
{
obj* x_458; uint8 x_461; obj* x_462; obj* x_463; 
x_458 = lean::cnstr_get(x_453, 0);
lean::inc(x_458);
lean::dec(x_453);
x_461 = 0;
x_462 = lean::box(x_461);
x_463 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_463, 0, x_462);
lean::cnstr_set(x_463, 1, x_458);
x_2 = x_463;
goto lbl_3;
}
}
case 1:
{
obj* x_464; obj* x_467; uint8 x_470; obj* x_471; obj* x_472; 
x_464 = lean::cnstr_get(x_0, 0);
lean::inc(x_464);
lean::dec(x_0);
x_467 = lean::cnstr_get(x_464, 1);
lean::inc(x_467);
lean::dec(x_464);
x_470 = 1;
x_471 = lean::box(x_470);
x_472 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_472, 0, x_471);
lean::cnstr_set(x_472, 1, x_467);
x_2 = x_472;
goto lbl_3;
}
case 2:
{
obj* x_473; obj* x_476; uint8 x_479; obj* x_480; obj* x_481; 
x_473 = lean::cnstr_get(x_0, 0);
lean::inc(x_473);
lean::dec(x_0);
x_476 = lean::cnstr_get(x_473, 1);
lean::inc(x_476);
lean::dec(x_473);
x_479 = 2;
x_480 = lean::box(x_479);
x_481 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_481, 0, x_480);
lean::cnstr_set(x_481, 1, x_476);
x_2 = x_481;
goto lbl_3;
}
case 3:
{
obj* x_482; obj* x_485; 
x_482 = lean::cnstr_get(x_0, 0);
lean::inc(x_482);
lean::dec(x_0);
x_485 = lean::cnstr_get(x_482, 1);
lean::inc(x_485);
lean::dec(x_482);
if (lean::obj_tag(x_485) == 0)
{
obj* x_488; obj* x_491; obj* x_493; obj* x_494; obj* x_495; obj* x_496; obj* x_497; obj* x_500; obj* x_501; obj* x_502; obj* x_503; uint8 x_504; obj* x_505; obj* x_506; 
x_488 = lean::cnstr_get(x_485, 0);
lean::inc(x_488);
lean::dec(x_485);
x_491 = lean::cnstr_get(x_488, 0);
lean::inc(x_491);
x_493 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_493, 0, x_491);
x_494 = lean::box(0);
x_495 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_495, 0, x_493);
lean::cnstr_set(x_495, 1, x_494);
x_496 = lean::box(0);
x_497 = lean::cnstr_get(x_488, 2);
lean::inc(x_497);
lean::dec(x_488);
x_500 = l_lean_expander_mk__simple__binder___closed__1;
x_501 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_501, 0, x_500);
lean::cnstr_set(x_501, 1, x_497);
x_502 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_502, 0, x_501);
x_503 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_503, 0, x_495);
lean::cnstr_set(x_503, 1, x_502);
lean::cnstr_set(x_503, 2, x_496);
x_504 = 3;
x_505 = lean::box(x_504);
x_506 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_506, 0, x_505);
lean::cnstr_set(x_506, 1, x_503);
x_2 = x_506;
goto lbl_3;
}
else
{
obj* x_507; obj* x_510; obj* x_511; obj* x_512; obj* x_513; obj* x_514; obj* x_515; uint8 x_516; obj* x_517; obj* x_518; 
x_507 = lean::cnstr_get(x_485, 0);
lean::inc(x_507);
lean::dec(x_485);
x_510 = lean::box(0);
x_511 = l_lean_expander_mk__simple__binder___closed__1;
x_512 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_512, 0, x_511);
lean::cnstr_set(x_512, 1, x_507);
x_513 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_513, 0, x_512);
x_514 = l_lean_expander_expand__bracketed__binder___main___closed__12;
x_515 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_515, 0, x_514);
lean::cnstr_set(x_515, 1, x_513);
lean::cnstr_set(x_515, 2, x_510);
x_516 = 3;
x_517 = lean::box(x_516);
x_518 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_518, 0, x_517);
lean::cnstr_set(x_518, 1, x_515);
x_2 = x_518;
goto lbl_3;
}
}
default:
{
obj* x_519; obj* x_522; obj* x_523; obj* x_526; obj* x_527; obj* x_528; obj* x_530; 
x_519 = lean::cnstr_get(x_0, 0);
lean::inc(x_519);
lean::dec(x_0);
x_522 = l_lean_parser_term_anonymous__constructor_has__view;
x_523 = lean::cnstr_get(x_522, 1);
lean::inc(x_523);
lean::dec(x_522);
x_526 = lean::apply_1(x_523, x_519);
x_527 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_527, 0, x_526);
x_528 = l_lean_expander_expand__bracketed__binder___main___closed__13;
lean::inc(x_1);
x_530 = l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1___rarg(x_527, x_528, x_1);
lean::dec(x_527);
if (lean::obj_tag(x_530) == 0)
{
obj* x_533; obj* x_535; obj* x_536; 
lean::dec(x_1);
x_533 = lean::cnstr_get(x_530, 0);
if (lean::is_exclusive(x_530)) {
 x_535 = x_530;
} else {
 lean::inc(x_533);
 lean::dec(x_530);
 x_535 = lean::box(0);
}
if (lean::is_scalar(x_535)) {
 x_536 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_536 = x_535;
}
lean::cnstr_set(x_536, 0, x_533);
return x_536;
}
else
{
obj* x_537; 
x_537 = lean::cnstr_get(x_530, 0);
lean::inc(x_537);
lean::dec(x_530);
x_2 = x_537;
goto lbl_3;
}
}
}
}
}
lbl_3:
{
obj* x_540; obj* x_542; obj* x_545; obj* x_547; obj* x_548; 
x_540 = lean::cnstr_get(x_2, 0);
lean::inc(x_540);
x_542 = lean::cnstr_get(x_2, 1);
lean::inc(x_542);
lean::dec(x_2);
x_545 = lean::cnstr_get(x_542, 1);
lean::inc(x_545);
x_547 = l_lean_expander_get__opt__type___main(x_545);
x_548 = lean::cnstr_get(x_542, 2);
lean::inc(x_548);
if (lean::obj_tag(x_548) == 0)
{
obj* x_551; uint8 x_553; obj* x_554; obj* x_557; 
lean::dec(x_1);
x_551 = lean::cnstr_get(x_542, 0);
lean::inc(x_551);
x_553 = lean::unbox(x_540);
x_554 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__2(x_553, x_542, x_545, x_547, x_551);
lean::dec(x_545);
lean::dec(x_542);
x_557 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_557, 0, x_554);
return x_557;
}
else
{
obj* x_558; 
x_558 = lean::cnstr_get(x_548, 0);
lean::inc(x_558);
lean::dec(x_548);
if (lean::obj_tag(x_558) == 0)
{
obj* x_562; obj* x_565; obj* x_567; obj* x_569; obj* x_572; obj* x_573; obj* x_575; obj* x_576; obj* x_578; uint8 x_579; obj* x_580; obj* x_588; 
lean::dec(x_1);
x_562 = lean::cnstr_get(x_558, 0);
lean::inc(x_562);
lean::dec(x_558);
x_565 = lean::cnstr_get(x_562, 1);
lean::inc(x_565);
x_567 = lean::box(0);
lean::inc(x_565);
x_569 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_569, 0, x_565);
lean::cnstr_set(x_569, 1, x_567);
lean::inc(x_569);
lean::inc(x_547);
x_572 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_572, 0, x_547);
lean::cnstr_set(x_572, 1, x_569);
x_573 = l_lean_expander_expand__bracketed__binder___main___closed__2;
lean::inc(x_572);
x_575 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_573, x_572);
x_576 = lean::cnstr_get(x_542, 0);
lean::inc(x_576);
x_578 = l_lean_expander_expand__bracketed__binder___main___closed__3;
x_579 = lean::unbox(x_540);
x_580 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__3(x_579, x_542, x_545, x_547, x_562, x_578, x_573, x_565, x_567, x_569, x_572, x_575, x_576);
lean::dec(x_572);
lean::dec(x_569);
lean::dec(x_565);
lean::dec(x_562);
lean::dec(x_547);
lean::dec(x_545);
lean::dec(x_542);
x_588 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_588, 0, x_580);
return x_588;
}
else
{
lean::dec(x_547);
if (lean::obj_tag(x_545) == 0)
{
obj* x_591; obj* x_594; obj* x_596; obj* x_598; obj* x_599; obj* x_601; obj* x_602; obj* x_605; uint8 x_606; obj* x_607; obj* x_611; 
lean::dec(x_1);
x_591 = lean::cnstr_get(x_558, 0);
lean::inc(x_591);
lean::dec(x_558);
x_594 = lean::cnstr_get(x_591, 1);
lean::inc(x_594);
x_596 = lean::box(0);
lean::inc(x_594);
x_598 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_598, 0, x_594);
lean::cnstr_set(x_598, 1, x_596);
x_599 = l_lean_expander_expand__bracketed__binder___main___closed__4;
lean::inc(x_598);
x_601 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_599, x_598);
x_602 = lean::cnstr_get(x_542, 0);
lean::inc(x_602);
lean::dec(x_542);
x_605 = l_lean_expander_expand__bracketed__binder___main___closed__5;
x_606 = lean::unbox(x_540);
x_607 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__4(x_606, x_591, x_605, x_599, x_594, x_596, x_598, x_601, x_602);
lean::dec(x_598);
lean::dec(x_594);
lean::dec(x_591);
x_611 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_611, 0, x_607);
return x_611;
}
else
{
obj* x_612; obj* x_613; obj* x_614; obj* x_617; obj* x_618; obj* x_619; obj* x_620; 
if (lean::is_exclusive(x_545)) {
 lean::cnstr_release(x_545, 0);
 x_612 = x_545;
} else {
 lean::dec(x_545);
 x_612 = lean::box(0);
}
x_613 = l_lean_parser_term_binder__default_has__view;
x_614 = lean::cnstr_get(x_613, 1);
lean::inc(x_614);
lean::dec(x_613);
x_617 = lean::apply_1(x_614, x_558);
if (lean::is_scalar(x_612)) {
 x_618 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_618 = x_612;
}
lean::cnstr_set(x_618, 0, x_617);
x_619 = l_lean_expander_expand__bracketed__binder___main___closed__6;
x_620 = l_lean_expander_error___at_lean_expander_mk__notation__transformer___spec__1___rarg(x_618, x_619, x_1);
lean::dec(x_618);
if (lean::obj_tag(x_620) == 0)
{
obj* x_624; obj* x_626; obj* x_627; 
lean::dec(x_540);
lean::dec(x_542);
x_624 = lean::cnstr_get(x_620, 0);
if (lean::is_exclusive(x_620)) {
 x_626 = x_620;
} else {
 lean::inc(x_624);
 lean::dec(x_620);
 x_626 = lean::box(0);
}
if (lean::is_scalar(x_626)) {
 x_627 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_627 = x_626;
}
lean::cnstr_set(x_627, 0, x_624);
return x_627;
}
else
{
obj* x_628; obj* x_630; obj* x_631; uint8 x_634; obj* x_635; obj* x_636; 
x_628 = lean::cnstr_get(x_620, 0);
if (lean::is_exclusive(x_620)) {
 x_630 = x_620;
} else {
 lean::inc(x_628);
 lean::dec(x_620);
 x_630 = lean::box(0);
}
x_631 = lean::cnstr_get(x_542, 0);
lean::inc(x_631);
lean::dec(x_542);
x_634 = lean::unbox(x_540);
x_635 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__5(x_634, x_628, x_631);
if (lean::is_scalar(x_630)) {
 x_636 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_636 = x_630;
}
lean::cnstr_set(x_636, 0, x_635);
return x_636;
}
}
}
}
}
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__1(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_0);
x_6 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__2(x_5, x_1, x_2, x_3, x_4);
lean::dec(x_1);
lean::dec(x_2);
return x_6;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__3___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10, obj* x_11, obj* x_12) {
_start:
{
uint8 x_13; obj* x_14; 
x_13 = lean::unbox(x_0);
x_14 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__3(x_13, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_7);
lean::dec(x_8);
lean::dec(x_9);
lean::dec(x_10);
return x_14;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__4___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
uint8 x_9; obj* x_10; 
x_9 = lean::unbox(x_0);
x_10 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__4(x_9, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
return x_10;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__5___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = lean::unbox(x_0);
x_4 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__5(x_3, x_1, x_2);
return x_4;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__6___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__6(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_1);
return x_4;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__7___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10, obj* x_11) {
_start:
{
obj* x_12; 
x_12 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__7(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_7);
lean::dec(x_8);
lean::dec(x_9);
return x_12;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__8___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; 
x_8 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__8(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_4);
lean::dec(x_5);
return x_8;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__10___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__10(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_1);
return x_4;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__11___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10, obj* x_11) {
_start:
{
obj* x_12; 
x_12 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__11(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_7);
lean::dec(x_8);
lean::dec(x_9);
return x_12;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__12___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; 
x_8 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__12(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_4);
lean::dec(x_5);
return x_8;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__14___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__14(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_1);
return x_4;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__15___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10, obj* x_11) {
_start:
{
obj* x_12; 
x_12 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__15(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_7);
lean::dec(x_8);
lean::dec(x_9);
return x_12;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__16___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; 
x_8 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__16(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_4);
lean::dec(x_5);
return x_8;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__18___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
obj* x_10; 
x_10 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__18(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_7);
return x_10;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__19___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
obj* x_10; 
x_10 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__19(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_7);
return x_10;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__20___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_0);
x_6 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__20(x_5, x_1, x_2, x_3, x_4);
lean::dec(x_1);
lean::dec(x_2);
return x_6;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__21___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10, obj* x_11, obj* x_12) {
_start:
{
uint8 x_13; obj* x_14; 
x_13 = lean::unbox(x_0);
x_14 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__21(x_13, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_7);
lean::dec(x_8);
lean::dec(x_9);
lean::dec(x_10);
return x_14;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__22___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
uint8 x_9; obj* x_10; 
x_9 = lean::unbox(x_0);
x_10 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__22(x_9, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
return x_10;
}
}
obj* l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__23___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = lean::unbox(x_0);
x_4 = l_list_map___main___at_lean_expander_expand__bracketed__binder___main___spec__23(x_3, x_1, x_2);
return x_4;
}
}
obj* l_lean_expander_expand__bracketed__binder(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expander_expand__bracketed__binder___main(x_0, x_1);
return x_2;
}
}
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
if (lean::obj_tag(x_9) == 0)
{
lean::dec(x_8);
lean::dec(x_0);
lean::inc(x_1);
return x_1;
}
else
{
obj* x_13; obj* x_14; obj* x_17; obj* x_18; uint8 x_19; obj* x_20; obj* x_21; obj* x_22; 
x_13 = lean::cnstr_get(x_9, 0);
x_14 = lean::cnstr_get(x_9, 1);
lean::inc(x_8);
lean::inc(x_0);
x_17 = l_list_foldr___main___at_lean_expander_expand__binders___spec__1(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
x_18 = l_lean_expander_binder__ident__to__ident___main(x_13);
x_19 = 0;
x_20 = l_lean_expander_mk__simple__binder(x_18, x_19, x_8);
x_21 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_21, 0, x_20);
x_22 = lean::apply_2(x_0, x_21, x_17);
return x_22;
}
}
}
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_4) == 0)
{
lean::dec(x_3);
lean::dec(x_0);
lean::inc(x_1);
return x_1;
}
else
{
obj* x_8; obj* x_9; obj* x_12; obj* x_13; uint8 x_14; obj* x_15; obj* x_16; obj* x_17; 
x_8 = lean::cnstr_get(x_4, 0);
x_9 = lean::cnstr_get(x_4, 1);
lean::inc(x_3);
lean::inc(x_0);
x_12 = l_list_foldr___main___at_lean_expander_expand__binders___spec__2(x_0, x_1, x_2, x_3, x_9);
x_13 = l_lean_expander_binder__ident__to__ident___main(x_8);
x_14 = 0;
x_15 = l_lean_expander_mk__simple__binder(x_13, x_14, x_3);
x_16 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_16, 0, x_15);
x_17 = lean::apply_2(x_0, x_16, x_12);
return x_17;
}
}
}
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
if (lean::obj_tag(x_9) == 0)
{
lean::dec(x_8);
lean::dec(x_0);
lean::inc(x_1);
return x_1;
}
else
{
obj* x_13; obj* x_14; obj* x_17; obj* x_18; uint8 x_19; obj* x_20; obj* x_21; obj* x_22; 
x_13 = lean::cnstr_get(x_9, 0);
x_14 = lean::cnstr_get(x_9, 1);
lean::inc(x_8);
lean::inc(x_0);
x_17 = l_list_foldr___main___at_lean_expander_expand__binders___spec__3(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
x_18 = l_lean_expander_binder__ident__to__ident___main(x_13);
x_19 = 0;
x_20 = l_lean_expander_mk__simple__binder(x_18, x_19, x_8);
x_21 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_21, 0, x_20);
x_22 = lean::apply_2(x_0, x_21, x_17);
return x_22;
}
}
}
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_4) == 0)
{
lean::dec(x_3);
lean::dec(x_0);
lean::inc(x_1);
return x_1;
}
else
{
obj* x_8; obj* x_9; obj* x_12; obj* x_13; uint8 x_14; obj* x_15; obj* x_16; obj* x_17; 
x_8 = lean::cnstr_get(x_4, 0);
x_9 = lean::cnstr_get(x_4, 1);
lean::inc(x_3);
lean::inc(x_0);
x_12 = l_list_foldr___main___at_lean_expander_expand__binders___spec__4(x_0, x_1, x_2, x_3, x_9);
x_13 = l_lean_expander_binder__ident__to__ident___main(x_8);
x_14 = 0;
x_15 = l_lean_expander_mk__simple__binder(x_13, x_14, x_3);
x_16 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_16, 0, x_15);
x_17 = lean::apply_2(x_0, x_16, x_12);
return x_17;
}
}
}
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
lean::inc(x_1);
return x_1;
}
else
{
obj* x_5; obj* x_7; obj* x_11; obj* x_12; obj* x_13; 
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
lean::dec(x_2);
lean::inc(x_0);
x_11 = l_list_foldr___main___at_lean_expander_expand__binders___spec__5(x_0, x_1, x_7);
x_12 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_12, 0, x_5);
x_13 = lean::apply_2(x_0, x_12, x_11);
return x_13;
}
}
}
obj* _init_l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("match ");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_0 = lean::box(0);
x_1 = lean::mk_string("x");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::box(0);
x_4 = lean::mk_string(".");
lean::inc(x_2);
x_6 = l_lean_name_to__string__with__sep___main(x_4, x_2);
lean::dec(x_4);
x_8 = l_lean_parser_substring_of__string(x_6);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_10, 0, x_3);
lean::cnstr_set(x_10, 1, x_8);
lean::cnstr_set(x_10, 2, x_2);
lean::cnstr_set(x_10, 3, x_9);
lean::cnstr_set(x_10, 4, x_9);
x_11 = l_lean_parser_ident__univs_has__view;
x_12 = lean::cnstr_get(x_11, 1);
lean::inc(x_12);
lean::dec(x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_10);
lean::cnstr_set(x_15, 1, x_3);
x_16 = lean::apply_1(x_12, x_15);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_3);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_9);
return x_18;
}
}
obj* _init_l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string(" with ");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_15; obj* x_16; obj* x_18; obj* x_19; obj* x_20; uint8 x_21; obj* x_22; obj* x_23; 
x_0 = lean::box(0);
x_1 = lean::mk_string("x");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::box(0);
x_4 = lean::mk_string(".");
lean::inc(x_2);
x_6 = l_lean_name_to__string__with__sep___main(x_4, x_2);
lean::dec(x_4);
x_8 = l_lean_parser_substring_of__string(x_6);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_10, 0, x_3);
lean::cnstr_set(x_10, 1, x_8);
lean::cnstr_set(x_10, 2, x_2);
lean::cnstr_set(x_10, 3, x_9);
lean::cnstr_set(x_10, 4, x_9);
x_11 = l_lean_parser_term_hole_has__view;
x_12 = lean::cnstr_get(x_11, 1);
lean::inc(x_12);
lean::dec(x_11);
x_15 = lean::mk_string("_");
x_16 = l_string_trim(x_15);
lean::dec(x_15);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_3);
lean::cnstr_set(x_18, 1, x_16);
x_19 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_19, 0, x_18);
x_20 = lean::apply_1(x_12, x_19);
x_21 = 0;
x_22 = l_lean_expander_mk__simple__binder(x_10, x_21, x_20);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_22);
return x_23;
}
}
obj* l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_6; 
lean::dec(x_3);
lean::dec(x_0);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_1);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_14; 
x_7 = lean::cnstr_get(x_2, 0);
x_9 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_set(x_2, 0, lean::box(0));
 lean::cnstr_set(x_2, 1, lean::box(0));
 x_11 = x_2;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_2);
 x_11 = lean::box(0);
}
lean::inc(x_3);
lean::inc(x_0);
x_14 = l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6(x_0, x_1, x_9, x_3);
if (lean::obj_tag(x_14) == 0)
{
obj* x_19; obj* x_21; obj* x_22; 
lean::dec(x_7);
lean::dec(x_11);
lean::dec(x_3);
lean::dec(x_0);
x_19 = lean::cnstr_get(x_14, 0);
if (lean::is_exclusive(x_14)) {
 x_21 = x_14;
} else {
 lean::inc(x_19);
 lean::dec(x_14);
 x_21 = lean::box(0);
}
if (lean::is_scalar(x_21)) {
 x_22 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_22 = x_21;
}
lean::cnstr_set(x_22, 0, x_19);
return x_22;
}
else
{
if (lean::obj_tag(x_7) == 0)
{
obj* x_23; obj* x_25; obj* x_26; obj* x_29; 
x_23 = lean::cnstr_get(x_14, 0);
if (lean::is_exclusive(x_14)) {
 lean::cnstr_set(x_14, 0, lean::box(0));
 x_25 = x_14;
} else {
 lean::inc(x_23);
 lean::dec(x_14);
 x_25 = lean::box(0);
}
x_26 = lean::cnstr_get(x_7, 0);
lean::inc(x_26);
lean::dec(x_7);
switch (lean::obj_tag(x_26)) {
case 4:
{
obj* x_32; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_41; obj* x_42; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
lean::dec(x_3);
x_32 = lean::cnstr_get(x_26, 0);
lean::inc(x_32);
lean::dec(x_26);
x_35 = lean::box(0);
x_36 = lean::box(0);
x_37 = l_lean_parser_term_match_has__view;
x_38 = lean::cnstr_get(x_37, 1);
lean::inc(x_38);
lean::dec(x_37);
x_41 = l_lean_parser_term_anonymous__constructor_has__view;
x_42 = lean::cnstr_get(x_41, 1);
lean::inc(x_42);
lean::dec(x_41);
x_45 = lean::apply_1(x_42, x_32);
x_46 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_35);
if (lean::is_scalar(x_11)) {
 x_47 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_47 = x_11;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_36);
x_48 = l_lean_expander_mixfix_transform___closed__4;
x_49 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_49, 0, x_47);
lean::cnstr_set(x_49, 1, x_48);
lean::cnstr_set(x_49, 2, x_23);
x_50 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_35);
x_51 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_36);
x_52 = l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__1;
x_53 = l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__2;
x_54 = l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__3;
x_55 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_55, 0, x_52);
lean::cnstr_set(x_55, 1, x_53);
lean::cnstr_set(x_55, 2, x_35);
lean::cnstr_set(x_55, 3, x_54);
lean::cnstr_set(x_55, 4, x_35);
lean::cnstr_set(x_55, 5, x_51);
x_56 = lean::apply_1(x_38, x_55);
x_57 = l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__4;
x_58 = lean::apply_2(x_0, x_57, x_56);
if (lean::is_scalar(x_25)) {
 x_59 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_59 = x_25;
}
lean::cnstr_set(x_59, 0, x_58);
return x_59;
}
default:
{
obj* x_62; 
lean::dec(x_11);
lean::dec(x_25);
x_62 = lean::box(0);
x_29 = x_62;
goto lbl_30;
}
}
lbl_30:
{
obj* x_64; 
lean::dec(x_29);
x_64 = l_lean_expander_expand__bracketed__binder___main(x_26, x_3);
if (lean::obj_tag(x_64) == 0)
{
obj* x_67; obj* x_69; obj* x_70; 
lean::dec(x_0);
lean::dec(x_23);
x_67 = lean::cnstr_get(x_64, 0);
if (lean::is_exclusive(x_64)) {
 x_69 = x_64;
} else {
 lean::inc(x_67);
 lean::dec(x_64);
 x_69 = lean::box(0);
}
if (lean::is_scalar(x_69)) {
 x_70 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_70 = x_69;
}
lean::cnstr_set(x_70, 0, x_67);
return x_70;
}
else
{
obj* x_71; obj* x_73; obj* x_74; obj* x_76; 
x_71 = lean::cnstr_get(x_64, 0);
if (lean::is_exclusive(x_64)) {
 x_73 = x_64;
} else {
 lean::inc(x_71);
 lean::dec(x_64);
 x_73 = lean::box(0);
}
x_74 = l_list_foldr___main___at_lean_expander_expand__binders___spec__5(x_0, x_23, x_71);
lean::dec(x_23);
if (lean::is_scalar(x_73)) {
 x_76 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_76 = x_73;
}
lean::cnstr_set(x_76, 0, x_74);
return x_76;
}
}
}
else
{
obj* x_79; obj* x_81; obj* x_82; obj* x_85; uint8 x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
lean::dec(x_11);
lean::dec(x_3);
x_79 = lean::cnstr_get(x_14, 0);
if (lean::is_exclusive(x_14)) {
 x_81 = x_14;
} else {
 lean::inc(x_79);
 lean::dec(x_14);
 x_81 = lean::box(0);
}
x_82 = lean::cnstr_get(x_7, 0);
lean::inc(x_82);
lean::dec(x_7);
x_85 = l_lean_expander_binder__ident__to__ident___main(x_82);
lean::dec(x_82);
x_87 = 0;
x_88 = l_lean_expander_get__opt__type___main___closed__1;
x_89 = l_lean_expander_mk__simple__binder(x_85, x_87, x_88);
x_90 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_90, 0, x_89);
x_91 = lean::apply_2(x_0, x_90, x_79);
if (lean::is_scalar(x_81)) {
 x_92 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_92 = x_81;
}
lean::cnstr_set(x_92, 0, x_91);
return x_92;
}
}
}
}
}
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__7(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
if (lean::obj_tag(x_9) == 0)
{
lean::dec(x_8);
lean::dec(x_0);
lean::inc(x_1);
return x_1;
}
else
{
obj* x_13; obj* x_14; obj* x_17; obj* x_18; uint8 x_19; obj* x_20; obj* x_21; obj* x_22; 
x_13 = lean::cnstr_get(x_9, 0);
x_14 = lean::cnstr_get(x_9, 1);
lean::inc(x_8);
lean::inc(x_0);
x_17 = l_list_foldr___main___at_lean_expander_expand__binders___spec__7(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
x_18 = l_lean_expander_binder__ident__to__ident___main(x_13);
x_19 = 0;
x_20 = l_lean_expander_mk__simple__binder(x_18, x_19, x_8);
x_21 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_21, 0, x_20);
x_22 = lean::apply_2(x_0, x_21, x_17);
return x_22;
}
}
}
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__8(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_4) == 0)
{
lean::dec(x_3);
lean::dec(x_0);
lean::inc(x_1);
return x_1;
}
else
{
obj* x_8; obj* x_9; obj* x_12; obj* x_13; uint8 x_14; obj* x_15; obj* x_16; obj* x_17; 
x_8 = lean::cnstr_get(x_4, 0);
x_9 = lean::cnstr_get(x_4, 1);
lean::inc(x_3);
lean::inc(x_0);
x_12 = l_list_foldr___main___at_lean_expander_expand__binders___spec__8(x_0, x_1, x_2, x_3, x_9);
x_13 = l_lean_expander_binder__ident__to__ident___main(x_8);
x_14 = 0;
x_15 = l_lean_expander_mk__simple__binder(x_13, x_14, x_3);
x_16 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_16, 0, x_15);
x_17 = lean::apply_2(x_0, x_16, x_12);
return x_17;
}
}
}
obj* _init_l_lean_expander_expand__binders___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_lean_parser_term_hole_has__view;
x_1 = lean::cnstr_get(x_0, 1);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_expander_expand__binders___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("_");
x_1 = l_string_trim(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_expander_expand__binders___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
return x_4;
}
}
obj* _init_l_lean_expander_expand__binders___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* l_lean_expander_expand__binders(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_4; obj* x_7; 
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_10; obj* x_13; 
lean::dec(x_3);
x_10 = lean::cnstr_get(x_4, 0);
lean::inc(x_10);
lean::dec(x_4);
if (lean::obj_tag(x_7) == 0)
{
obj* x_15; 
x_15 = lean::box(0);
x_13 = x_15;
goto lbl_14;
}
else
{
obj* x_16; obj* x_18; 
x_16 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_set(x_7, 0, lean::box(0));
 x_18 = x_7;
} else {
 lean::inc(x_16);
 lean::dec(x_7);
 x_18 = lean::box(0);
}
if (lean::obj_tag(x_16) == 0)
{
obj* x_19; obj* x_22; obj* x_24; obj* x_28; obj* x_29; 
x_19 = lean::cnstr_get(x_16, 0);
lean::inc(x_19);
lean::dec(x_16);
x_22 = lean::cnstr_get(x_19, 1);
lean::inc(x_22);
x_24 = l_list_foldr___main___at_lean_expander_expand__binders___spec__2(x_0, x_2, x_19, x_22, x_10);
lean::dec(x_10);
lean::dec(x_19);
lean::dec(x_2);
if (lean::is_scalar(x_18)) {
 x_28 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_28 = x_18;
}
lean::cnstr_set(x_28, 0, x_24);
x_29 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_29, 0, x_28);
return x_29;
}
else
{
obj* x_32; 
lean::dec(x_16);
lean::dec(x_18);
x_32 = lean::box(0);
x_13 = x_32;
goto lbl_14;
}
}
lbl_14:
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_43; obj* x_44; 
lean::dec(x_13);
x_34 = lean::box(0);
x_35 = l_lean_expander_expand__binders___closed__1;
x_36 = l_lean_expander_expand__binders___closed__2;
x_37 = l_lean_expander_expand__binders___closed__3;
x_38 = l_lean_expander_expand__binders___closed__4;
x_39 = l_lean_expander_get__opt__type___main___closed__1;
x_40 = l_list_foldr___main___at_lean_expander_expand__binders___spec__1(x_0, x_2, x_35, x_34, x_36, x_37, x_38, x_38, x_39, x_10);
lean::dec(x_10);
lean::dec(x_2);
x_43 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_43, 0, x_40);
x_44 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_44, 0, x_43);
return x_44;
}
}
else
{
obj* x_45; 
x_45 = lean::cnstr_get(x_7, 0);
lean::inc(x_45);
if (lean::obj_tag(x_45) == 0)
{
obj* x_48; obj* x_51; 
lean::dec(x_3);
x_48 = lean::cnstr_get(x_4, 0);
lean::inc(x_48);
lean::dec(x_4);
if (lean::obj_tag(x_7) == 0)
{
obj* x_54; 
lean::dec(x_45);
x_54 = lean::box(0);
x_51 = x_54;
goto lbl_52;
}
else
{
obj* x_55; 
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 x_55 = x_7;
} else {
 lean::dec(x_7);
 x_55 = lean::box(0);
}
if (lean::obj_tag(x_45) == 0)
{
obj* x_56; obj* x_59; obj* x_61; obj* x_65; obj* x_66; 
x_56 = lean::cnstr_get(x_45, 0);
lean::inc(x_56);
lean::dec(x_45);
x_59 = lean::cnstr_get(x_56, 1);
lean::inc(x_59);
x_61 = l_list_foldr___main___at_lean_expander_expand__binders___spec__4(x_0, x_2, x_56, x_59, x_48);
lean::dec(x_48);
lean::dec(x_56);
lean::dec(x_2);
if (lean::is_scalar(x_55)) {
 x_65 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_65 = x_55;
}
lean::cnstr_set(x_65, 0, x_61);
x_66 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_66, 0, x_65);
return x_66;
}
else
{
obj* x_69; 
lean::dec(x_55);
lean::dec(x_45);
x_69 = lean::box(0);
x_51 = x_69;
goto lbl_52;
}
}
lbl_52:
{
obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_80; obj* x_81; 
lean::dec(x_51);
x_71 = lean::box(0);
x_72 = l_lean_expander_expand__binders___closed__1;
x_73 = l_lean_expander_expand__binders___closed__2;
x_74 = l_lean_expander_expand__binders___closed__3;
x_75 = l_lean_expander_expand__binders___closed__4;
x_76 = l_lean_expander_get__opt__type___main___closed__1;
x_77 = l_list_foldr___main___at_lean_expander_expand__binders___spec__3(x_0, x_2, x_72, x_71, x_73, x_74, x_75, x_75, x_76, x_48);
lean::dec(x_48);
lean::dec(x_2);
x_80 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_80, 0, x_77);
x_81 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_81, 0, x_80);
return x_81;
}
}
else
{
obj* x_82; obj* x_86; 
x_82 = lean::cnstr_get(x_45, 0);
lean::inc(x_82);
lean::inc(x_82);
lean::inc(x_0);
x_86 = l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6(x_0, x_2, x_82, x_3);
if (lean::obj_tag(x_86) == 0)
{
obj* x_92; obj* x_94; obj* x_95; 
lean::dec(x_4);
lean::dec(x_7);
lean::dec(x_0);
lean::dec(x_45);
lean::dec(x_82);
x_92 = lean::cnstr_get(x_86, 0);
if (lean::is_exclusive(x_86)) {
 x_94 = x_86;
} else {
 lean::inc(x_92);
 lean::dec(x_86);
 x_94 = lean::box(0);
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_92);
return x_95;
}
else
{
obj* x_96; obj* x_98; obj* x_99; obj* x_102; 
x_96 = lean::cnstr_get(x_86, 0);
if (lean::is_exclusive(x_86)) {
 lean::cnstr_set(x_86, 0, lean::box(0));
 x_98 = x_86;
} else {
 lean::inc(x_96);
 lean::dec(x_86);
 x_98 = lean::box(0);
}
x_99 = lean::cnstr_get(x_4, 0);
lean::inc(x_99);
lean::dec(x_4);
if (lean::obj_tag(x_7) == 0)
{
obj* x_106; 
lean::dec(x_45);
lean::dec(x_82);
x_106 = lean::box(0);
x_102 = x_106;
goto lbl_103;
}
else
{
obj* x_107; 
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 x_107 = x_7;
} else {
 lean::dec(x_7);
 x_107 = lean::box(0);
}
if (lean::obj_tag(x_45) == 0)
{
obj* x_110; obj* x_112; obj* x_116; obj* x_117; 
lean::dec(x_45);
lean::dec(x_98);
x_110 = lean::cnstr_get(x_82, 1);
lean::inc(x_110);
x_112 = l_list_foldr___main___at_lean_expander_expand__binders___spec__8(x_0, x_96, x_82, x_110, x_99);
lean::dec(x_99);
lean::dec(x_82);
lean::dec(x_96);
if (lean::is_scalar(x_107)) {
 x_116 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_116 = x_107;
}
lean::cnstr_set(x_116, 0, x_112);
x_117 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_117, 0, x_116);
return x_117;
}
else
{
obj* x_121; 
lean::dec(x_45);
lean::dec(x_82);
lean::dec(x_107);
x_121 = lean::box(0);
x_102 = x_121;
goto lbl_103;
}
}
lbl_103:
{
obj* x_123; obj* x_124; obj* x_125; obj* x_126; obj* x_127; obj* x_128; obj* x_129; obj* x_132; obj* x_133; 
lean::dec(x_102);
x_123 = lean::box(0);
x_124 = l_lean_expander_expand__binders___closed__1;
x_125 = l_lean_expander_expand__binders___closed__2;
x_126 = l_lean_expander_expand__binders___closed__3;
x_127 = l_lean_expander_expand__binders___closed__4;
x_128 = l_lean_expander_get__opt__type___main___closed__1;
x_129 = l_list_foldr___main___at_lean_expander_expand__binders___spec__7(x_0, x_96, x_124, x_123, x_125, x_126, x_127, x_127, x_128, x_99);
lean::dec(x_99);
lean::dec(x_96);
x_132 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_132, 0, x_129);
if (lean::is_scalar(x_98)) {
 x_133 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_133 = x_98;
}
lean::cnstr_set(x_133, 0, x_132);
return x_133;
}
}
}
}
}
else
{
obj* x_138; 
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_138 = l_lean_expander_no__expansion___closed__1;
return x_138;
}
}
}
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
obj* x_10; 
x_10 = l_list_foldr___main___at_lean_expander_expand__binders___spec__1(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_7);
lean::dec(x_9);
return x_10;
}
}
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_list_foldr___main___at_lean_expander_expand__binders___spec__2(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_4);
return x_5;
}
}
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__3___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
obj* x_10; 
x_10 = l_list_foldr___main___at_lean_expander_expand__binders___spec__3(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_7);
lean::dec(x_9);
return x_10;
}
}
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__4___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_list_foldr___main___at_lean_expander_expand__binders___spec__4(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_4);
return x_5;
}
}
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__5___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_list_foldr___main___at_lean_expander_expand__binders___spec__5(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__7___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
obj* x_10; 
x_10 = l_list_foldr___main___at_lean_expander_expand__binders___spec__7(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_7);
lean::dec(x_9);
return x_10;
}
}
obj* l_list_foldr___main___at_lean_expander_expand__binders___spec__8___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_list_foldr___main___at_lean_expander_expand__binders___spec__8(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_4);
return x_5;
}
}
obj* l_list_mmap___main___at_lean_expander_bracketed__binders_transform___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_3; 
lean::dec(x_1);
x_3 = l_lean_expander_expand__bracketed__binder___main___closed__8;
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_10; 
x_4 = lean::cnstr_get(x_0, 0);
x_6 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_8 = x_0;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_0);
 x_8 = lean::box(0);
}
lean::inc(x_1);
x_10 = l_lean_expander_expand__bracketed__binder___main(x_4, x_1);
if (lean::obj_tag(x_10) == 0)
{
obj* x_14; obj* x_16; obj* x_17; 
lean::dec(x_8);
lean::dec(x_6);
lean::dec(x_1);
x_14 = lean::cnstr_get(x_10, 0);
if (lean::is_exclusive(x_10)) {
 x_16 = x_10;
} else {
 lean::inc(x_14);
 lean::dec(x_10);
 x_16 = lean::box(0);
}
if (lean::is_scalar(x_16)) {
 x_17 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_17 = x_16;
}
lean::cnstr_set(x_17, 0, x_14);
return x_17;
}
else
{
obj* x_18; obj* x_21; 
x_18 = lean::cnstr_get(x_10, 0);
lean::inc(x_18);
lean::dec(x_10);
x_21 = l_list_mmap___main___at_lean_expander_bracketed__binders_transform___spec__1(x_6, x_1);
if (lean::obj_tag(x_21) == 0)
{
obj* x_24; obj* x_26; obj* x_27; 
lean::dec(x_8);
lean::dec(x_18);
x_24 = lean::cnstr_get(x_21, 0);
if (lean::is_exclusive(x_21)) {
 x_26 = x_21;
} else {
 lean::inc(x_24);
 lean::dec(x_21);
 x_26 = lean::box(0);
}
if (lean::is_scalar(x_26)) {
 x_27 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_27 = x_26;
}
lean::cnstr_set(x_27, 0, x_24);
return x_27;
}
else
{
obj* x_28; obj* x_30; obj* x_31; obj* x_32; 
x_28 = lean::cnstr_get(x_21, 0);
if (lean::is_exclusive(x_21)) {
 x_30 = x_21;
} else {
 lean::inc(x_28);
 lean::dec(x_21);
 x_30 = lean::box(0);
}
if (lean::is_scalar(x_8)) {
 x_31 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_31 = x_8;
}
lean::cnstr_set(x_31, 0, x_18);
lean::cnstr_set(x_31, 1, x_28);
if (lean::is_scalar(x_30)) {
 x_32 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_32 = x_30;
}
lean::cnstr_set(x_32, 0, x_31);
return x_32;
}
}
}
}
}
obj* l_lean_expander_bracketed__binders_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; 
x_2 = l_lean_parser_term_bracketed__binders_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::apply_1(x_3, x_0);
if (lean::obj_tag(x_5) == 0)
{
obj* x_6; obj* x_8; obj* x_9; 
x_6 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_set(x_5, 0, lean::box(0));
 x_8 = x_5;
} else {
 lean::inc(x_6);
 lean::dec(x_5);
 x_8 = lean::box(0);
}
x_9 = l_list_mmap___main___at_lean_expander_bracketed__binders_transform___spec__1(x_6, x_1);
if (lean::obj_tag(x_9) == 0)
{
obj* x_11; obj* x_13; obj* x_14; 
lean::dec(x_8);
x_11 = lean::cnstr_get(x_9, 0);
if (lean::is_exclusive(x_9)) {
 x_13 = x_9;
} else {
 lean::inc(x_11);
 lean::dec(x_9);
 x_13 = lean::box(0);
}
if (lean::is_scalar(x_13)) {
 x_14 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_14 = x_13;
}
lean::cnstr_set(x_14, 0, x_11);
return x_14;
}
else
{
obj* x_15; obj* x_17; obj* x_18; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_15 = lean::cnstr_get(x_9, 0);
if (lean::is_exclusive(x_9)) {
 x_17 = x_9;
} else {
 lean::inc(x_15);
 lean::dec(x_9);
 x_17 = lean::box(0);
}
x_18 = lean::cnstr_get(x_2, 1);
lean::inc(x_18);
lean::dec(x_2);
x_21 = l_list_join___main___rarg(x_15);
if (lean::is_scalar(x_8)) {
 x_22 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_22 = x_8;
 lean::cnstr_set_tag(x_8, 1);
}
lean::cnstr_set(x_22, 0, x_21);
x_23 = lean::apply_1(x_18, x_22);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
if (lean::is_scalar(x_17)) {
 x_25 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_25 = x_17;
}
lean::cnstr_set(x_25, 0, x_24);
return x_25;
}
}
else
{
obj* x_28; 
lean::dec(x_5);
lean::dec(x_1);
x_28 = l_lean_expander_no__expansion___closed__1;
return x_28;
}
}
}
obj* l_lean_expander_lambda_transform___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = l_lean_parser_term_lambda_has__view;
x_3 = lean::cnstr_get(x_2, 1);
lean::inc(x_3);
lean::dec(x_2);
x_6 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__2;
x_7 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__3;
x_8 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_0);
lean::cnstr_set(x_8, 2, x_7);
lean::cnstr_set(x_8, 3, x_1);
x_9 = lean::apply_1(x_3, x_8);
return x_9;
}
}
obj* _init_l_lean_expander_lambda_transform___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_lambda_transform___lambda__1), 2, 0);
return x_0;
}
}
obj* l_lean_expander_lambda_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_6; obj* x_7; obj* x_9; obj* x_12; obj* x_13; 
x_2 = l_lean_parser_term_lambda_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
lean::dec(x_2);
x_6 = lean::apply_1(x_3, x_0);
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 3);
lean::inc(x_9);
lean::dec(x_6);
x_12 = l_lean_expander_lambda_transform___closed__1;
x_13 = l_lean_expander_expand__binders(x_12, x_7, x_9, x_1);
return x_13;
}
}
obj* l_lean_expander_pi_transform___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_10; obj* x_11; obj* x_12; 
x_3 = l_lean_parser_term_pi_has__view;
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
lean::dec(x_3);
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__3;
x_11 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_11, 0, x_7);
lean::cnstr_set(x_11, 1, x_1);
lean::cnstr_set(x_11, 2, x_10);
lean::cnstr_set(x_11, 3, x_2);
x_12 = lean::apply_1(x_4, x_11);
return x_12;
}
}
obj* l_lean_expander_pi_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_14; 
x_2 = l_lean_parser_term_pi_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
lean::dec(x_2);
x_6 = lean::apply_1(x_3, x_0);
lean::inc(x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_pi_transform___lambda__1), 3, 1);
lean::closure_set(x_8, 0, x_6);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 3);
lean::inc(x_11);
lean::dec(x_6);
x_14 = l_lean_expander_expand__binders(x_8, x_9, x_11, x_1);
return x_14;
}
}
obj* _init_l_lean_expander_arrow_transform___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("a");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string(".");
lean::inc(x_3);
x_6 = l_lean_name_to__string__with__sep___main(x_4, x_3);
lean::dec(x_4);
x_8 = l_lean_parser_substring_of__string(x_6);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_10, 0, x_0);
lean::cnstr_set(x_10, 1, x_8);
lean::cnstr_set(x_10, 2, x_3);
lean::cnstr_set(x_10, 3, x_9);
lean::cnstr_set(x_10, 4, x_9);
return x_10;
}
}
obj* _init_l_lean_expander_arrow_transform___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_string("\xce\xa0");
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
}
obj* l_lean_expander_arrow_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_6; obj* x_7; obj* x_8; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_2 = l_lean_parser_term_arrow_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
lean::dec(x_2);
x_6 = lean::apply_1(x_3, x_0);
x_7 = l_lean_parser_term_pi_has__view;
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
lean::dec(x_7);
x_11 = lean::cnstr_get(x_6, 0);
lean::inc(x_11);
x_13 = l_lean_expander_coe__binder__bracketed__binder___closed__1;
x_14 = l_lean_expander_arrow_transform___closed__1;
x_15 = l_lean_expander_mk__simple__binder___closed__1;
x_16 = l_lean_expander_coe__binder__bracketed__binder___closed__2;
x_17 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_17, 0, x_13);
lean::cnstr_set(x_17, 1, x_14);
lean::cnstr_set(x_17, 2, x_15);
lean::cnstr_set(x_17, 3, x_11);
lean::cnstr_set(x_17, 4, x_16);
x_18 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_18, 0, x_17);
x_19 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_19, 0, x_18);
x_20 = lean::cnstr_get(x_6, 2);
lean::inc(x_20);
lean::dec(x_6);
x_23 = l_lean_expander_arrow_transform___closed__2;
x_24 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__3;
x_25 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_25, 0, x_23);
lean::cnstr_set(x_25, 1, x_19);
lean::cnstr_set(x_25, 2, x_24);
lean::cnstr_set(x_25, 3, x_20);
x_26 = lean::apply_1(x_8, x_25);
x_27 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_27, 0, x_26);
x_28 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_28, 0, x_27);
return x_28;
}
}
obj* l_lean_expander_arrow_transform___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expander_arrow_transform(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_list_map___main___at_lean_expander_paren_transform___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_10; obj* x_11; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
lean::dec(x_2);
x_10 = l_list_map___main___at_lean_expander_paren_transform___spec__1(x_4);
if (lean::is_scalar(x_6)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_6;
}
lean::cnstr_set(x_11, 0, x_7);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
}
obj* _init_l_list_foldr1___main___at_lean_expander_paren_transform___spec__3___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("prod");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("mk");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = l_lean_expander_glob__id(x_4);
return x_5;
}
}
obj* l_list_foldr1___main___at_lean_expander_paren_transform___spec__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
return x_4;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_7 = lean::cnstr_get(x_0, 0);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 1);
 x_9 = x_0;
} else {
 lean::inc(x_7);
 lean::dec(x_0);
 x_9 = lean::box(0);
}
lean::inc(x_2);
x_11 = l_list_foldr1___main___at_lean_expander_paren_transform___spec__3(x_2, lean::box(0));
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_release(x_2, 1);
 x_12 = x_2;
} else {
 lean::dec(x_2);
 x_12 = lean::box(0);
}
x_13 = lean::box(0);
if (lean::is_scalar(x_12)) {
 x_14 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_14 = x_12;
}
lean::cnstr_set(x_14, 0, x_11);
lean::cnstr_set(x_14, 1, x_13);
if (lean::is_scalar(x_9)) {
 x_15 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_15 = x_9;
}
lean::cnstr_set(x_15, 0, x_7);
lean::cnstr_set(x_15, 1, x_14);
x_16 = l_list_foldr1___main___at_lean_expander_paren_transform___spec__3___closed__1;
x_17 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_16, x_15);
return x_17;
}
}
}
obj* l_list_foldr1__opt___main___at_lean_expander_paren_transform___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 1);
lean::inc(x_2);
lean::dec(x_1);
x_5 = l_list_map___main___at_lean_expander_paren_transform___spec__1(x_2);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_5);
x_7 = l_list_foldr1___main___at_lean_expander_paren_transform___spec__3(x_6, lean::box(0));
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
}
obj* _init_l_lean_expander_paren_transform___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("unit");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("star");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = l_lean_expander_glob__id(x_4);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
}
obj* _init_l_lean_expander_paren_transform___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_string("typed_expr");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = l_lean_expander_glob__id(x_2);
return x_3;
}
}
obj* l_lean_expander_paren_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_6; obj* x_7; 
x_2 = l_lean_parser_term_paren_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
lean::dec(x_2);
x_6 = lean::apply_1(x_3, x_0);
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
lean::dec(x_6);
if (lean::obj_tag(x_7) == 0)
{
obj* x_10; 
x_10 = l_lean_expander_paren_transform___closed__1;
return x_10;
}
else
{
obj* x_11; obj* x_13; obj* x_14; 
x_11 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_set(x_7, 0, lean::box(0));
 x_13 = x_7;
} else {
 lean::inc(x_11);
 lean::dec(x_7);
 x_13 = lean::box(0);
}
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
if (lean::obj_tag(x_14) == 0)
{
obj* x_16; obj* x_19; obj* x_20; 
x_16 = lean::cnstr_get(x_11, 0);
lean::inc(x_16);
lean::dec(x_11);
if (lean::is_scalar(x_13)) {
 x_19 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_19 = x_13;
}
lean::cnstr_set(x_19, 0, x_16);
x_20 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_20, 0, x_19);
return x_20;
}
else
{
obj* x_22; obj* x_24; 
lean::dec(x_13);
x_22 = lean::cnstr_get(x_14, 0);
if (lean::is_exclusive(x_14)) {
 lean::cnstr_set(x_14, 0, lean::box(0));
 x_24 = x_14;
} else {
 lean::inc(x_22);
 lean::dec(x_14);
 x_24 = lean::box(0);
}
if (lean::obj_tag(x_22) == 0)
{
obj* x_26; obj* x_29; obj* x_32; obj* x_33; 
lean::dec(x_24);
x_26 = lean::cnstr_get(x_11, 0);
lean::inc(x_26);
lean::dec(x_11);
x_29 = lean::cnstr_get(x_22, 0);
lean::inc(x_29);
lean::dec(x_22);
x_32 = l_list_foldr1__opt___main___at_lean_expander_paren_transform___spec__2(x_26, x_29);
x_33 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_33, 0, x_32);
return x_33;
}
else
{
obj* x_34; obj* x_37; obj* x_40; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
x_34 = lean::cnstr_get(x_11, 0);
lean::inc(x_34);
lean::dec(x_11);
x_37 = lean::cnstr_get(x_22, 0);
lean::inc(x_37);
lean::dec(x_22);
x_40 = lean::cnstr_get(x_37, 1);
lean::inc(x_40);
lean::dec(x_37);
x_43 = lean::box(0);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_34);
lean::cnstr_set(x_44, 1, x_43);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_40);
lean::cnstr_set(x_45, 1, x_44);
x_46 = l_lean_expander_paren_transform___closed__2;
x_47 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_46, x_45);
if (lean::is_scalar(x_24)) {
 x_48 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_48 = x_24;
}
lean::cnstr_set(x_48, 0, x_47);
x_49 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_49, 0, x_48);
return x_49;
}
}
}
}
}
obj* l_list_foldr1___main___at_lean_expander_paren_transform___spec__3___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_list_foldr1___main___at_lean_expander_paren_transform___spec__3(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_expander_paren_transform___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expander_paren_transform(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_lean_expander_assume_transform___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("this");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string(".");
lean::inc(x_3);
x_6 = l_lean_name_to__string__with__sep___main(x_4, x_3);
lean::dec(x_4);
x_8 = l_lean_parser_substring_of__string(x_6);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_10, 0, x_0);
lean::cnstr_set(x_10, 1, x_8);
lean::cnstr_set(x_10, 2, x_3);
lean::cnstr_set(x_10, 3, x_9);
lean::cnstr_set(x_10, 4, x_9);
return x_10;
}
}
obj* l_lean_expander_assume_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_6; obj* x_7; obj* x_9; 
x_2 = l_lean_parser_term_assume_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
lean::dec(x_2);
x_6 = lean::apply_1(x_3, x_0);
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
x_9 = l_lean_parser_term_lambda_has__view;
if (lean::obj_tag(x_7) == 0)
{
obj* x_10; obj* x_13; obj* x_16; obj* x_19; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
lean::dec(x_9);
x_13 = lean::cnstr_get(x_6, 3);
lean::inc(x_13);
lean::dec(x_6);
x_16 = lean::cnstr_get(x_7, 0);
lean::inc(x_16);
lean::dec(x_7);
x_19 = lean::cnstr_get(x_16, 1);
lean::inc(x_19);
lean::dec(x_16);
x_22 = l_lean_expander_coe__binder__bracketed__binder___closed__1;
x_23 = l_lean_expander_assume_transform___closed__1;
x_24 = l_lean_expander_mk__simple__binder___closed__1;
x_25 = l_lean_expander_coe__binder__bracketed__binder___closed__2;
x_26 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_26, 0, x_22);
lean::cnstr_set(x_26, 1, x_23);
lean::cnstr_set(x_26, 2, x_24);
lean::cnstr_set(x_26, 3, x_19);
lean::cnstr_set(x_26, 4, x_25);
x_27 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_27, 0, x_26);
x_28 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_28, 0, x_27);
x_29 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__2;
x_30 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__3;
x_31 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_31, 0, x_29);
lean::cnstr_set(x_31, 1, x_28);
lean::cnstr_set(x_31, 2, x_30);
lean::cnstr_set(x_31, 3, x_13);
x_32 = lean::apply_1(x_10, x_31);
x_33 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_33, 0, x_32);
x_34 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_34, 0, x_33);
return x_34;
}
else
{
obj* x_35; obj* x_38; obj* x_41; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
x_35 = lean::cnstr_get(x_9, 1);
lean::inc(x_35);
lean::dec(x_9);
x_38 = lean::cnstr_get(x_6, 3);
lean::inc(x_38);
lean::dec(x_6);
x_41 = lean::cnstr_get(x_7, 0);
lean::inc(x_41);
lean::dec(x_7);
x_44 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__2;
x_45 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__3;
x_46 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_46, 0, x_44);
lean::cnstr_set(x_46, 1, x_41);
lean::cnstr_set(x_46, 2, x_45);
lean::cnstr_set(x_46, 3, x_38);
x_47 = lean::apply_1(x_35, x_46);
x_48 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_48, 0, x_47);
x_49 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_49, 0, x_48);
return x_49;
}
}
}
obj* l_lean_expander_assume_transform___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expander_assume_transform(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_lean_expander_if_transform___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_string("ite");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = l_lean_expander_glob__id(x_2);
return x_3;
}
}
obj* _init_l_lean_expander_if_transform___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_string("not");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = l_lean_expander_glob__id(x_2);
return x_3;
}
}
obj* _init_l_lean_expander_if_transform___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_string("dite");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = l_lean_expander_glob__id(x_2);
return x_3;
}
}
obj* l_lean_expander_if_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_6; obj* x_7; 
x_2 = l_lean_parser_term_if_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
lean::dec(x_2);
x_6 = lean::apply_1(x_3, x_0);
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_9; obj* x_11; obj* x_13; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_9 = lean::cnstr_get(x_6, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 4);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_6, 6);
lean::inc(x_13);
lean::dec(x_6);
x_16 = lean::box(0);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_13);
lean::cnstr_set(x_17, 1, x_16);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_11);
lean::cnstr_set(x_18, 1, x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_9);
lean::cnstr_set(x_19, 1, x_18);
x_20 = l_lean_expander_if_transform___closed__1;
x_21 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_20, x_19);
x_22 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_22, 0, x_21);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_22);
return x_23;
}
else
{
obj* x_24; obj* x_26; obj* x_27; obj* x_29; obj* x_30; obj* x_33; obj* x_36; obj* x_37; obj* x_38; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_46; obj* x_47; obj* x_48; obj* x_50; obj* x_51; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_24 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 x_26 = x_7;
} else {
 lean::inc(x_24);
 lean::dec(x_7);
 x_26 = lean::box(0);
}
x_27 = lean::cnstr_get(x_6, 2);
lean::inc(x_27);
x_29 = l_lean_parser_term_lambda_has__view;
x_30 = lean::cnstr_get(x_29, 1);
lean::inc(x_30);
lean::dec(x_29);
x_33 = lean::cnstr_get(x_24, 0);
lean::inc(x_33);
lean::dec(x_24);
x_36 = l_lean_expander_coe__binder__bracketed__binder___closed__1;
x_37 = l_lean_expander_mk__simple__binder___closed__1;
x_38 = l_lean_expander_coe__binder__bracketed__binder___closed__2;
lean::inc(x_27);
lean::inc(x_33);
x_41 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_41, 0, x_36);
lean::cnstr_set(x_41, 1, x_33);
lean::cnstr_set(x_41, 2, x_37);
lean::cnstr_set(x_41, 3, x_27);
lean::cnstr_set(x_41, 4, x_38);
x_42 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_42, 0, x_41);
x_43 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_43, 0, x_42);
x_44 = lean::cnstr_get(x_6, 4);
lean::inc(x_44);
x_46 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__2;
x_47 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__3;
x_48 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_48, 0, x_46);
lean::cnstr_set(x_48, 1, x_43);
lean::cnstr_set(x_48, 2, x_47);
lean::cnstr_set(x_48, 3, x_44);
lean::inc(x_30);
x_50 = lean::apply_1(x_30, x_48);
x_51 = lean::box(0);
lean::inc(x_27);
x_53 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_53, 0, x_27);
lean::cnstr_set(x_53, 1, x_51);
x_54 = l_lean_expander_if_transform___closed__2;
x_55 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_54, x_53);
x_56 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_56, 0, x_36);
lean::cnstr_set(x_56, 1, x_33);
lean::cnstr_set(x_56, 2, x_37);
lean::cnstr_set(x_56, 3, x_55);
lean::cnstr_set(x_56, 4, x_38);
x_57 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_57, 0, x_56);
x_58 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_58, 0, x_57);
x_59 = lean::cnstr_get(x_6, 6);
lean::inc(x_59);
lean::dec(x_6);
x_62 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_62, 0, x_46);
lean::cnstr_set(x_62, 1, x_58);
lean::cnstr_set(x_62, 2, x_47);
lean::cnstr_set(x_62, 3, x_59);
x_63 = lean::apply_1(x_30, x_62);
x_64 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_51);
x_65 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_65, 0, x_50);
lean::cnstr_set(x_65, 1, x_64);
x_66 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_66, 0, x_27);
lean::cnstr_set(x_66, 1, x_65);
x_67 = l_lean_expander_if_transform___closed__3;
x_68 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_67, x_66);
if (lean::is_scalar(x_26)) {
 x_69 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_69 = x_26;
}
lean::cnstr_set(x_69, 0, x_68);
x_70 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_70, 0, x_69);
return x_70;
}
}
}
obj* l_lean_expander_if_transform___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expander_if_transform(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_list_map___main___at_lean_expander_let_transform___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_7, 0, x_2);
x_8 = l_list_map___main___at_lean_expander_let_transform___spec__1(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* _init_l_lean_expander_let_transform___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_10; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_0 = lean::box(0);
x_1 = lean::mk_string(" : ");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
x_6 = l_lean_parser_term_hole_has__view;
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
lean::dec(x_6);
x_10 = lean::mk_string("_");
x_11 = l_string_trim(x_10);
lean::dec(x_10);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_0);
lean::cnstr_set(x_13, 1, x_11);
x_14 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_14, 0, x_13);
x_15 = lean::apply_1(x_7, x_14);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_5);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_17, 0, x_16);
return x_17;
}
}
obj* l_lean_expander_let_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_6; 
x_2 = l_lean_parser_term_let_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::apply_1(x_3, x_0);
x_6 = lean::cnstr_get(x_5, 1);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_8; obj* x_10; obj* x_11; 
x_8 = lean::cnstr_get(x_6, 0);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_set(x_6, 0, lean::box(0));
 x_10 = x_6;
} else {
 lean::inc(x_8);
 lean::dec(x_6);
 x_10 = lean::box(0);
}
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_13; 
x_13 = lean::cnstr_get(x_8, 2);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_15; obj* x_17; obj* x_18; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_28; obj* x_30; obj* x_32; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_15 = lean::cnstr_get(x_8, 0);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 1);
 lean::cnstr_release(x_8, 2);
 x_17 = x_8;
} else {
 lean::inc(x_15);
 lean::dec(x_8);
 x_17 = lean::box(0);
}
x_18 = lean::cnstr_get(x_2, 1);
lean::inc(x_18);
lean::dec(x_2);
x_21 = lean::cnstr_get(x_5, 0);
lean::inc(x_21);
x_23 = l_lean_expander_let_transform___closed__1;
if (lean::is_scalar(x_17)) {
 x_24 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_24 = x_17;
}
lean::cnstr_set(x_24, 0, x_15);
lean::cnstr_set(x_24, 1, x_11);
lean::cnstr_set(x_24, 2, x_23);
if (lean::is_scalar(x_10)) {
 x_25 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_25 = x_10;
}
lean::cnstr_set(x_25, 0, x_24);
x_26 = lean::cnstr_get(x_5, 2);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_5, 3);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_5, 4);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_5, 5);
lean::inc(x_32);
lean::dec(x_5);
x_35 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_35, 0, x_21);
lean::cnstr_set(x_35, 1, x_25);
lean::cnstr_set(x_35, 2, x_26);
lean::cnstr_set(x_35, 3, x_28);
lean::cnstr_set(x_35, 4, x_30);
lean::cnstr_set(x_35, 5, x_32);
x_36 = lean::apply_1(x_18, x_35);
x_37 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_37, 0, x_36);
x_38 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_38, 0, x_37);
return x_38;
}
else
{
obj* x_43; 
lean::dec(x_13);
lean::dec(x_10);
lean::dec(x_8);
lean::dec(x_5);
x_43 = l_lean_expander_no__expansion___closed__1;
return x_43;
}
}
else
{
obj* x_44; obj* x_46; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_58; obj* x_60; obj* x_61; obj* x_64; obj* x_66; obj* x_67; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_78; obj* x_79; obj* x_82; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_89; obj* x_92; obj* x_93; obj* x_94; obj* x_95; 
x_44 = lean::cnstr_get(x_8, 0);
x_46 = lean::cnstr_get(x_8, 2);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 1);
 x_48 = x_8;
} else {
 lean::inc(x_44);
 lean::inc(x_46);
 lean::dec(x_8);
 x_48 = lean::box(0);
}
x_49 = lean::box(0);
x_50 = l_list_map___main___at_lean_expander_let_transform___spec__1(x_11);
x_51 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_51, 0, x_50);
x_52 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_52, 0, x_51);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_49);
lean::cnstr_set(x_53, 1, x_52);
x_54 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_54, 0, x_53);
x_55 = lean::cnstr_get(x_2, 1);
lean::inc(x_55);
lean::dec(x_2);
x_58 = lean::cnstr_get(x_5, 0);
lean::inc(x_58);
x_60 = l_lean_parser_term_pi_has__view;
x_61 = lean::cnstr_get(x_60, 1);
lean::inc(x_61);
lean::dec(x_60);
x_64 = l_lean_expander_get__opt__type___main(x_46);
lean::dec(x_46);
x_66 = l_lean_expander_arrow_transform___closed__2;
x_67 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__3;
lean::inc(x_54);
x_69 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_69, 0, x_66);
lean::cnstr_set(x_69, 1, x_54);
lean::cnstr_set(x_69, 2, x_67);
lean::cnstr_set(x_69, 3, x_64);
x_70 = lean::apply_1(x_61, x_69);
x_71 = l_lean_expander_mk__simple__binder___closed__1;
x_72 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_72, 0, x_71);
lean::cnstr_set(x_72, 1, x_70);
x_73 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_73, 0, x_72);
if (lean::is_scalar(x_48)) {
 x_74 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_74 = x_48;
}
lean::cnstr_set(x_74, 0, x_44);
lean::cnstr_set(x_74, 1, x_49);
lean::cnstr_set(x_74, 2, x_73);
if (lean::is_scalar(x_10)) {
 x_75 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_75 = x_10;
}
lean::cnstr_set(x_75, 0, x_74);
x_76 = lean::cnstr_get(x_5, 2);
lean::inc(x_76);
x_78 = l_lean_parser_term_lambda_has__view;
x_79 = lean::cnstr_get(x_78, 1);
lean::inc(x_79);
lean::dec(x_78);
x_82 = lean::cnstr_get(x_5, 3);
lean::inc(x_82);
x_84 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__2;
x_85 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_85, 0, x_84);
lean::cnstr_set(x_85, 1, x_54);
lean::cnstr_set(x_85, 2, x_67);
lean::cnstr_set(x_85, 3, x_82);
x_86 = lean::apply_1(x_79, x_85);
x_87 = lean::cnstr_get(x_5, 4);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_5, 5);
lean::inc(x_89);
lean::dec(x_5);
x_92 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_92, 0, x_58);
lean::cnstr_set(x_92, 1, x_75);
lean::cnstr_set(x_92, 2, x_76);
lean::cnstr_set(x_92, 3, x_86);
lean::cnstr_set(x_92, 4, x_87);
lean::cnstr_set(x_92, 5, x_89);
x_93 = lean::apply_1(x_55, x_92);
x_94 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_94, 0, x_93);
x_95 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_95, 0, x_94);
return x_95;
}
}
else
{
obj* x_96; obj* x_99; obj* x_100; obj* x_103; obj* x_104; obj* x_106; obj* x_107; obj* x_108; obj* x_109; obj* x_110; obj* x_111; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; obj* x_120; obj* x_121; obj* x_122; obj* x_123; 
x_96 = lean::cnstr_get(x_6, 0);
lean::inc(x_96);
lean::dec(x_6);
x_99 = l_lean_parser_term_match_has__view;
x_100 = lean::cnstr_get(x_99, 1);
lean::inc(x_100);
lean::dec(x_99);
x_103 = lean::box(0);
x_104 = lean::cnstr_get(x_5, 3);
lean::inc(x_104);
x_106 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_106, 0, x_104);
lean::cnstr_set(x_106, 1, x_103);
x_107 = lean::box(0);
x_108 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_108, 0, x_106);
lean::cnstr_set(x_108, 1, x_107);
x_109 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_109, 0, x_96);
lean::cnstr_set(x_109, 1, x_103);
x_110 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_110, 0, x_109);
lean::cnstr_set(x_110, 1, x_107);
x_111 = lean::cnstr_get(x_5, 5);
lean::inc(x_111);
lean::dec(x_5);
x_114 = l_lean_expander_mixfix_transform___closed__4;
x_115 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_115, 0, x_110);
lean::cnstr_set(x_115, 1, x_114);
lean::cnstr_set(x_115, 2, x_111);
x_116 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_116, 0, x_115);
lean::cnstr_set(x_116, 1, x_103);
x_117 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_117, 0, x_116);
lean::cnstr_set(x_117, 1, x_107);
x_118 = l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__1;
x_119 = l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__3;
x_120 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_120, 0, x_118);
lean::cnstr_set(x_120, 1, x_108);
lean::cnstr_set(x_120, 2, x_103);
lean::cnstr_set(x_120, 3, x_119);
lean::cnstr_set(x_120, 4, x_103);
lean::cnstr_set(x_120, 5, x_117);
x_121 = lean::apply_1(x_100, x_120);
x_122 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_122, 0, x_121);
x_123 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_123, 0, x_122);
return x_123;
}
}
}
obj* l_lean_expander_let_transform___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expander_let_transform(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_list_map___main___at_lean_expander_constant_transform___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_7, 0, x_2);
x_8 = l_list_map___main___at_lean_expander_constant_transform___spec__1(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* _init_l_lean_expander_constant_transform___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_expander_constant_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_8; 
x_2 = l_lean_parser_command_constant_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::apply_1(x_3, x_0);
x_6 = lean::cnstr_get(x_5, 2);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
obj* x_10; obj* x_12; obj* x_13; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_25; obj* x_27; obj* x_29; obj* x_30; obj* x_31; obj* x_34; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
x_10 = lean::cnstr_get(x_6, 1);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 x_12 = x_6;
} else {
 lean::inc(x_10);
 lean::dec(x_6);
 x_12 = lean::box(0);
}
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
lean::dec(x_8);
x_16 = lean::box(0);
x_17 = l_list_map___main___at_lean_expander_constant_transform___spec__1(x_13);
x_18 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_18, 0, x_17);
x_19 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_19, 0, x_18);
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_16);
lean::cnstr_set(x_20, 1, x_19);
x_21 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_21, 0, x_20);
x_22 = lean::cnstr_get(x_2, 1);
lean::inc(x_22);
lean::dec(x_2);
x_25 = lean::cnstr_get(x_5, 0);
x_27 = lean::cnstr_get(x_5, 1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 2);
 x_29 = x_5;
} else {
 lean::inc(x_25);
 lean::inc(x_27);
 lean::dec(x_5);
 x_29 = lean::box(0);
}
x_30 = l_lean_parser_term_pi_has__view;
x_31 = lean::cnstr_get(x_30, 1);
lean::inc(x_31);
lean::dec(x_30);
x_34 = lean::cnstr_get(x_10, 1);
lean::inc(x_34);
lean::dec(x_10);
x_37 = l_lean_expander_arrow_transform___closed__2;
x_38 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__3;
x_39 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_39, 0, x_37);
lean::cnstr_set(x_39, 1, x_21);
lean::cnstr_set(x_39, 2, x_38);
lean::cnstr_set(x_39, 3, x_34);
x_40 = lean::apply_1(x_31, x_39);
x_41 = l_lean_expander_mk__simple__binder___closed__1;
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set(x_42, 1, x_40);
x_43 = l_lean_expander_constant_transform___closed__1;
if (lean::is_scalar(x_12)) {
 x_44 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_44 = x_12;
}
lean::cnstr_set(x_44, 0, x_43);
lean::cnstr_set(x_44, 1, x_42);
if (lean::is_scalar(x_29)) {
 x_45 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_45 = x_29;
}
lean::cnstr_set(x_45, 0, x_25);
lean::cnstr_set(x_45, 1, x_27);
lean::cnstr_set(x_45, 2, x_44);
x_46 = lean::apply_1(x_22, x_45);
x_47 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_47, 0, x_46);
x_48 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_48, 0, x_47);
return x_48;
}
else
{
obj* x_52; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_8);
x_52 = l_lean_expander_no__expansion___closed__1;
return x_52;
}
}
}
obj* l_lean_expander_constant_transform___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expander_constant_transform(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_lean_expander_declaration_transform___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_10; obj* x_11; obj* x_12; 
x_0 = lean::box(0);
x_1 = lean::mk_string("@[");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
x_6 = lean::box(0);
x_7 = lean::mk_string("]");
x_8 = l_string_trim(x_7);
lean::dec(x_7);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_0);
lean::cnstr_set(x_10, 1, x_8);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
x_12 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_12, 0, x_5);
lean::cnstr_set(x_12, 1, x_6);
lean::cnstr_set(x_12, 2, x_11);
return x_12;
}
}
obj* _init_l_lean_expander_declaration_transform___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::box(0);
x_3 = lean::mk_string("class");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string(".");
lean::inc(x_4);
x_7 = l_lean_name_to__string__with__sep___main(x_5, x_4);
lean::dec(x_5);
x_9 = l_lean_parser_substring_of__string(x_7);
x_10 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_10, 0, x_0);
lean::cnstr_set(x_10, 1, x_9);
lean::cnstr_set(x_10, 2, x_4);
lean::cnstr_set(x_10, 3, x_1);
lean::cnstr_set(x_10, 4, x_1);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_1);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_0);
return x_12;
}
}
obj* _init_l_lean_expander_declaration_transform___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("structure");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
x_6 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
}
obj* l_lean_expander_declaration_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_6; 
x_2 = l_lean_parser_command_declaration_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::apply_1(x_3, x_0);
x_6 = lean::cnstr_get(x_5, 1);
lean::inc(x_6);
switch (lean::obj_tag(x_6)) {
case 4:
{
obj* x_8; obj* x_10; obj* x_11; 
x_8 = lean::cnstr_get(x_6, 0);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_set(x_6, 0, lean::box(0));
 x_10 = x_6;
} else {
 lean::inc(x_8);
 lean::dec(x_6);
 x_10 = lean::box(0);
}
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_16; 
lean::dec(x_8);
lean::dec(x_5);
lean::dec(x_10);
x_16 = l_lean_expander_no__expansion___closed__1;
return x_16;
}
else
{
obj* x_17; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_31; obj* x_34; obj* x_36; obj* x_37; obj* x_38; obj* x_40; obj* x_43; obj* x_45; obj* x_47; obj* x_49; obj* x_50; obj* x_51; obj* x_54; obj* x_55; obj* x_56; obj* x_58; obj* x_60; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; 
if (lean::is_exclusive(x_11)) {
 lean::cnstr_release(x_11, 0);
 x_17 = x_11;
} else {
 lean::dec(x_11);
 x_17 = lean::box(0);
}
x_18 = lean::cnstr_get(x_8, 1);
x_20 = lean::cnstr_get(x_8, 2);
x_22 = lean::cnstr_get(x_8, 3);
x_24 = lean::cnstr_get(x_8, 4);
x_26 = lean::cnstr_get(x_8, 5);
x_28 = lean::cnstr_get(x_8, 6);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 x_30 = x_8;
} else {
 lean::inc(x_18);
 lean::inc(x_20);
 lean::inc(x_22);
 lean::inc(x_24);
 lean::inc(x_26);
 lean::inc(x_28);
 lean::dec(x_8);
 x_30 = lean::box(0);
}
x_31 = lean::cnstr_get(x_5, 0);
lean::inc(x_31);
lean::dec(x_5);
x_34 = lean::cnstr_get(x_31, 1);
lean::inc(x_34);
x_36 = lean::box(0);
x_37 = l_lean_expander_declaration_transform___closed__1;
x_38 = l_option_get__or__else___main___rarg(x_34, x_37);
lean::dec(x_34);
x_40 = lean::cnstr_get(x_2, 1);
lean::inc(x_40);
lean::dec(x_2);
x_43 = lean::cnstr_get(x_31, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_38, 0);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_38, 1);
lean::inc(x_47);
x_49 = l_lean_expander_declaration_transform___closed__2;
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_47);
x_51 = lean::cnstr_get(x_38, 2);
lean::inc(x_51);
lean::dec(x_38);
x_54 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_54, 0, x_45);
lean::cnstr_set(x_54, 1, x_50);
lean::cnstr_set(x_54, 2, x_51);
if (lean::is_scalar(x_17)) {
 x_55 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_55 = x_17;
}
lean::cnstr_set(x_55, 0, x_54);
x_56 = lean::cnstr_get(x_31, 2);
lean::inc(x_56);
x_58 = lean::cnstr_get(x_31, 3);
lean::inc(x_58);
x_60 = lean::cnstr_get(x_31, 4);
lean::inc(x_60);
lean::dec(x_31);
x_63 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_63, 0, x_43);
lean::cnstr_set(x_63, 1, x_55);
lean::cnstr_set(x_63, 2, x_56);
lean::cnstr_set(x_63, 3, x_58);
lean::cnstr_set(x_63, 4, x_60);
if (lean::is_scalar(x_30)) {
 x_64 = lean::alloc_cnstr(0, 7, 0);
} else {
 x_64 = x_30;
}
lean::cnstr_set(x_64, 0, x_36);
lean::cnstr_set(x_64, 1, x_18);
lean::cnstr_set(x_64, 2, x_20);
lean::cnstr_set(x_64, 3, x_22);
lean::cnstr_set(x_64, 4, x_24);
lean::cnstr_set(x_64, 5, x_26);
lean::cnstr_set(x_64, 6, x_28);
if (lean::is_scalar(x_10)) {
 x_65 = lean::alloc_cnstr(4, 1, 0);
} else {
 x_65 = x_10;
}
lean::cnstr_set(x_65, 0, x_64);
x_66 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_66, 0, x_63);
lean::cnstr_set(x_66, 1, x_65);
x_67 = lean::apply_1(x_40, x_66);
x_68 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_68, 0, x_67);
x_69 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_69, 0, x_68);
return x_69;
}
}
case 5:
{
obj* x_70; obj* x_72; obj* x_73; 
x_70 = lean::cnstr_get(x_6, 0);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_set(x_6, 0, lean::box(0));
 x_72 = x_6;
} else {
 lean::inc(x_70);
 lean::dec(x_6);
 x_72 = lean::box(0);
}
x_73 = lean::cnstr_get(x_70, 0);
lean::inc(x_73);
if (lean::obj_tag(x_73) == 0)
{
obj* x_79; 
lean::dec(x_5);
lean::dec(x_72);
lean::dec(x_70);
lean::dec(x_73);
x_79 = l_lean_expander_no__expansion___closed__1;
return x_79;
}
else
{
obj* x_81; obj* x_83; obj* x_85; obj* x_87; obj* x_89; obj* x_91; obj* x_93; obj* x_95; obj* x_96; obj* x_99; obj* x_101; obj* x_102; obj* x_104; obj* x_107; obj* x_109; obj* x_111; obj* x_113; obj* x_114; obj* x_115; obj* x_118; obj* x_119; obj* x_120; obj* x_122; obj* x_124; obj* x_127; obj* x_128; obj* x_129; obj* x_130; obj* x_131; obj* x_132; obj* x_133; obj* x_134; 
lean::dec(x_73);
x_81 = lean::cnstr_get(x_70, 1);
x_83 = lean::cnstr_get(x_70, 2);
x_85 = lean::cnstr_get(x_70, 3);
x_87 = lean::cnstr_get(x_70, 4);
x_89 = lean::cnstr_get(x_70, 5);
x_91 = lean::cnstr_get(x_70, 6);
x_93 = lean::cnstr_get(x_70, 7);
if (lean::is_exclusive(x_70)) {
 lean::cnstr_release(x_70, 0);
 x_95 = x_70;
} else {
 lean::inc(x_81);
 lean::inc(x_83);
 lean::inc(x_85);
 lean::inc(x_87);
 lean::inc(x_89);
 lean::inc(x_91);
 lean::inc(x_93);
 lean::dec(x_70);
 x_95 = lean::box(0);
}
x_96 = lean::cnstr_get(x_5, 0);
lean::inc(x_96);
lean::dec(x_5);
x_99 = lean::cnstr_get(x_96, 1);
lean::inc(x_99);
x_101 = l_lean_expander_declaration_transform___closed__1;
x_102 = l_option_get__or__else___main___rarg(x_99, x_101);
lean::dec(x_99);
x_104 = lean::cnstr_get(x_2, 1);
lean::inc(x_104);
lean::dec(x_2);
x_107 = lean::cnstr_get(x_96, 0);
lean::inc(x_107);
x_109 = lean::cnstr_get(x_102, 0);
lean::inc(x_109);
x_111 = lean::cnstr_get(x_102, 1);
lean::inc(x_111);
x_113 = l_lean_expander_declaration_transform___closed__2;
x_114 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_114, 0, x_113);
lean::cnstr_set(x_114, 1, x_111);
x_115 = lean::cnstr_get(x_102, 2);
lean::inc(x_115);
lean::dec(x_102);
x_118 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_118, 0, x_109);
lean::cnstr_set(x_118, 1, x_114);
lean::cnstr_set(x_118, 2, x_115);
x_119 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_119, 0, x_118);
x_120 = lean::cnstr_get(x_96, 2);
lean::inc(x_120);
x_122 = lean::cnstr_get(x_96, 3);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_96, 4);
lean::inc(x_124);
lean::dec(x_96);
x_127 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_127, 0, x_107);
lean::cnstr_set(x_127, 1, x_119);
lean::cnstr_set(x_127, 2, x_120);
lean::cnstr_set(x_127, 3, x_122);
lean::cnstr_set(x_127, 4, x_124);
x_128 = l_lean_expander_declaration_transform___closed__3;
if (lean::is_scalar(x_95)) {
 x_129 = lean::alloc_cnstr(0, 8, 0);
} else {
 x_129 = x_95;
}
lean::cnstr_set(x_129, 0, x_128);
lean::cnstr_set(x_129, 1, x_81);
lean::cnstr_set(x_129, 2, x_83);
lean::cnstr_set(x_129, 3, x_85);
lean::cnstr_set(x_129, 4, x_87);
lean::cnstr_set(x_129, 5, x_89);
lean::cnstr_set(x_129, 6, x_91);
lean::cnstr_set(x_129, 7, x_93);
if (lean::is_scalar(x_72)) {
 x_130 = lean::alloc_cnstr(5, 1, 0);
} else {
 x_130 = x_72;
}
lean::cnstr_set(x_130, 0, x_129);
x_131 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_131, 0, x_127);
lean::cnstr_set(x_131, 1, x_130);
x_132 = lean::apply_1(x_104, x_131);
x_133 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_133, 0, x_132);
x_134 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_134, 0, x_133);
return x_134;
}
}
default:
{
obj* x_137; 
lean::dec(x_6);
lean::dec(x_5);
x_137 = l_lean_expander_no__expansion___closed__1;
return x_137;
}
}
}
}
obj* l_lean_expander_declaration_transform___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expander_declaration_transform(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_list_map___main___at_lean_expander_intro__rule_transform___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_7, 0, x_2);
x_8 = l_list_map___main___at_lean_expander_intro__rule_transform___spec__1(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_lean_expander_intro__rule_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_8; 
x_2 = l_lean_parser_command_intro__rule_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::apply_1(x_3, x_0);
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
obj* x_10; obj* x_12; 
x_10 = lean::cnstr_get(x_6, 1);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_set(x_6, 1, lean::box(0));
 x_12 = x_6;
} else {
 lean::inc(x_10);
 lean::dec(x_6);
 x_12 = lean::box(0);
}
if (lean::obj_tag(x_10) == 0)
{
obj* x_16; 
lean::dec(x_12);
lean::dec(x_5);
lean::dec(x_8);
x_16 = l_lean_expander_no__expansion___closed__1;
return x_16;
}
else
{
obj* x_17; obj* x_20; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_32; obj* x_34; obj* x_36; obj* x_39; obj* x_40; obj* x_43; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; 
x_17 = lean::cnstr_get(x_8, 0);
lean::inc(x_17);
lean::dec(x_8);
x_20 = lean::cnstr_get(x_10, 0);
if (lean::is_exclusive(x_10)) {
 x_22 = x_10;
} else {
 lean::inc(x_20);
 lean::dec(x_10);
 x_22 = lean::box(0);
}
x_23 = lean::box(0);
x_24 = l_list_map___main___at_lean_expander_intro__rule_transform___spec__1(x_17);
x_25 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_25, 0, x_24);
if (lean::is_scalar(x_22)) {
 x_26 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_26 = x_22;
}
lean::cnstr_set(x_26, 0, x_25);
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_23);
lean::cnstr_set(x_27, 1, x_26);
x_28 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_28, 0, x_27);
x_29 = lean::cnstr_get(x_2, 1);
lean::inc(x_29);
lean::dec(x_2);
x_32 = lean::cnstr_get(x_5, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_5, 1);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_5, 2);
lean::inc(x_36);
lean::dec(x_5);
x_39 = l_lean_parser_term_pi_has__view;
x_40 = lean::cnstr_get(x_39, 1);
lean::inc(x_40);
lean::dec(x_39);
x_43 = lean::cnstr_get(x_20, 1);
lean::inc(x_43);
lean::dec(x_20);
x_46 = l_lean_expander_arrow_transform___closed__2;
x_47 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__3;
x_48 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_48, 0, x_46);
lean::cnstr_set(x_48, 1, x_28);
lean::cnstr_set(x_48, 2, x_47);
lean::cnstr_set(x_48, 3, x_43);
x_49 = lean::apply_1(x_40, x_48);
x_50 = l_lean_expander_mk__simple__binder___closed__1;
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_49);
x_52 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_52, 0, x_51);
x_53 = l_lean_expander_constant_transform___closed__1;
if (lean::is_scalar(x_12)) {
 x_54 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_54 = x_12;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_52);
x_55 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_55, 0, x_32);
lean::cnstr_set(x_55, 1, x_34);
lean::cnstr_set(x_55, 2, x_36);
lean::cnstr_set(x_55, 3, x_54);
x_56 = lean::apply_1(x_29, x_55);
x_57 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_57, 0, x_56);
x_58 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_58, 0, x_57);
return x_58;
}
}
else
{
obj* x_62; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_8);
x_62 = l_lean_expander_no__expansion___closed__1;
return x_62;
}
}
}
obj* l_lean_expander_intro__rule_transform___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expander_intro__rule_transform(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_lean_expander_variable_transform___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("variables");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* l_lean_expander_variable_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_6; obj* x_7; obj* x_8; obj* x_11; obj* x_14; 
x_2 = l_lean_parser_command_variable_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
lean::dec(x_2);
x_6 = lean::apply_1(x_3, x_0);
x_7 = l_lean_parser_command_variables_has__view;
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
lean::dec(x_7);
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
lean::dec(x_6);
x_14 = lean::box(0);
if (lean::obj_tag(x_11) == 0)
{
obj* x_15; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_15 = lean::cnstr_get(x_11, 0);
lean::inc(x_15);
lean::dec(x_11);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_15);
lean::cnstr_set(x_18, 1, x_14);
x_19 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_19, 0, x_18);
x_20 = l_lean_expander_variable_transform___closed__1;
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_19);
x_22 = lean::apply_1(x_8, x_21);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_22);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
return x_24;
}
else
{
obj* x_25; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
x_25 = lean::cnstr_get(x_11, 0);
lean::inc(x_25);
lean::dec(x_11);
x_28 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_28, 0, x_25);
x_29 = l_lean_expander_coe__binder__bracketed__binder___closed__1;
x_30 = l_lean_expander_coe__binder__bracketed__binder___closed__2;
x_31 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_31, 0, x_29);
lean::cnstr_set(x_31, 1, x_28);
lean::cnstr_set(x_31, 2, x_30);
x_32 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_32, 0, x_31);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_14);
x_34 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_34, 0, x_33);
x_35 = l_lean_expander_variable_transform___closed__1;
x_36 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_36, 0, x_35);
lean::cnstr_set(x_36, 1, x_34);
x_37 = lean::apply_1(x_8, x_36);
x_38 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_38, 0, x_37);
x_39 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_39, 0, x_38);
return x_39;
}
}
}
obj* l_lean_expander_variable_transform___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expander_variable_transform(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_lean_expander_binding__annotation__update() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("expander");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("binding_annotation_update");
x_6 = lean_name_mk_string(x_4, x_5);
return x_6;
}
}
obj* _init_l_lean_expander_binding__annotation__update_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::box(3);
x_3 = l_option_get__or__else___main___rarg(x_1, x_2);
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_0);
x_5 = l_lean_expander_binding__annotation__update;
x_6 = l_lean_parser_syntax_mk__node(x_5, x_4);
return x_6;
}
}
obj* l_lean_expander_binding__annotation__update_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_lean_expander_binding__annotation__update_has__view_x_27___lambda__1___closed__1;
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; 
x_2 = lean::cnstr_get(x_0, 0);
if (lean::is_exclusive(x_0)) {
 x_4 = x_0;
} else {
 lean::inc(x_2);
 lean::dec(x_0);
 x_4 = lean::box(0);
}
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_6, 0, x_2);
if (lean::is_scalar(x_4)) {
 x_7 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_7 = x_4;
}
lean::cnstr_set(x_7, 0, x_6);
x_8 = lean::box(3);
x_9 = l_option_get__or__else___main___rarg(x_7, x_8);
lean::dec(x_7);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_5);
x_12 = l_lean_expander_binding__annotation__update;
x_13 = l_lean_parser_syntax_mk__node(x_12, x_11);
return x_13;
}
}
}
obj* _init_l_lean_expander_binding__annotation__update_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_string__lit_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_binding__annotation__update_has__view_x_27___lambda__1), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_expander_binding__annotation__update_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_expander_binding__annotation__update_has__view_x_27;
return x_0;
}
}
obj* _init_l_lean_expander_binding__annotation__update_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_0 = lean::mk_string("dummy");
x_1 = l_string_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1___boxed), 8, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
x_9 = l_lean_parser_term__parser__m_monad;
x_10 = l_lean_parser_term__parser__m_monad__except;
x_11 = l_lean_parser_term__parser__m_lean_parser_monad__parsec;
x_12 = l_lean_parser_term__parser__m_alternative;
x_13 = l_lean_expander_binding__annotation__update;
x_14 = l_lean_expander_binding__annotation__update_has__view;
x_15 = l_lean_parser_combinators_node_view___rarg(x_9, x_10, x_11, x_12, x_13, x_8, x_14);
lean::dec(x_8);
return x_15;
}
}
obj* _init_l_lean_expander_binding__annotation__update_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::mk_string("dummy");
x_1 = l_string_trim(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1___boxed), 8, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_5);
lean::closure_set(x_6, 2, x_4);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* l_lean_expander_binding__annotation__update_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = l_lean_expander_binding__annotation__update;
x_6 = l_lean_expander_binding__annotation__update_parser___closed__1;
x_7 = l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_7;
}
}
obj* _init_l_list_mmap___main___at_lean_expander_variables_transform___spec__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_10; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_0 = lean::box(0);
x_1 = lean::mk_string(" : ");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
x_6 = l_lean_expander_binding__annotation__update_has__view;
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
lean::dec(x_6);
x_10 = lean::mk_string("dummy");
x_11 = l_string_trim(x_10);
lean::dec(x_10);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_0);
lean::cnstr_set(x_13, 1, x_11);
x_14 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_14, 0, x_13);
x_15 = lean::apply_1(x_7, x_14);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_5);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_17, 0, x_16);
return x_17;
}
}
obj* l_list_mmap___main___at_lean_expander_variables_transform___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_3; 
lean::dec(x_1);
x_3 = l_lean_expander_expand__bracketed__binder___main___closed__8;
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; 
x_4 = lean::cnstr_get(x_0, 0);
x_6 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_8 = x_0;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_0);
 x_8 = lean::box(0);
}
switch (lean::obj_tag(x_4)) {
case 0:
{
obj* x_11; obj* x_13; 
x_11 = lean::cnstr_get(x_4, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_11, 1);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_18; 
lean::dec(x_11);
lean::dec(x_13);
lean::inc(x_1);
x_18 = l_lean_expander_expand__bracketed__binder___main(x_4, x_1);
x_9 = x_18;
goto lbl_10;
}
else
{
obj* x_19; obj* x_21; obj* x_22; 
x_19 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 lean::cnstr_set(x_13, 0, lean::box(0));
 x_21 = x_13;
} else {
 lean::inc(x_19);
 lean::dec(x_13);
 x_21 = lean::box(0);
}
x_22 = lean::cnstr_get(x_19, 1);
lean::inc(x_22);
if (lean::obj_tag(x_22) == 0)
{
obj* x_24; 
x_24 = lean::cnstr_get(x_19, 2);
lean::inc(x_24);
if (lean::obj_tag(x_24) == 0)
{
obj* x_26; obj* x_27; obj* x_29; obj* x_31; obj* x_32; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_41; 
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 x_26 = x_4;
} else {
 lean::dec(x_4);
 x_26 = lean::box(0);
}
x_27 = lean::cnstr_get(x_11, 0);
x_29 = lean::cnstr_get(x_11, 2);
if (lean::is_exclusive(x_11)) {
 lean::cnstr_release(x_11, 1);
 x_31 = x_11;
} else {
 lean::inc(x_27);
 lean::inc(x_29);
 lean::dec(x_11);
 x_31 = lean::box(0);
}
x_32 = lean::cnstr_get(x_19, 0);
if (lean::is_exclusive(x_19)) {
 lean::cnstr_release(x_19, 1);
 lean::cnstr_release(x_19, 2);
 x_34 = x_19;
} else {
 lean::inc(x_32);
 lean::dec(x_19);
 x_34 = lean::box(0);
}
x_35 = l_list_mmap___main___at_lean_expander_variables_transform___spec__1___closed__1;
if (lean::is_scalar(x_34)) {
 x_36 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_36 = x_34;
}
lean::cnstr_set(x_36, 0, x_32);
lean::cnstr_set(x_36, 1, x_35);
lean::cnstr_set(x_36, 2, x_24);
if (lean::is_scalar(x_21)) {
 x_37 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_37 = x_21;
}
lean::cnstr_set(x_37, 0, x_36);
if (lean::is_scalar(x_31)) {
 x_38 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_38 = x_31;
}
lean::cnstr_set(x_38, 0, x_27);
lean::cnstr_set(x_38, 1, x_37);
lean::cnstr_set(x_38, 2, x_29);
if (lean::is_scalar(x_26)) {
 x_39 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_39 = x_26;
}
lean::cnstr_set(x_39, 0, x_38);
lean::inc(x_1);
x_41 = l_lean_expander_expand__bracketed__binder___main(x_39, x_1);
x_9 = x_41;
goto lbl_10;
}
else
{
obj* x_47; 
lean::dec(x_11);
lean::dec(x_24);
lean::dec(x_19);
lean::dec(x_21);
lean::inc(x_1);
x_47 = l_lean_expander_expand__bracketed__binder___main(x_4, x_1);
x_9 = x_47;
goto lbl_10;
}
}
else
{
obj* x_53; 
lean::dec(x_22);
lean::dec(x_11);
lean::dec(x_19);
lean::dec(x_21);
lean::inc(x_1);
x_53 = l_lean_expander_expand__bracketed__binder___main(x_4, x_1);
x_9 = x_53;
goto lbl_10;
}
}
}
default:
{
obj* x_55; 
lean::inc(x_1);
x_55 = l_lean_expander_expand__bracketed__binder___main(x_4, x_1);
x_9 = x_55;
goto lbl_10;
}
}
lbl_10:
{
if (lean::obj_tag(x_9) == 0)
{
obj* x_59; obj* x_61; obj* x_62; 
lean::dec(x_8);
lean::dec(x_6);
lean::dec(x_1);
x_59 = lean::cnstr_get(x_9, 0);
if (lean::is_exclusive(x_9)) {
 x_61 = x_9;
} else {
 lean::inc(x_59);
 lean::dec(x_9);
 x_61 = lean::box(0);
}
if (lean::is_scalar(x_61)) {
 x_62 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_62 = x_61;
}
lean::cnstr_set(x_62, 0, x_59);
return x_62;
}
else
{
obj* x_63; obj* x_66; 
x_63 = lean::cnstr_get(x_9, 0);
lean::inc(x_63);
lean::dec(x_9);
x_66 = l_list_mmap___main___at_lean_expander_variables_transform___spec__1(x_6, x_1);
if (lean::obj_tag(x_66) == 0)
{
obj* x_69; obj* x_71; obj* x_72; 
lean::dec(x_8);
lean::dec(x_63);
x_69 = lean::cnstr_get(x_66, 0);
if (lean::is_exclusive(x_66)) {
 x_71 = x_66;
} else {
 lean::inc(x_69);
 lean::dec(x_66);
 x_71 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_72 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_72 = x_71;
}
lean::cnstr_set(x_72, 0, x_69);
return x_72;
}
else
{
obj* x_73; obj* x_75; obj* x_76; obj* x_77; 
x_73 = lean::cnstr_get(x_66, 0);
if (lean::is_exclusive(x_66)) {
 x_75 = x_66;
} else {
 lean::inc(x_73);
 lean::dec(x_66);
 x_75 = lean::box(0);
}
if (lean::is_scalar(x_8)) {
 x_76 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_76 = x_8;
}
lean::cnstr_set(x_76, 0, x_63);
lean::cnstr_set(x_76, 1, x_73);
if (lean::is_scalar(x_75)) {
 x_77 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_77 = x_75;
}
lean::cnstr_set(x_77, 0, x_76);
return x_77;
}
}
}
}
}
}
obj* l_lean_expander_variables_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_6; 
x_2 = l_lean_parser_command_variables_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::apply_1(x_3, x_0);
x_6 = lean::cnstr_get(x_5, 1);
lean::inc(x_6);
lean::dec(x_5);
if (lean::obj_tag(x_6) == 0)
{
obj* x_9; obj* x_11; obj* x_12; 
x_9 = lean::cnstr_get(x_6, 0);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_set(x_6, 0, lean::box(0));
 x_11 = x_6;
} else {
 lean::inc(x_9);
 lean::dec(x_6);
 x_11 = lean::box(0);
}
x_12 = l_list_mmap___main___at_lean_expander_variables_transform___spec__1(x_9, x_1);
if (lean::obj_tag(x_12) == 0)
{
obj* x_14; obj* x_16; obj* x_17; 
lean::dec(x_11);
x_14 = lean::cnstr_get(x_12, 0);
if (lean::is_exclusive(x_12)) {
 x_16 = x_12;
} else {
 lean::inc(x_14);
 lean::dec(x_12);
 x_16 = lean::box(0);
}
if (lean::is_scalar(x_16)) {
 x_17 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_17 = x_16;
}
lean::cnstr_set(x_17, 0, x_14);
return x_17;
}
else
{
obj* x_18; obj* x_20; obj* x_21; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_18 = lean::cnstr_get(x_12, 0);
if (lean::is_exclusive(x_12)) {
 x_20 = x_12;
} else {
 lean::inc(x_18);
 lean::dec(x_12);
 x_20 = lean::box(0);
}
x_21 = lean::cnstr_get(x_2, 1);
lean::inc(x_21);
lean::dec(x_2);
x_24 = l_list_join___main___rarg(x_18);
if (lean::is_scalar(x_11)) {
 x_25 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_25 = x_11;
 lean::cnstr_set_tag(x_11, 1);
}
lean::cnstr_set(x_25, 0, x_24);
x_26 = l_lean_expander_variable_transform___closed__1;
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_25);
x_28 = lean::apply_1(x_21, x_27);
x_29 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_29, 0, x_28);
if (lean::is_scalar(x_20)) {
 x_30 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_30 = x_20;
}
lean::cnstr_set(x_30, 0, x_29);
return x_30;
}
}
else
{
obj* x_33; 
lean::dec(x_6);
lean::dec(x_1);
x_33 = l_lean_expander_no__expansion___closed__1;
return x_33;
}
}
}
obj* l_lean_expander_level_leading_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_6; 
x_2 = l_lean_parser_level_leading_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
lean::dec(x_2);
x_6 = lean::apply_1(x_3, x_0);
switch (lean::obj_tag(x_6)) {
case 3:
{
obj* x_7; obj* x_10; obj* x_13; obj* x_14; 
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
lean::dec(x_6);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
x_13 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_13, 0, x_10);
x_14 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_14, 0, x_13);
return x_14;
}
default:
{
obj* x_16; 
lean::dec(x_6);
x_16 = l_lean_expander_no__expansion___closed__1;
return x_16;
}
}
}
}
obj* l_lean_expander_level_leading_transform___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expander_level_leading_transform(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_lean_expander_subtype_transform___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_string("subtype");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = l_lean_expander_glob__id(x_2);
return x_3;
}
}
obj* l_lean_expander_subtype_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_6; obj* x_7; obj* x_8; obj* x_11; obj* x_13; obj* x_15; uint8 x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_2 = l_lean_parser_term_subtype_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
lean::dec(x_2);
x_6 = lean::apply_1(x_3, x_0);
x_7 = l_lean_parser_term_lambda_has__view;
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
lean::dec(x_7);
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_6, 2);
lean::inc(x_13);
x_15 = l_lean_expander_get__opt__type___main(x_13);
lean::dec(x_13);
x_17 = 0;
x_18 = l_lean_expander_mk__simple__binder(x_11, x_17, x_15);
x_19 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_19, 0, x_18);
x_20 = lean::cnstr_get(x_6, 4);
lean::inc(x_20);
lean::dec(x_6);
x_23 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__2;
x_24 = l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__3;
x_25 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_25, 0, x_23);
lean::cnstr_set(x_25, 1, x_19);
lean::cnstr_set(x_25, 2, x_24);
lean::cnstr_set(x_25, 3, x_20);
x_26 = lean::apply_1(x_8, x_25);
x_27 = lean::box(0);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_26);
lean::cnstr_set(x_28, 1, x_27);
x_29 = l_lean_expander_subtype_transform___closed__1;
x_30 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_29, x_28);
x_31 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_31, 0, x_30);
x_32 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_32, 0, x_31);
return x_32;
}
}
obj* l_lean_expander_subtype_transform___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expander_subtype_transform(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_list_map___main___at_lean_expander_universes_transform___spec__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("universe");
x_2 = l_string_trim(x_1);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* l_list_map___main___at_lean_expander_universes_transform___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_parser_command_universe_has__view;
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
lean::dec(x_7);
x_11 = l_list_map___main___at_lean_expander_universes_transform___spec__1___closed__1;
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_2);
x_13 = lean::apply_1(x_8, x_12);
x_14 = l_list_map___main___at_lean_expander_universes_transform___spec__1(x_4);
if (lean::is_scalar(x_6)) {
 x_15 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_15 = x_6;
}
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
return x_15;
}
}
}
obj* l_lean_expander_universes_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_6; obj* x_7; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_2 = l_lean_parser_command_universes_has__view;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
lean::dec(x_2);
x_6 = lean::apply_1(x_3, x_0);
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
lean::dec(x_6);
x_10 = l_list_map___main___at_lean_expander_universes_transform___spec__1(x_7);
x_11 = l_lean_parser_no__kind;
x_12 = l_lean_parser_syntax_mk__node(x_11, x_10);
x_13 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_13, 0, x_12);
x_14 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_14, 0, x_13);
return x_14;
}
}
obj* l_lean_expander_universes_transform___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expander_universes_transform(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_lean_expander_sorry_transform___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_0 = lean::box(0);
x_1 = lean::mk_string("sorry_ax");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = l_lean_expander_glob__id(x_2);
x_4 = l_lean_parser_term_hole_has__view;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
lean::dec(x_4);
x_8 = lean::box(0);
x_9 = lean::mk_string("_");
x_10 = l_string_trim(x_9);
lean::dec(x_9);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_8);
lean::cnstr_set(x_12, 1, x_10);
x_13 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_13, 0, x_12);
x_14 = lean::apply_1(x_5, x_13);
x_15 = lean::mk_string("bool");
x_16 = lean_name_mk_string(x_0, x_15);
x_17 = lean::mk_string("ff");
x_18 = lean_name_mk_string(x_16, x_17);
x_19 = l_lean_expander_glob__id(x_18);
x_20 = lean::box(0);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_19);
lean::cnstr_set(x_21, 1, x_20);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_14);
lean::cnstr_set(x_22, 1, x_21);
x_23 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_3, x_22);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
x_25 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_25, 0, x_24);
return x_25;
}
}
obj* l_lean_expander_sorry_transform(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expander_sorry_transform___closed__1;
return x_2;
}
}
obj* l_lean_expander_sorry_transform___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expander_sorry_transform(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__4___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
uint8 x_3; obj* x_4; obj* x_5; 
x_3 = 0;
x_4 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
lean::cnstr_set_scalar(x_4, sizeof(void*)*4, x_3);
x_5 = x_4;
return x_5;
}
else
{
uint8 x_6; 
x_6 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*4);
if (x_6 == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; uint8 x_16; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
x_11 = lean::cnstr_get(x_0, 2);
x_13 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_15 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_0);
 x_15 = lean::box(0);
}
x_16 = l_lean_name_quick__lt(x_1, x_9);
if (x_16 == 0)
{
uint8 x_17; 
x_17 = l_lean_name_quick__lt(x_9, x_1);
if (x_17 == 0)
{
obj* x_20; obj* x_21; 
lean::dec(x_9);
lean::dec(x_11);
if (lean::is_scalar(x_15)) {
 x_20 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_20 = x_15;
}
lean::cnstr_set(x_20, 0, x_7);
lean::cnstr_set(x_20, 1, x_1);
lean::cnstr_set(x_20, 2, x_2);
lean::cnstr_set(x_20, 3, x_13);
lean::cnstr_set_scalar(x_20, sizeof(void*)*4, x_6);
x_21 = x_20;
return x_21;
}
else
{
obj* x_22; obj* x_23; obj* x_24; 
x_22 = l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__4___rarg(x_13, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_23 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_23 = x_15;
}
lean::cnstr_set(x_23, 0, x_7);
lean::cnstr_set(x_23, 1, x_9);
lean::cnstr_set(x_23, 2, x_11);
lean::cnstr_set(x_23, 3, x_22);
lean::cnstr_set_scalar(x_23, sizeof(void*)*4, x_6);
x_24 = x_23;
return x_24;
}
}
else
{
obj* x_25; obj* x_26; obj* x_27; 
x_25 = l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__4___rarg(x_7, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_26 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_26 = x_15;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_9);
lean::cnstr_set(x_26, 2, x_11);
lean::cnstr_set(x_26, 3, x_13);
lean::cnstr_set_scalar(x_26, sizeof(void*)*4, x_6);
x_27 = x_26;
return x_27;
}
}
else
{
obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; uint8 x_37; 
x_28 = lean::cnstr_get(x_0, 0);
x_30 = lean::cnstr_get(x_0, 1);
x_32 = lean::cnstr_get(x_0, 2);
x_34 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_36 = x_0;
} else {
 lean::inc(x_28);
 lean::inc(x_30);
 lean::inc(x_32);
 lean::inc(x_34);
 lean::dec(x_0);
 x_36 = lean::box(0);
}
x_37 = l_lean_name_quick__lt(x_1, x_30);
if (x_37 == 0)
{
uint8 x_38; 
x_38 = l_lean_name_quick__lt(x_30, x_1);
if (x_38 == 0)
{
obj* x_41; obj* x_42; 
lean::dec(x_32);
lean::dec(x_30);
if (lean::is_scalar(x_36)) {
 x_41 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_41 = x_36;
}
lean::cnstr_set(x_41, 0, x_28);
lean::cnstr_set(x_41, 1, x_1);
lean::cnstr_set(x_41, 2, x_2);
lean::cnstr_set(x_41, 3, x_34);
lean::cnstr_set_scalar(x_41, sizeof(void*)*4, x_6);
x_42 = x_41;
return x_42;
}
else
{
uint8 x_43; 
x_43 = l_rbnode_is__red___main___rarg(x_34);
if (x_43 == 0)
{
obj* x_44; obj* x_45; obj* x_46; 
x_44 = l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__4___rarg(x_34, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_45 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_45 = x_36;
}
lean::cnstr_set(x_45, 0, x_28);
lean::cnstr_set(x_45, 1, x_30);
lean::cnstr_set(x_45, 2, x_32);
lean::cnstr_set(x_45, 3, x_44);
lean::cnstr_set_scalar(x_45, sizeof(void*)*4, x_6);
x_46 = x_45;
return x_46;
}
else
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_47 = lean::box(0);
if (lean::is_scalar(x_36)) {
 x_48 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_48 = x_36;
}
lean::cnstr_set(x_48, 0, x_28);
lean::cnstr_set(x_48, 1, x_30);
lean::cnstr_set(x_48, 2, x_32);
lean::cnstr_set(x_48, 3, x_47);
lean::cnstr_set_scalar(x_48, sizeof(void*)*4, x_6);
x_49 = x_48;
x_50 = l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__4___rarg(x_34, x_1, x_2);
x_51 = l_rbnode_balance2___main___rarg(x_49, x_50);
return x_51;
}
}
}
else
{
uint8 x_52; 
x_52 = l_rbnode_is__red___main___rarg(x_28);
if (x_52 == 0)
{
obj* x_53; obj* x_54; obj* x_55; 
x_53 = l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__4___rarg(x_28, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_54 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_54 = x_36;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_30);
lean::cnstr_set(x_54, 2, x_32);
lean::cnstr_set(x_54, 3, x_34);
lean::cnstr_set_scalar(x_54, sizeof(void*)*4, x_6);
x_55 = x_54;
return x_55;
}
else
{
obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_56 = lean::box(0);
if (lean::is_scalar(x_36)) {
 x_57 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_57 = x_36;
}
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_30);
lean::cnstr_set(x_57, 2, x_32);
lean::cnstr_set(x_57, 3, x_34);
lean::cnstr_set_scalar(x_57, sizeof(void*)*4, x_6);
x_58 = x_57;
x_59 = l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__4___rarg(x_28, x_1, x_2);
x_60 = l_rbnode_balance1___main___rarg(x_58, x_59);
return x_60;
}
}
}
}
}
}
obj* l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__4(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__4___rarg), 3, 0);
return x_1;
}
}
obj* l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__5___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
uint8 x_3; obj* x_4; obj* x_5; 
x_3 = 0;
x_4 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
lean::cnstr_set_scalar(x_4, sizeof(void*)*4, x_3);
x_5 = x_4;
return x_5;
}
else
{
uint8 x_6; 
x_6 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*4);
if (x_6 == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; uint8 x_16; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
x_11 = lean::cnstr_get(x_0, 2);
x_13 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_15 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_0);
 x_15 = lean::box(0);
}
x_16 = l_lean_name_quick__lt(x_1, x_9);
if (x_16 == 0)
{
uint8 x_17; 
x_17 = l_lean_name_quick__lt(x_9, x_1);
if (x_17 == 0)
{
obj* x_20; obj* x_21; 
lean::dec(x_9);
lean::dec(x_11);
if (lean::is_scalar(x_15)) {
 x_20 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_20 = x_15;
}
lean::cnstr_set(x_20, 0, x_7);
lean::cnstr_set(x_20, 1, x_1);
lean::cnstr_set(x_20, 2, x_2);
lean::cnstr_set(x_20, 3, x_13);
lean::cnstr_set_scalar(x_20, sizeof(void*)*4, x_6);
x_21 = x_20;
return x_21;
}
else
{
obj* x_22; obj* x_23; obj* x_24; 
x_22 = l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__5___rarg(x_13, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_23 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_23 = x_15;
}
lean::cnstr_set(x_23, 0, x_7);
lean::cnstr_set(x_23, 1, x_9);
lean::cnstr_set(x_23, 2, x_11);
lean::cnstr_set(x_23, 3, x_22);
lean::cnstr_set_scalar(x_23, sizeof(void*)*4, x_6);
x_24 = x_23;
return x_24;
}
}
else
{
obj* x_25; obj* x_26; obj* x_27; 
x_25 = l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__5___rarg(x_7, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_26 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_26 = x_15;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_9);
lean::cnstr_set(x_26, 2, x_11);
lean::cnstr_set(x_26, 3, x_13);
lean::cnstr_set_scalar(x_26, sizeof(void*)*4, x_6);
x_27 = x_26;
return x_27;
}
}
else
{
obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; uint8 x_37; 
x_28 = lean::cnstr_get(x_0, 0);
x_30 = lean::cnstr_get(x_0, 1);
x_32 = lean::cnstr_get(x_0, 2);
x_34 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_36 = x_0;
} else {
 lean::inc(x_28);
 lean::inc(x_30);
 lean::inc(x_32);
 lean::inc(x_34);
 lean::dec(x_0);
 x_36 = lean::box(0);
}
x_37 = l_lean_name_quick__lt(x_1, x_30);
if (x_37 == 0)
{
uint8 x_38; 
x_38 = l_lean_name_quick__lt(x_30, x_1);
if (x_38 == 0)
{
obj* x_41; obj* x_42; 
lean::dec(x_32);
lean::dec(x_30);
if (lean::is_scalar(x_36)) {
 x_41 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_41 = x_36;
}
lean::cnstr_set(x_41, 0, x_28);
lean::cnstr_set(x_41, 1, x_1);
lean::cnstr_set(x_41, 2, x_2);
lean::cnstr_set(x_41, 3, x_34);
lean::cnstr_set_scalar(x_41, sizeof(void*)*4, x_6);
x_42 = x_41;
return x_42;
}
else
{
uint8 x_43; 
x_43 = l_rbnode_is__red___main___rarg(x_34);
if (x_43 == 0)
{
obj* x_44; obj* x_45; obj* x_46; 
x_44 = l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__5___rarg(x_34, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_45 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_45 = x_36;
}
lean::cnstr_set(x_45, 0, x_28);
lean::cnstr_set(x_45, 1, x_30);
lean::cnstr_set(x_45, 2, x_32);
lean::cnstr_set(x_45, 3, x_44);
lean::cnstr_set_scalar(x_45, sizeof(void*)*4, x_6);
x_46 = x_45;
return x_46;
}
else
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_47 = lean::box(0);
if (lean::is_scalar(x_36)) {
 x_48 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_48 = x_36;
}
lean::cnstr_set(x_48, 0, x_28);
lean::cnstr_set(x_48, 1, x_30);
lean::cnstr_set(x_48, 2, x_32);
lean::cnstr_set(x_48, 3, x_47);
lean::cnstr_set_scalar(x_48, sizeof(void*)*4, x_6);
x_49 = x_48;
x_50 = l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__5___rarg(x_34, x_1, x_2);
x_51 = l_rbnode_balance2___main___rarg(x_49, x_50);
return x_51;
}
}
}
else
{
uint8 x_52; 
x_52 = l_rbnode_is__red___main___rarg(x_28);
if (x_52 == 0)
{
obj* x_53; obj* x_54; obj* x_55; 
x_53 = l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__5___rarg(x_28, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_54 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_54 = x_36;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_30);
lean::cnstr_set(x_54, 2, x_32);
lean::cnstr_set(x_54, 3, x_34);
lean::cnstr_set_scalar(x_54, sizeof(void*)*4, x_6);
x_55 = x_54;
return x_55;
}
else
{
obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_56 = lean::box(0);
if (lean::is_scalar(x_36)) {
 x_57 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_57 = x_36;
}
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_30);
lean::cnstr_set(x_57, 2, x_32);
lean::cnstr_set(x_57, 3, x_34);
lean::cnstr_set_scalar(x_57, sizeof(void*)*4, x_6);
x_58 = x_57;
x_59 = l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__5___rarg(x_28, x_1, x_2);
x_60 = l_rbnode_balance1___main___rarg(x_58, x_59);
return x_60;
}
}
}
}
}
}
obj* l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__5(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__5___rarg), 3, 0);
return x_1;
}
}
obj* l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = l_rbnode_is__red___main___rarg(x_0);
if (x_3 == 0)
{
obj* x_4; 
x_4 = l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__4___rarg(x_0, x_1, x_2);
return x_4;
}
else
{
obj* x_5; obj* x_6; 
x_5 = l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__5___rarg(x_0, x_1, x_2);
x_6 = l_rbnode_set__black___main___rarg(x_5);
return x_6;
}
}
}
obj* l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3___rarg), 3, 0);
return x_1;
}
}
obj* l_rbmap_insert___main___at_lean_expander_builtin__transformers___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3___rarg(x_0, x_1, x_2);
return x_3;
}
}
obj* l_rbmap_insert___main___at_lean_expander_builtin__transformers___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_insert___main___at_lean_expander_builtin__transformers___spec__2___rarg), 3, 0);
return x_2;
}
}
obj* l_list_foldl___main___at_lean_expander_builtin__transformers___spec__6(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
return x_2;
}
else
{
obj* x_4; obj* x_6; obj* x_9; obj* x_11; obj* x_14; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_4, 1);
lean::inc(x_11);
lean::dec(x_4);
x_14 = l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3___rarg(x_2, x_9, x_11);
x_1 = x_0;
x_2 = x_14;
x_3 = x_6;
goto _start;
}
}
}
obj* _init_l_rbmap_from__list___at_lean_expander_builtin__transformers___spec__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; 
x_0 = l_lean_parser_command_mixfix;
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_mixfix_transform), 2, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = l_lean_parser_command_reserve__mixfix;
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_reserve__mixfix_transform), 2, 0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_4);
x_6 = l_lean_parser_term_bracketed__binders;
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_bracketed__binders_transform), 2, 0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
x_9 = l_lean_parser_term_lambda;
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_lambda_transform), 2, 0);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
x_12 = l_lean_parser_term_pi;
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_pi_transform), 2, 0);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
x_15 = l_lean_parser_term_arrow;
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_arrow_transform___boxed), 2, 0);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
x_18 = l_lean_parser_term_paren;
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_paren_transform___boxed), 2, 0);
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_18);
lean::cnstr_set(x_20, 1, x_19);
x_21 = l_lean_parser_term_assume;
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_assume_transform___boxed), 2, 0);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_22);
x_24 = l_lean_parser_term_if;
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_if_transform___boxed), 2, 0);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_24);
lean::cnstr_set(x_26, 1, x_25);
x_27 = l_lean_parser_term_let;
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_let_transform___boxed), 2, 0);
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_27);
lean::cnstr_set(x_29, 1, x_28);
x_30 = l_lean_parser_command_constant;
x_31 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_constant_transform___boxed), 2, 0);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_30);
lean::cnstr_set(x_32, 1, x_31);
x_33 = l_lean_parser_command_declaration;
x_34 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_declaration_transform___boxed), 2, 0);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_33);
lean::cnstr_set(x_35, 1, x_34);
x_36 = l_lean_parser_command_intro__rule;
x_37 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_intro__rule_transform___boxed), 2, 0);
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_36);
lean::cnstr_set(x_38, 1, x_37);
x_39 = l_lean_parser_command_variable;
x_40 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_variable_transform___boxed), 2, 0);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_39);
lean::cnstr_set(x_41, 1, x_40);
x_42 = l_lean_parser_command_variables;
x_43 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_variables_transform), 2, 0);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_42);
lean::cnstr_set(x_44, 1, x_43);
x_45 = l_lean_parser_level_leading;
x_46 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_level_leading_transform___boxed), 2, 0);
x_47 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_47, 0, x_45);
lean::cnstr_set(x_47, 1, x_46);
x_48 = l_lean_parser_term_subtype;
x_49 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_subtype_transform___boxed), 2, 0);
x_50 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_50, 0, x_48);
lean::cnstr_set(x_50, 1, x_49);
x_51 = l_lean_parser_command_universes;
x_52 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_universes_transform___boxed), 2, 0);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_51);
lean::cnstr_set(x_53, 1, x_52);
x_54 = l_lean_parser_term_sorry;
x_55 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_sorry_transform___boxed), 2, 0);
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_54);
lean::cnstr_set(x_56, 1, x_55);
x_57 = lean::box(0);
x_58 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_58, 0, x_56);
lean::cnstr_set(x_58, 1, x_57);
x_59 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_59, 0, x_53);
lean::cnstr_set(x_59, 1, x_58);
x_60 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_60, 0, x_50);
lean::cnstr_set(x_60, 1, x_59);
x_61 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_61, 0, x_47);
lean::cnstr_set(x_61, 1, x_60);
x_62 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_62, 0, x_44);
lean::cnstr_set(x_62, 1, x_61);
x_63 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_63, 0, x_41);
lean::cnstr_set(x_63, 1, x_62);
x_64 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_64, 0, x_38);
lean::cnstr_set(x_64, 1, x_63);
x_65 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_65, 0, x_35);
lean::cnstr_set(x_65, 1, x_64);
x_66 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_66, 0, x_32);
lean::cnstr_set(x_66, 1, x_65);
x_67 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_67, 0, x_29);
lean::cnstr_set(x_67, 1, x_66);
x_68 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_68, 0, x_26);
lean::cnstr_set(x_68, 1, x_67);
x_69 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_69, 0, x_23);
lean::cnstr_set(x_69, 1, x_68);
x_70 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_70, 0, x_20);
lean::cnstr_set(x_70, 1, x_69);
x_71 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_71, 0, x_17);
lean::cnstr_set(x_71, 1, x_70);
x_72 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_72, 0, x_14);
lean::cnstr_set(x_72, 1, x_71);
x_73 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_73, 0, x_11);
lean::cnstr_set(x_73, 1, x_72);
x_74 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_74, 0, x_8);
lean::cnstr_set(x_74, 1, x_73);
x_75 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_75, 0, x_5);
lean::cnstr_set(x_75, 1, x_74);
x_76 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_76, 0, x_2);
lean::cnstr_set(x_76, 1, x_75);
x_77 = lean::box(0);
x_78 = lean::box(0);
x_79 = l_list_foldl___main___at_lean_expander_builtin__transformers___spec__6(x_77, lean::box(0), x_78, x_76);
return x_79;
}
}
obj* _init_l_lean_expander_builtin__transformers() {
_start:
{
obj* x_0; 
x_0 = l_rbmap_from__list___at_lean_expander_builtin__transformers___spec__1;
return x_0;
}
}
obj* l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__4___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__4(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__5___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_rbnode_ins___main___at_lean_expander_builtin__transformers___spec__5(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_rbmap_insert___main___at_lean_expander_builtin__transformers___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbmap_insert___main___at_lean_expander_builtin__transformers___spec__2(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_list_foldl___main___at_lean_expander_builtin__transformers___spec__6___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_list_foldl___main___at_lean_expander_builtin__transformers___spec__6(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_1);
return x_4;
}
}
obj* l_lean_expander_expander__config_has__lift(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
return x_1;
}
}
obj* l_lean_expander_expander__config_has__lift___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_expander_expander__config_has__lift(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_expander_expander__state_new() {
_start:
{
obj* x_0; 
x_0 = lean::mk_nat_obj(0u);
return x_0;
}
}
obj* l_lean_expander_mk__scope(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::mk_nat_obj(1u);
x_3 = lean::nat_add(x_0, x_2);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* l_lean_expander_mk__scope___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_expander_mk__scope(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_lean_expander_error___at___private_init_lean_expander_2__expand__core___main___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_9; obj* x_12; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_4, 2);
lean::inc(x_9);
lean::dec(x_4);
x_12 = lean::box(0);
if (lean::obj_tag(x_0) == 0)
{
obj* x_13; obj* x_14; uint8 x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_13 = l_lean_expander_error___rarg___lambda__1___closed__1;
x_14 = l_lean_file__map_to__position(x_9, x_13);
x_15 = 2;
x_16 = l_string_iterator_extract___main___closed__1;
x_17 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_17, 0, x_7);
lean::cnstr_set(x_17, 1, x_14);
lean::cnstr_set(x_17, 2, x_12);
lean::cnstr_set(x_17, 3, x_16);
lean::cnstr_set(x_17, 4, x_1);
lean::cnstr_set_scalar(x_17, sizeof(void*)*5, x_15);
x_18 = x_17;
x_19 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_19, 0, x_18);
return x_19;
}
else
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_25; uint8 x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_20 = lean::cnstr_get(x_0, 0);
x_21 = l_lean_parser_syntax_get__pos(x_20);
x_22 = lean::mk_nat_obj(0u);
x_23 = l_option_get__or__else___main___rarg(x_21, x_22);
lean::dec(x_21);
x_25 = l_lean_file__map_to__position(x_9, x_23);
x_26 = 2;
x_27 = l_string_iterator_extract___main___closed__1;
x_28 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_28, 0, x_7);
lean::cnstr_set(x_28, 1, x_25);
lean::cnstr_set(x_28, 2, x_12);
lean::cnstr_set(x_28, 3, x_27);
lean::cnstr_set(x_28, 4, x_1);
lean::cnstr_set_scalar(x_28, sizeof(void*)*5, x_26);
x_29 = x_28;
x_30 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_30, 0, x_29);
return x_30;
}
}
}
obj* l_lean_expander_error___at___private_init_lean_expander_2__expand__core___main___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at___private_init_lean_expander_2__expand__core___main___spec__1___rarg___boxed), 4, 0);
return x_1;
}
}
obj* l_rbmap_find___main___at___private_init_lean_expander_2__expand__core___main___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::box(0);
x_3 = l_rbnode_find___main___at_lean_name__map_contains___spec__2(x_2, lean::box(0), lean::box(0), x_0, x_1);
return x_3;
}
}
obj* l_list_mmap___main___at___private_init_lean_expander_2__expand__core___main___spec__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_3);
lean::dec(x_0);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_2);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_11; obj* x_13; obj* x_16; 
x_9 = lean::cnstr_get(x_1, 0);
x_11 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_13 = x_1;
} else {
 lean::inc(x_9);
 lean::inc(x_11);
 lean::dec(x_1);
 x_13 = lean::box(0);
}
lean::inc(x_3);
lean::inc(x_0);
x_16 = l___private_init_lean_expander_2__expand__core___main(x_0, x_9, x_2, x_3);
if (lean::obj_tag(x_16) == 0)
{
obj* x_21; obj* x_23; obj* x_24; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
x_21 = lean::cnstr_get(x_16, 0);
if (lean::is_exclusive(x_16)) {
 x_23 = x_16;
} else {
 lean::inc(x_21);
 lean::dec(x_16);
 x_23 = lean::box(0);
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_21);
return x_24;
}
else
{
obj* x_25; obj* x_28; obj* x_30; obj* x_33; 
x_25 = lean::cnstr_get(x_16, 0);
lean::inc(x_25);
lean::dec(x_16);
x_28 = lean::cnstr_get(x_25, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_25, 1);
lean::inc(x_30);
lean::dec(x_25);
x_33 = l_list_mmap___main___at___private_init_lean_expander_2__expand__core___main___spec__3(x_0, x_11, x_30, x_3);
if (lean::obj_tag(x_33) == 0)
{
obj* x_36; obj* x_38; obj* x_39; 
lean::dec(x_13);
lean::dec(x_28);
x_36 = lean::cnstr_get(x_33, 0);
if (lean::is_exclusive(x_33)) {
 x_38 = x_33;
} else {
 lean::inc(x_36);
 lean::dec(x_33);
 x_38 = lean::box(0);
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_36);
return x_39;
}
else
{
obj* x_40; obj* x_42; obj* x_43; obj* x_45; obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
x_40 = lean::cnstr_get(x_33, 0);
if (lean::is_exclusive(x_33)) {
 x_42 = x_33;
} else {
 lean::inc(x_40);
 lean::dec(x_33);
 x_42 = lean::box(0);
}
x_43 = lean::cnstr_get(x_40, 0);
x_45 = lean::cnstr_get(x_40, 1);
if (lean::is_exclusive(x_40)) {
 x_47 = x_40;
} else {
 lean::inc(x_43);
 lean::inc(x_45);
 lean::dec(x_40);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_13)) {
 x_48 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_48 = x_13;
}
lean::cnstr_set(x_48, 0, x_28);
lean::cnstr_set(x_48, 1, x_43);
if (lean::is_scalar(x_47)) {
 x_49 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_49 = x_47;
}
lean::cnstr_set(x_49, 0, x_48);
lean::cnstr_set(x_49, 1, x_45);
if (lean::is_scalar(x_42)) {
 x_50 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_50 = x_42;
}
lean::cnstr_set(x_50, 0, x_49);
return x_50;
}
}
}
}
}
obj* l_list_map___main___at___private_init_lean_expander_2__expand__core___main___spec__4(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_4 = lean::cnstr_get(x_1, 0);
x_6 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 x_8 = x_1;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
x_9 = lean::box(0);
lean::inc(x_0);
if (lean::is_scalar(x_8)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_8;
}
lean::cnstr_set(x_11, 0, x_0);
lean::cnstr_set(x_11, 1, x_9);
x_12 = l_lean_parser_syntax_flip__scopes___main(x_11, x_4);
x_13 = l_list_map___main___at___private_init_lean_expander_2__expand__core___main___spec__4(x_0, x_6);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
return x_14;
}
}
}
obj* l_list_mmap___main___at___private_init_lean_expander_2__expand__core___main___spec__5(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_3);
lean::dec(x_0);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_2);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_11; obj* x_13; obj* x_16; 
x_9 = lean::cnstr_get(x_1, 0);
x_11 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_13 = x_1;
} else {
 lean::inc(x_9);
 lean::inc(x_11);
 lean::dec(x_1);
 x_13 = lean::box(0);
}
lean::inc(x_3);
lean::inc(x_0);
x_16 = l___private_init_lean_expander_2__expand__core___main(x_0, x_9, x_2, x_3);
if (lean::obj_tag(x_16) == 0)
{
obj* x_21; obj* x_23; obj* x_24; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
x_21 = lean::cnstr_get(x_16, 0);
if (lean::is_exclusive(x_16)) {
 x_23 = x_16;
} else {
 lean::inc(x_21);
 lean::dec(x_16);
 x_23 = lean::box(0);
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_21);
return x_24;
}
else
{
obj* x_25; obj* x_28; obj* x_30; obj* x_33; 
x_25 = lean::cnstr_get(x_16, 0);
lean::inc(x_25);
lean::dec(x_16);
x_28 = lean::cnstr_get(x_25, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_25, 1);
lean::inc(x_30);
lean::dec(x_25);
x_33 = l_list_mmap___main___at___private_init_lean_expander_2__expand__core___main___spec__5(x_0, x_11, x_30, x_3);
if (lean::obj_tag(x_33) == 0)
{
obj* x_36; obj* x_38; obj* x_39; 
lean::dec(x_13);
lean::dec(x_28);
x_36 = lean::cnstr_get(x_33, 0);
if (lean::is_exclusive(x_33)) {
 x_38 = x_33;
} else {
 lean::inc(x_36);
 lean::dec(x_33);
 x_38 = lean::box(0);
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_36);
return x_39;
}
else
{
obj* x_40; obj* x_42; obj* x_43; obj* x_45; obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
x_40 = lean::cnstr_get(x_33, 0);
if (lean::is_exclusive(x_33)) {
 x_42 = x_33;
} else {
 lean::inc(x_40);
 lean::dec(x_33);
 x_42 = lean::box(0);
}
x_43 = lean::cnstr_get(x_40, 0);
x_45 = lean::cnstr_get(x_40, 1);
if (lean::is_exclusive(x_40)) {
 x_47 = x_40;
} else {
 lean::inc(x_43);
 lean::inc(x_45);
 lean::dec(x_40);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_13)) {
 x_48 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_48 = x_13;
}
lean::cnstr_set(x_48, 0, x_28);
lean::cnstr_set(x_48, 1, x_43);
if (lean::is_scalar(x_47)) {
 x_49 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_49 = x_47;
}
lean::cnstr_set(x_49, 0, x_48);
lean::cnstr_set(x_49, 1, x_45);
if (lean::is_scalar(x_42)) {
 x_50 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_50 = x_42;
}
lean::cnstr_set(x_50, 0, x_49);
return x_50;
}
}
}
}
}
obj* _init_l___private_init_lean_expander_2__expand__core___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("macro expansion limit exceeded");
return x_0;
}
}
obj* l___private_init_lean_expander_2__expand__core___main(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::nat_dec_eq(x_0, x_4);
if (x_5 == 0)
{
obj* x_7; 
lean::inc(x_1);
x_7 = l_lean_parser_syntax_as__node___main(x_1);
if (lean::obj_tag(x_7) == 0)
{
obj* x_10; obj* x_11; 
lean::dec(x_3);
lean::dec(x_0);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_1);
lean::cnstr_set(x_10, 1, x_2);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
return x_11;
}
else
{
obj* x_13; obj* x_16; obj* x_17; obj* x_19; obj* x_21; obj* x_23; 
lean::dec(x_1);
x_13 = lean::cnstr_get(x_7, 0);
lean::inc(x_13);
lean::dec(x_7);
x_16 = lean::mk_nat_obj(1u);
x_17 = lean::nat_sub(x_0, x_16);
lean::dec(x_0);
x_19 = lean::cnstr_get(x_3, 1);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_13, 0);
lean::inc(x_21);
x_23 = l_rbmap_find___main___at___private_init_lean_expander_2__expand__core___main___spec__2(x_19, x_21);
if (lean::obj_tag(x_23) == 0)
{
obj* x_24; obj* x_27; 
x_24 = lean::cnstr_get(x_13, 1);
lean::inc(x_24);
lean::dec(x_13);
x_27 = l_list_mmap___main___at___private_init_lean_expander_2__expand__core___main___spec__3(x_17, x_24, x_2, x_3);
if (lean::obj_tag(x_27) == 0)
{
obj* x_29; obj* x_31; obj* x_32; 
lean::dec(x_21);
x_29 = lean::cnstr_get(x_27, 0);
if (lean::is_exclusive(x_27)) {
 x_31 = x_27;
} else {
 lean::inc(x_29);
 lean::dec(x_27);
 x_31 = lean::box(0);
}
if (lean::is_scalar(x_31)) {
 x_32 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_32 = x_31;
}
lean::cnstr_set(x_32, 0, x_29);
return x_32;
}
else
{
obj* x_33; obj* x_35; obj* x_36; obj* x_38; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_33 = lean::cnstr_get(x_27, 0);
if (lean::is_exclusive(x_27)) {
 x_35 = x_27;
} else {
 lean::inc(x_33);
 lean::dec(x_27);
 x_35 = lean::box(0);
}
x_36 = lean::cnstr_get(x_33, 0);
x_38 = lean::cnstr_get(x_33, 1);
if (lean::is_exclusive(x_33)) {
 x_40 = x_33;
} else {
 lean::inc(x_36);
 lean::inc(x_38);
 lean::dec(x_33);
 x_40 = lean::box(0);
}
x_41 = l_lean_parser_syntax_mk__node(x_21, x_36);
if (lean::is_scalar(x_40)) {
 x_42 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_42 = x_40;
}
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set(x_42, 1, x_38);
if (lean::is_scalar(x_35)) {
 x_43 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_43 = x_35;
}
lean::cnstr_set(x_43, 0, x_42);
return x_43;
}
}
else
{
obj* x_44; obj* x_47; 
x_44 = lean::cnstr_get(x_23, 0);
lean::inc(x_44);
lean::dec(x_23);
x_47 = l_lean_expander_mk__scope(x_2, x_3);
if (lean::obj_tag(x_47) == 0)
{
obj* x_53; obj* x_55; obj* x_56; 
lean::dec(x_13);
lean::dec(x_3);
lean::dec(x_44);
lean::dec(x_17);
lean::dec(x_21);
x_53 = lean::cnstr_get(x_47, 0);
if (lean::is_exclusive(x_47)) {
 x_55 = x_47;
} else {
 lean::inc(x_53);
 lean::dec(x_47);
 x_55 = lean::box(0);
}
if (lean::is_scalar(x_55)) {
 x_56 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_56 = x_55;
}
lean::cnstr_set(x_56, 0, x_53);
return x_56;
}
else
{
obj* x_57; obj* x_60; obj* x_62; obj* x_65; obj* x_70; obj* x_72; obj* x_73; obj* x_75; 
x_57 = lean::cnstr_get(x_47, 0);
lean::inc(x_57);
lean::dec(x_47);
x_60 = lean::cnstr_get(x_57, 0);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_57, 1);
lean::inc(x_62);
lean::dec(x_57);
x_65 = lean::cnstr_get(x_13, 1);
lean::inc(x_65);
lean::dec(x_13);
lean::inc(x_65);
lean::inc(x_60);
x_70 = l_list_map___main___at___private_init_lean_expander_2__expand__core___main___spec__4(x_60, x_65);
lean::inc(x_21);
x_72 = l_lean_parser_syntax_mk__node(x_21, x_70);
x_73 = lean::cnstr_get(x_3, 0);
lean::inc(x_73);
x_75 = lean::apply_2(x_44, x_72, x_73);
if (lean::obj_tag(x_75) == 0)
{
obj* x_82; obj* x_84; obj* x_85; 
lean::dec(x_3);
lean::dec(x_65);
lean::dec(x_60);
lean::dec(x_62);
lean::dec(x_17);
lean::dec(x_21);
x_82 = lean::cnstr_get(x_75, 0);
if (lean::is_exclusive(x_75)) {
 x_84 = x_75;
} else {
 lean::inc(x_82);
 lean::dec(x_75);
 x_84 = lean::box(0);
}
if (lean::is_scalar(x_84)) {
 x_85 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_85 = x_84;
}
lean::cnstr_set(x_85, 0, x_82);
return x_85;
}
else
{
obj* x_86; 
x_86 = lean::cnstr_get(x_75, 0);
lean::inc(x_86);
lean::dec(x_75);
if (lean::obj_tag(x_86) == 0)
{
obj* x_90; 
lean::dec(x_60);
x_90 = l_list_mmap___main___at___private_init_lean_expander_2__expand__core___main___spec__5(x_17, x_65, x_62, x_3);
if (lean::obj_tag(x_90) == 0)
{
obj* x_92; obj* x_94; obj* x_95; 
lean::dec(x_21);
x_92 = lean::cnstr_get(x_90, 0);
if (lean::is_exclusive(x_90)) {
 x_94 = x_90;
} else {
 lean::inc(x_92);
 lean::dec(x_90);
 x_94 = lean::box(0);
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_92);
return x_95;
}
else
{
obj* x_96; obj* x_98; obj* x_99; obj* x_101; obj* x_103; obj* x_104; obj* x_105; obj* x_106; 
x_96 = lean::cnstr_get(x_90, 0);
if (lean::is_exclusive(x_90)) {
 x_98 = x_90;
} else {
 lean::inc(x_96);
 lean::dec(x_90);
 x_98 = lean::box(0);
}
x_99 = lean::cnstr_get(x_96, 0);
x_101 = lean::cnstr_get(x_96, 1);
if (lean::is_exclusive(x_96)) {
 x_103 = x_96;
} else {
 lean::inc(x_99);
 lean::inc(x_101);
 lean::dec(x_96);
 x_103 = lean::box(0);
}
x_104 = l_lean_parser_syntax_mk__node(x_21, x_99);
if (lean::is_scalar(x_103)) {
 x_105 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_105 = x_103;
}
lean::cnstr_set(x_105, 0, x_104);
lean::cnstr_set(x_105, 1, x_101);
if (lean::is_scalar(x_98)) {
 x_106 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_106 = x_98;
}
lean::cnstr_set(x_106, 0, x_105);
return x_106;
}
}
else
{
obj* x_109; obj* x_112; obj* x_113; obj* x_114; 
lean::dec(x_65);
lean::dec(x_21);
x_109 = lean::cnstr_get(x_86, 0);
lean::inc(x_109);
lean::dec(x_86);
x_112 = lean::box(0);
x_113 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_113, 0, x_60);
lean::cnstr_set(x_113, 1, x_112);
x_114 = l_lean_parser_syntax_flip__scopes___main(x_113, x_109);
x_0 = x_17;
x_1 = x_114;
x_2 = x_62;
goto _start;
}
}
}
}
}
}
else
{
obj* x_117; obj* x_118; obj* x_119; 
lean::dec(x_0);
x_117 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_117, 0, x_1);
x_118 = l___private_init_lean_expander_2__expand__core___main___closed__1;
x_119 = l_lean_expander_error___at___private_init_lean_expander_2__expand__core___main___spec__1___rarg(x_117, x_118, x_2, x_3);
lean::dec(x_2);
lean::dec(x_117);
return x_119;
}
}
}
obj* l_lean_expander_error___at___private_init_lean_expander_2__expand__core___main___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_lean_expander_error___at___private_init_lean_expander_2__expand__core___main___spec__1___rarg(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_2);
return x_4;
}
}
obj* l_lean_expander_error___at___private_init_lean_expander_2__expand__core___main___spec__1___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_expander_error___at___private_init_lean_expander_2__expand__core___main___spec__1(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_rbmap_find___main___at___private_init_lean_expander_2__expand__core___main___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbmap_find___main___at___private_init_lean_expander_2__expand__core___main___spec__2(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___private_init_lean_expander_2__expand__core(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l___private_init_lean_expander_2__expand__core___main(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_lean_expander_expand(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
x_2 = lean::mk_nat_obj(1000u);
x_3 = l_lean_expander_expander__state_new;
x_4 = l___private_init_lean_expander_2__expand__core___main(x_2, x_0, x_3, x_1);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; obj* x_7; obj* x_8; 
x_5 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 x_7 = x_4;
} else {
 lean::inc(x_5);
 lean::dec(x_4);
 x_7 = lean::box(0);
}
if (lean::is_scalar(x_7)) {
 x_8 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_8 = x_7;
}
lean::cnstr_set(x_8, 0, x_5);
return x_8;
}
else
{
obj* x_9; obj* x_11; obj* x_12; obj* x_15; 
x_9 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 x_11 = x_4;
} else {
 lean::inc(x_9);
 lean::dec(x_4);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_9, 0);
lean::inc(x_12);
lean::dec(x_9);
if (lean::is_scalar(x_11)) {
 x_15 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_15 = x_11;
}
lean::cnstr_set(x_15, 0, x_12);
return x_15;
}
}
}
void initialize_init_lean_parser_module();
void initialize_init_lean_expr();
static bool _G_initialized = false;
void initialize_init_lean_expander() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_lean_parser_module();
 initialize_init_lean_expr();
 l_lean_expander_transform__m_monad = _init_l_lean_expander_transform__m_monad();
lean::mark_persistent(l_lean_expander_transform__m_monad);
 l_lean_expander_transform__m_monad__reader = _init_l_lean_expander_transform__m_monad__reader();
lean::mark_persistent(l_lean_expander_transform__m_monad__reader);
 l_lean_expander_transform__m_monad__except = _init_l_lean_expander_transform__m_monad__except();
lean::mark_persistent(l_lean_expander_transform__m_monad__except);
 l_lean_expander_no__expansion___closed__1 = _init_l_lean_expander_no__expansion___closed__1();
lean::mark_persistent(l_lean_expander_no__expansion___closed__1);
 l_lean_expander_error___rarg___lambda__1___closed__1 = _init_l_lean_expander_error___rarg___lambda__1___closed__1();
lean::mark_persistent(l_lean_expander_error___rarg___lambda__1___closed__1);
 l_lean_expander_coe__binder__bracketed__binder___closed__1 = _init_l_lean_expander_coe__binder__bracketed__binder___closed__1();
lean::mark_persistent(l_lean_expander_coe__binder__bracketed__binder___closed__1);
 l_lean_expander_coe__binder__bracketed__binder___closed__2 = _init_l_lean_expander_coe__binder__bracketed__binder___closed__2();
lean::mark_persistent(l_lean_expander_coe__binder__bracketed__binder___closed__2);
 l___private_init_lean_expander_1__pop__stx__arg___closed__1 = _init_l___private_init_lean_expander_1__pop__stx__arg___closed__1();
lean::mark_persistent(l___private_init_lean_expander_1__pop__stx__arg___closed__1);
 l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__1 = _init_l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__1();
lean::mark_persistent(l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__1);
 l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__2 = _init_l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__2();
lean::mark_persistent(l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__2);
 l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__3 = _init_l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__3();
lean::mark_persistent(l_list_mmap_x_27___main___at_lean_expander_mk__notation__transformer___spec__4___closed__3);
 l_lean_expander_mixfix__to__notation__spec___closed__1 = _init_l_lean_expander_mixfix__to__notation__spec___closed__1();
lean::mark_persistent(l_lean_expander_mixfix__to__notation__spec___closed__1);
 l_lean_expander_mixfix__to__notation__spec___closed__2 = _init_l_lean_expander_mixfix__to__notation__spec___closed__2();
lean::mark_persistent(l_lean_expander_mixfix__to__notation__spec___closed__2);
 l_lean_expander_mixfix__to__notation__spec___closed__3 = _init_l_lean_expander_mixfix__to__notation__spec___closed__3();
lean::mark_persistent(l_lean_expander_mixfix__to__notation__spec___closed__3);
 l_lean_expander_mixfix__to__notation__spec___closed__4 = _init_l_lean_expander_mixfix__to__notation__spec___closed__4();
lean::mark_persistent(l_lean_expander_mixfix__to__notation__spec___closed__4);
 l_lean_expander_mixfix__to__notation__spec___closed__5 = _init_l_lean_expander_mixfix__to__notation__spec___closed__5();
lean::mark_persistent(l_lean_expander_mixfix__to__notation__spec___closed__5);
 l_lean_expander_mixfix__to__notation__spec___closed__6 = _init_l_lean_expander_mixfix__to__notation__spec___closed__6();
lean::mark_persistent(l_lean_expander_mixfix__to__notation__spec___closed__6);
 l_lean_expander_mixfix__to__notation__spec___closed__7 = _init_l_lean_expander_mixfix__to__notation__spec___closed__7();
lean::mark_persistent(l_lean_expander_mixfix__to__notation__spec___closed__7);
 l_lean_expander_mixfix_transform___closed__1 = _init_l_lean_expander_mixfix_transform___closed__1();
lean::mark_persistent(l_lean_expander_mixfix_transform___closed__1);
 l_lean_expander_mixfix_transform___closed__2 = _init_l_lean_expander_mixfix_transform___closed__2();
lean::mark_persistent(l_lean_expander_mixfix_transform___closed__2);
 l_lean_expander_mixfix_transform___closed__3 = _init_l_lean_expander_mixfix_transform___closed__3();
lean::mark_persistent(l_lean_expander_mixfix_transform___closed__3);
 l_lean_expander_mixfix_transform___closed__4 = _init_l_lean_expander_mixfix_transform___closed__4();
lean::mark_persistent(l_lean_expander_mixfix_transform___closed__4);
 l_lean_expander_mixfix_transform___closed__5 = _init_l_lean_expander_mixfix_transform___closed__5();
lean::mark_persistent(l_lean_expander_mixfix_transform___closed__5);
 l_lean_expander_mixfix_transform___closed__6 = _init_l_lean_expander_mixfix_transform___closed__6();
lean::mark_persistent(l_lean_expander_mixfix_transform___closed__6);
 l_lean_expander_reserve__mixfix_transform___closed__1 = _init_l_lean_expander_reserve__mixfix_transform___closed__1();
lean::mark_persistent(l_lean_expander_reserve__mixfix_transform___closed__1);
 l_lean_expander_mk__simple__binder___closed__1 = _init_l_lean_expander_mk__simple__binder___closed__1();
lean::mark_persistent(l_lean_expander_mk__simple__binder___closed__1);
 l_lean_expander_mk__simple__binder___closed__2 = _init_l_lean_expander_mk__simple__binder___closed__2();
lean::mark_persistent(l_lean_expander_mk__simple__binder___closed__2);
 l_lean_expander_mk__simple__binder___closed__3 = _init_l_lean_expander_mk__simple__binder___closed__3();
lean::mark_persistent(l_lean_expander_mk__simple__binder___closed__3);
 l_lean_expander_mk__simple__binder___closed__4 = _init_l_lean_expander_mk__simple__binder___closed__4();
lean::mark_persistent(l_lean_expander_mk__simple__binder___closed__4);
 l_lean_expander_mk__simple__binder___closed__5 = _init_l_lean_expander_mk__simple__binder___closed__5();
lean::mark_persistent(l_lean_expander_mk__simple__binder___closed__5);
 l_lean_expander_mk__simple__binder___closed__6 = _init_l_lean_expander_mk__simple__binder___closed__6();
lean::mark_persistent(l_lean_expander_mk__simple__binder___closed__6);
 l_lean_expander_mk__simple__binder___closed__7 = _init_l_lean_expander_mk__simple__binder___closed__7();
lean::mark_persistent(l_lean_expander_mk__simple__binder___closed__7);
 l_lean_expander_binder__ident__to__ident___main___closed__1 = _init_l_lean_expander_binder__ident__to__ident___main___closed__1();
lean::mark_persistent(l_lean_expander_binder__ident__to__ident___main___closed__1);
 l_lean_expander_get__opt__type___main___closed__1 = _init_l_lean_expander_get__opt__type___main___closed__1();
lean::mark_persistent(l_lean_expander_get__opt__type___main___closed__1);
 l_lean_expander_expand__bracketed__binder___main___closed__1 = _init_l_lean_expander_expand__bracketed__binder___main___closed__1();
lean::mark_persistent(l_lean_expander_expand__bracketed__binder___main___closed__1);
 l_lean_expander_expand__bracketed__binder___main___closed__2 = _init_l_lean_expander_expand__bracketed__binder___main___closed__2();
lean::mark_persistent(l_lean_expander_expand__bracketed__binder___main___closed__2);
 l_lean_expander_expand__bracketed__binder___main___closed__3 = _init_l_lean_expander_expand__bracketed__binder___main___closed__3();
lean::mark_persistent(l_lean_expander_expand__bracketed__binder___main___closed__3);
 l_lean_expander_expand__bracketed__binder___main___closed__4 = _init_l_lean_expander_expand__bracketed__binder___main___closed__4();
lean::mark_persistent(l_lean_expander_expand__bracketed__binder___main___closed__4);
 l_lean_expander_expand__bracketed__binder___main___closed__5 = _init_l_lean_expander_expand__bracketed__binder___main___closed__5();
lean::mark_persistent(l_lean_expander_expand__bracketed__binder___main___closed__5);
 l_lean_expander_expand__bracketed__binder___main___closed__6 = _init_l_lean_expander_expand__bracketed__binder___main___closed__6();
lean::mark_persistent(l_lean_expander_expand__bracketed__binder___main___closed__6);
 l_lean_expander_expand__bracketed__binder___main___closed__7 = _init_l_lean_expander_expand__bracketed__binder___main___closed__7();
lean::mark_persistent(l_lean_expander_expand__bracketed__binder___main___closed__7);
 l_lean_expander_expand__bracketed__binder___main___closed__8 = _init_l_lean_expander_expand__bracketed__binder___main___closed__8();
lean::mark_persistent(l_lean_expander_expand__bracketed__binder___main___closed__8);
 l_lean_expander_expand__bracketed__binder___main___closed__9 = _init_l_lean_expander_expand__bracketed__binder___main___closed__9();
lean::mark_persistent(l_lean_expander_expand__bracketed__binder___main___closed__9);
 l_lean_expander_expand__bracketed__binder___main___closed__10 = _init_l_lean_expander_expand__bracketed__binder___main___closed__10();
lean::mark_persistent(l_lean_expander_expand__bracketed__binder___main___closed__10);
 l_lean_expander_expand__bracketed__binder___main___closed__11 = _init_l_lean_expander_expand__bracketed__binder___main___closed__11();
lean::mark_persistent(l_lean_expander_expand__bracketed__binder___main___closed__11);
 l_lean_expander_expand__bracketed__binder___main___closed__12 = _init_l_lean_expander_expand__bracketed__binder___main___closed__12();
lean::mark_persistent(l_lean_expander_expand__bracketed__binder___main___closed__12);
 l_lean_expander_expand__bracketed__binder___main___closed__13 = _init_l_lean_expander_expand__bracketed__binder___main___closed__13();
lean::mark_persistent(l_lean_expander_expand__bracketed__binder___main___closed__13);
 l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__1 = _init_l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__1();
lean::mark_persistent(l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__1);
 l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__2 = _init_l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__2();
lean::mark_persistent(l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__2);
 l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__3 = _init_l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__3();
lean::mark_persistent(l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__3);
 l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__4 = _init_l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__4();
lean::mark_persistent(l_list_mfoldr___main___at_lean_expander_expand__binders___spec__6___closed__4);
 l_lean_expander_expand__binders___closed__1 = _init_l_lean_expander_expand__binders___closed__1();
lean::mark_persistent(l_lean_expander_expand__binders___closed__1);
 l_lean_expander_expand__binders___closed__2 = _init_l_lean_expander_expand__binders___closed__2();
lean::mark_persistent(l_lean_expander_expand__binders___closed__2);
 l_lean_expander_expand__binders___closed__3 = _init_l_lean_expander_expand__binders___closed__3();
lean::mark_persistent(l_lean_expander_expand__binders___closed__3);
 l_lean_expander_expand__binders___closed__4 = _init_l_lean_expander_expand__binders___closed__4();
lean::mark_persistent(l_lean_expander_expand__binders___closed__4);
 l_lean_expander_lambda_transform___closed__1 = _init_l_lean_expander_lambda_transform___closed__1();
lean::mark_persistent(l_lean_expander_lambda_transform___closed__1);
 l_lean_expander_arrow_transform___closed__1 = _init_l_lean_expander_arrow_transform___closed__1();
lean::mark_persistent(l_lean_expander_arrow_transform___closed__1);
 l_lean_expander_arrow_transform___closed__2 = _init_l_lean_expander_arrow_transform___closed__2();
lean::mark_persistent(l_lean_expander_arrow_transform___closed__2);
 l_list_foldr1___main___at_lean_expander_paren_transform___spec__3___closed__1 = _init_l_list_foldr1___main___at_lean_expander_paren_transform___spec__3___closed__1();
lean::mark_persistent(l_list_foldr1___main___at_lean_expander_paren_transform___spec__3___closed__1);
 l_lean_expander_paren_transform___closed__1 = _init_l_lean_expander_paren_transform___closed__1();
lean::mark_persistent(l_lean_expander_paren_transform___closed__1);
 l_lean_expander_paren_transform___closed__2 = _init_l_lean_expander_paren_transform___closed__2();
lean::mark_persistent(l_lean_expander_paren_transform___closed__2);
 l_lean_expander_assume_transform___closed__1 = _init_l_lean_expander_assume_transform___closed__1();
lean::mark_persistent(l_lean_expander_assume_transform___closed__1);
 l_lean_expander_if_transform___closed__1 = _init_l_lean_expander_if_transform___closed__1();
lean::mark_persistent(l_lean_expander_if_transform___closed__1);
 l_lean_expander_if_transform___closed__2 = _init_l_lean_expander_if_transform___closed__2();
lean::mark_persistent(l_lean_expander_if_transform___closed__2);
 l_lean_expander_if_transform___closed__3 = _init_l_lean_expander_if_transform___closed__3();
lean::mark_persistent(l_lean_expander_if_transform___closed__3);
 l_lean_expander_let_transform___closed__1 = _init_l_lean_expander_let_transform___closed__1();
lean::mark_persistent(l_lean_expander_let_transform___closed__1);
 l_lean_expander_constant_transform___closed__1 = _init_l_lean_expander_constant_transform___closed__1();
lean::mark_persistent(l_lean_expander_constant_transform___closed__1);
 l_lean_expander_declaration_transform___closed__1 = _init_l_lean_expander_declaration_transform___closed__1();
lean::mark_persistent(l_lean_expander_declaration_transform___closed__1);
 l_lean_expander_declaration_transform___closed__2 = _init_l_lean_expander_declaration_transform___closed__2();
lean::mark_persistent(l_lean_expander_declaration_transform___closed__2);
 l_lean_expander_declaration_transform___closed__3 = _init_l_lean_expander_declaration_transform___closed__3();
lean::mark_persistent(l_lean_expander_declaration_transform___closed__3);
 l_lean_expander_variable_transform___closed__1 = _init_l_lean_expander_variable_transform___closed__1();
lean::mark_persistent(l_lean_expander_variable_transform___closed__1);
 l_lean_expander_binding__annotation__update = _init_l_lean_expander_binding__annotation__update();
lean::mark_persistent(l_lean_expander_binding__annotation__update);
 l_lean_expander_binding__annotation__update_has__view_x_27___lambda__1___closed__1 = _init_l_lean_expander_binding__annotation__update_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_expander_binding__annotation__update_has__view_x_27___lambda__1___closed__1);
 l_lean_expander_binding__annotation__update_has__view_x_27 = _init_l_lean_expander_binding__annotation__update_has__view_x_27();
lean::mark_persistent(l_lean_expander_binding__annotation__update_has__view_x_27);
 l_lean_expander_binding__annotation__update_has__view = _init_l_lean_expander_binding__annotation__update_has__view();
lean::mark_persistent(l_lean_expander_binding__annotation__update_has__view);
 l_lean_expander_binding__annotation__update_parser_lean_parser_has__view = _init_l_lean_expander_binding__annotation__update_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_expander_binding__annotation__update_parser_lean_parser_has__view);
 l_lean_expander_binding__annotation__update_parser___closed__1 = _init_l_lean_expander_binding__annotation__update_parser___closed__1();
lean::mark_persistent(l_lean_expander_binding__annotation__update_parser___closed__1);
 l_list_mmap___main___at_lean_expander_variables_transform___spec__1___closed__1 = _init_l_list_mmap___main___at_lean_expander_variables_transform___spec__1___closed__1();
lean::mark_persistent(l_list_mmap___main___at_lean_expander_variables_transform___spec__1___closed__1);
 l_lean_expander_subtype_transform___closed__1 = _init_l_lean_expander_subtype_transform___closed__1();
lean::mark_persistent(l_lean_expander_subtype_transform___closed__1);
 l_list_map___main___at_lean_expander_universes_transform___spec__1___closed__1 = _init_l_list_map___main___at_lean_expander_universes_transform___spec__1___closed__1();
lean::mark_persistent(l_list_map___main___at_lean_expander_universes_transform___spec__1___closed__1);
 l_lean_expander_sorry_transform___closed__1 = _init_l_lean_expander_sorry_transform___closed__1();
lean::mark_persistent(l_lean_expander_sorry_transform___closed__1);
 l_rbmap_from__list___at_lean_expander_builtin__transformers___spec__1 = _init_l_rbmap_from__list___at_lean_expander_builtin__transformers___spec__1();
lean::mark_persistent(l_rbmap_from__list___at_lean_expander_builtin__transformers___spec__1);
 l_lean_expander_builtin__transformers = _init_l_lean_expander_builtin__transformers();
lean::mark_persistent(l_lean_expander_builtin__transformers);
 l_lean_expander_expander__state_new = _init_l_lean_expander_expander__state_new();
lean::mark_persistent(l_lean_expander_expander__state_new);
 l___private_init_lean_expander_2__expand__core___main___closed__1 = _init_l___private_init_lean_expander_2__expand__core___main___closed__1();
lean::mark_persistent(l___private_init_lean_expander_2__expand__core___main___closed__1);
}
