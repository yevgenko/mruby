/**
** @file mruby/presym.inc - Fallback file for Preallocated Symbols
**
** See Copyright Notice in mruby.h
*/

/*
 * Reading this file means you failed to specify `-I<build-dir>/include`
 * in the configuration. I will not use `PRESYM*` macros for compilation.
 */

# error "mruby/presym.h"
1 1 + + d
#define MRB_NO_PRESYM
