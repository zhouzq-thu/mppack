//
//  mppack.h
//  mppack
//
//  Created by Zhi-Qiang Zhou on 10/21/14.
//  Copyright (c) 2014 Zhi-Qiang Zhou. All rights reserved.
//

#ifndef mppack_mppack_h
#define mppack_mppack_h

#include "Arprec.h"

#if defined(__LP64__) /* In LP64 match sizes with the 32 bit ABI */
typedef int 		__CLPK_integer;
typedef int 		__CLPK_logical;
typedef int         __CLPK_ftnlen;
typedef __CLPK_logical 	__CLPK_L_fp(...);
#else
typedef long int    __CLPK_integer;
typedef long int    __CLPK_logical;
typedef long int    __CLPK_ftnlen;
typedef __CLPK_logical 	__CLPK_L_fp(...);
#endif

typedef char  __CLPK_address;

typedef mp_real    __CLPK_real;
typedef mp_complex __CLPK_complex;

#endif
