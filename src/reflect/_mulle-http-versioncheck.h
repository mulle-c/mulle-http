/*
 *   This file will be regenerated by `mulle-project-versioncheck`.
 *   Any edits will be lost.
 */
#ifndef mulle_http_versioncheck_h__
#define mulle_http_versioncheck_h__

#if defined( MULLE__C11_VERSION)
# ifndef MULLE__C11_VERSION_MIN
#  define MULLE__C11_VERSION_MIN  ((4UL << 20) | (4 << 8) | 0)
# endif
# ifndef MULLE__C11_VERSION_MAX
#  define MULLE__C11_VERSION_MAX  ((5UL << 20) | (0 << 8) | 0)
# endif
# if MULLE__C11_VERSION < MULLE__C11_VERSION_MIN
#  error "mulle-c11 is too old"
# endif
# if MULLE__C11_VERSION >= MULLE__C11_VERSION_MAX
#  error "mulle-c11 is too new"
# endif
#endif

#endif
