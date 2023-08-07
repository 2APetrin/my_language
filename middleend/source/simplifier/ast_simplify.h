#pragma once

#include "../create_ast/create_ast.h"

extern FILE* ast_log_file;

const double EPSYLON = 0.00001;


//! @brief simplyfies ast subtree
int simplify_ast_subtree(token_t** node, ast_tree_t* tree);

//! @brief simplyfies ast tree
int simplify_ast_tree(ast_tree_t* tree);

//! evaluates expression subtree value
elem_t eval(token_t* node, ast_tree_t* tree);


//! @brief checks if doubles are equal
//!
int equald(double val1, double val2);


int subtree_var_check(token_t* node);

int is_useless_dot(token_t* node);

token_t* copy_subtree(token_t* node);