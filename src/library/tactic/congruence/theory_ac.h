/*
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "library/type_context.h"
#include "library/tactic/ac_tactics.h"

namespace lean {
class congruence_closure;
/* Associativity and commutativity by completion */
class theory_ac {
public:
    class occurrences {
        rb_expr_tree m_occs;
        unsigned     m_size{0};
    public:
        void insert(expr const & e) {
            if (m_occs.contains(e)) return;
            m_occs.insert(e);
            m_size++;
        }

        void erase(expr const & e) {
            if (m_occs.contains(e)) {
                m_occs.erase(e);
                m_size--;
            }
        }

        unsigned size() const { return m_size; }

        template<typename F>
        optional<expr> find_if(F && f) const {
            return m_occs.find_if(f);
        }
    };

    struct entry {
        /* m_expr is the term in the congruence closure
           module being represented by this entry */
        unsigned    m_idx;
        occurrences m_R_occs[2];
        entry() {}
        entry(unsigned idx):m_idx(idx) {}
        occurrences const & get_R_occs(bool lhs) const { return m_R_occs[lhs]; }
        occurrences const & get_R_lhs_occs() const { return get_R_occs(true); }
        void set_R_occs(occurrences const & occs, bool lhs) { m_R_occs[lhs] = occs; }
    };

    typedef std::tuple<expr, expr, expr> expr_triple;

    struct state {
        /* Mapping from operators occurring in terms and their canonical
           representation in this module */
        rb_expr_map<expr>        m_can_ops;

        /* Mapping from canonical AC operators to AC proof terms. */
        rb_expr_map<expr_pair>   m_op_info;

        unsigned                 m_next_idx{0};

        rb_expr_map<entry>       m_entries;

        /* Confluent rewriting system */
        rb_expr_map<expr_pair>   m_R;

        format pp_term(formatter const & fmt, expr const & e) const;
        format pp_decl(formatter const & fmt, expr const & e) const;
        format pp_decls(formatter const & fmt) const;
        format pp_R(formatter const & fmt) const;
        format pp(formatter const & fmt) const;
    };

private:
    type_context &       m_ctx;
    congruence_closure & m_cc;
    state &              m_state;
    ac_manager           m_ac_manager;
    buffer<expr_triple>  m_todo;

    optional<expr> is_ac(expr const & e);
    expr convert(expr const & op, expr const & e, buffer<expr> & args);
    bool internalize_var(expr const & e);
    void add_R_occ(expr const & arg, expr const & lhs, bool in_lhs);
    void add_R_occs(expr const & e, expr const & lhs, bool in_lhs);
    void add_R_occs(expr const & lhs, expr const & rhs);
    optional<expr_pair> simplify_step(expr const & e);
    optional<expr_pair> simplify(expr const & e);
    void process();
    void dbg_trace_state() const;
    void dbg_trace_eq(char const * header, expr const & lhs, expr const & rhs) const;

public:
    theory_ac(congruence_closure & cc, state & s);
    ~theory_ac();

    void internalize(expr const & e, optional<expr> const & parent);
    void add_eq(expr const & e1, expr const & e2);

    format pp_term(formatter const & fmt, expr const & e) const {
        return m_state.pp_term(fmt, e);
    }
};

void initialize_theory_ac();
void finalize_theory_ac();
}
