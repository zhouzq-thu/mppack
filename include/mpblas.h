//
//  mpblas.h
//  cmpblas
//
//  Created by Zhi-Qiang Zhou on 10/19/14.
//  Copyright (c) 2014 Zhi-Qiang Zhou. All rights reserved.
//

#ifndef cmpblas_mpblas_h
#define cmpblas_mpblas_h

#include "mppack.h"

#pragma mark - LEVEL 1
/*********************************************************************
 *********************************************************************
 
 LEVEL 1 MBLAS
 
 *********************************************************************
 **********************************************************************/

/*
 ?rot(m)g performs: generate the (modified) plane transformation.
 ?rot(m)  performs:   apply  the (modified) plane transformation.
 */
int Rrotg_(__CLPK_real *da, __CLPK_real *db, __CLPK_real *c, __CLPK_real *s);
int Rrotmg_(__CLPK_real *sd1, __CLPK_real *sd2, __CLPK_real *sx1, __CLPK_real *sy1, __CLPK_real *sparam);
int Rrot_(__CLPK_integer *n, __CLPK_real *sx, __CLPK_integer *incx, __CLPK_real *sy, __CLPK_integer *incy, __CLPK_real *c, __CLPK_real *s);
int Rrotm_(__CLPK_integer *n, __CLPK_real *sx, __CLPK_integer *incx, __CLPK_real *sy, __CLPK_integer *incy, __CLPK_real *sparam);
int Crotg_(__CLPK_complex *ca, __CLPK_complex *cb, __CLPK_real *c, __CLPK_complex *s);
int CRrot_(__CLPK_integer *n, __CLPK_complex *cx, __CLPK_integer *incx, __CLPK_complex *cy, __CLPK_integer *incy, __CLPK_real *c, __CLPK_real *s);

// x <-> y
int Rswap_(__CLPK_integer *n, __CLPK_real *sx, __CLPK_integer *incx, __CLPK_real *sy, __CLPK_integer *incy);
int Cswap_(__CLPK_integer *n, __CLPK_complex *cx, __CLPK_integer *incx, __CLPK_complex *cy, __CLPK_integer *incy);

// y = alpha * y
int Rscal_(__CLPK_integer *n, __CLPK_real *sa, __CLPK_real *sx, __CLPK_integer *incx);
__CLPK_integer Cscal_(__CLPK_integer *n, __CLPK_complex *ca, __CLPK_complex *cx, __CLPK_integer *incx);
int CRscal_(__CLPK_integer *n, __CLPK_real *sa, __CLPK_complex *cx, __CLPK_integer *incx);

// y = x
int Rcopy_(__CLPK_integer *n, __CLPK_real *sx, __CLPK_integer *incx, __CLPK_real *sy, __CLPK_integer *incy);
int Ccopy_(__CLPK_integer *n, __CLPK_complex *cx, __CLPK_integer *incx, __CLPK_complex *cy, __CLPK_integer *incy);

// y = y + alpha * x
int Raxpy_(__CLPK_integer *n, __CLPK_real *sa, __CLPK_real *sx, __CLPK_integer *incx, __CLPK_real *sy, __CLPK_integer *incy);
int Caxpy_(__CLPK_integer *n, __CLPK_complex *ca, __CLPK_complex *cx, __CLPK_integer *incx, __CLPK_complex *cy, __CLPK_integer *incy);

// = x^T y
__CLPK_real Rdot_(__CLPK_integer *n, __CLPK_real *sx, __CLPK_integer *incx, __CLPK_real *sy, __CLPK_integer *incy);

// = X^T y
void Cdotc_(__CLPK_complex * ret_val, __CLPK_integer *n, __CLPK_complex *cx, __CLPK_integer*incx, __CLPK_complex *cy, __CLPK_integer *incy);

// = X^H y
void Cdotu_(__CLPK_complex * ret_val, __CLPK_integer *n, __CLPK_complex *cx, __CLPK_integer *incx, __CLPK_complex *cy, __CLPK_integer *incy);

// = ||x||_2
__CLPK_real RCnrm2_(__CLPK_integer *n, __CLPK_complex *x, __CLPK_integer *incx);
__CLPK_real Rnrm2_(__CLPK_integer *n, __CLPK_real *x, __CLPK_integer *incx);

// = ||Re(x)||_1 + ||Im(x)||_1
__CLPK_real RCasum_(__CLPK_integer *n, __CLPK_complex *cx, __CLPK_integer *incx);
__CLPK_real Rasum_(__CLPK_integer *n, __CLPK_real *sx, __CLPK_integer *incx);

// = i such that |Re(x_i)|+|Im(x_i)| is max
__CLPK_integer iRamax_(__CLPK_integer *n, __CLPK_real *sx, __CLPK_integer *incx);
__CLPK_integer iCamax_(__CLPK_integer *n, __CLPK_complex *cx, __CLPK_integer *incx);

// RCabs1 computes absolute value of a double complex number
__CLPK_real RCabs1_(__CLPK_complex *z);

// Mlsame returns 1 if CA is the same letter as CB regardless of case.
__CLPK_logical lsame_(char *ca, char *cb);

// Mxerbla is an error handler for the Mlapack routines.
__CLPK_integer xerbla_(char *srname, __CLPK_integer *info);

/*********************************************************************
 *********************************************************************
 
 End of LEVEL 1 MBLAS
 
 *********************************************************************
 **********************************************************************/




#pragma mark - LEVEL 2

/*********************************************************************
 *********************************************************************
 
 LEVEL 2 MBLAS
 
 *********************************************************************
 **********************************************************************/

/*
 ?g?mv performs one of the matrix-vector operations
 trans = "N", y := alpha*A*x + beta*y, or
 trans = "T", y := alpha*A'*x + beta*y, or
 trans = "C", y := alpha*conjg(A')*x + beta*y,
 where alpha and beta are scalars, x and y are vectors and A is an
 m by n matrix.
 */
int Rgemv_(char *trans, __CLPK_integer *m, __CLPK_integer *n, __CLPK_real *alpha,  __CLPK_real *a, __CLPK_integer *lda, __CLPK_real *x, __CLPK_integer *incx, __CLPK_real *beta, __CLPK_real *y,   __CLPK_integer *incy);
int Cgemv_(char *trans, __CLPK_integer *m, __CLPK_integer *n, __CLPK_complex *alpha, __CLPK_complex *a, __CLPK_integer *lda, __CLPK_complex *x, __CLPK_integer *incx, __CLPK_complex *beta, __CLPK_complex *y, __CLPK_integer *incy);
int Rgbmv_(char *trans, __CLPK_integer *m, __CLPK_integer *n, __CLPK_integer *kl, __CLPK_integer *ku, __CLPK_real *alpha, __CLPK_real *a, __CLPK_integer *lda, __CLPK_real *x, __CLPK_integer *incx, __CLPK_real *beta, __CLPK_real *y, __CLPK_integer *incy);
int Cgbmv_(char *trans, __CLPK_integer *m, __CLPK_integer *n, __CLPK_integer *kl, __CLPK_integer *ku, __CLPK_complex *alpha, __CLPK_complex *a, __CLPK_integer *lda, __CLPK_complex *x, __CLPK_integer *incx, __CLPK_complex *beta, __CLPK_complex *y, __CLPK_integer *incy);

/*
 Ch?mv performs the matrix-vector  operation
 y := alpha*A*x + beta*y,
 where alpha and beta are scalars, x and y are n element vectors and
 A is an n by n hermitian matrix.
 */
int Chemv_(char *uplo, __CLPK_integer *n, __CLPK_complex *alpha, __CLPK_complex *a, __CLPK_integer *lda, __CLPK_complex *x, __CLPK_integer *incx, __CLPK_complex *beta, __CLPK_complex *y, __CLPK_integer *incy);
int Chbmv_(char *uplo, __CLPK_integer *n, __CLPK_integer *k, __CLPK_complex *alpha, __CLPK_complex *a, __CLPK_integer *lda, __CLPK_complex *x, __CLPK_integer *incx, __CLPK_complex *beta, __CLPK_complex *y, __CLPK_integer *incy);
int Chpmv_(char *uplo, __CLPK_integer *n, __CLPK_complex *alpha, __CLPK_complex *ap, __CLPK_complex *x, __CLPK_integer *incx, __CLPK_complex *beta, __CLPK_complex *y, __CLPK_integer *incy);


/*
 Rs?mv performs the matrix-vector  operation
 y := alpha*A*x + beta*y,
 where alpha and beta are scalars, x and y are n element vectors and
 A is an n by n symmetric matrix.
 */
int Rsymv_(char *uplo, __CLPK_integer *n, __CLPK_real *alpha, __CLPK_real *a, __CLPK_integer *lda, __CLPK_real *x, __CLPK_integer *incx, __CLPK_real *beta, __CLPK_real *y, __CLPK_integer *incy);
int Rsbmv_(char *uplo, __CLPK_integer *n, __CLPK_integer *k, __CLPK_real *alpha, __CLPK_real *a, __CLPK_integer *lda, __CLPK_real *x, __CLPK_integer *incx, __CLPK_real *beta, __CLPK_real *y, __CLPK_integer *incy);
int Rspmv_(char *uplo, __CLPK_integer *n, __CLPK_real *alpha, __CLPK_real *ap, __CLPK_real *x, __CLPK_integer *incx, __CLPK_real *beta, __CLPK_real *y, __CLPK_integer *incy);


/*
 ?t?mv performs one of the matrix-vector operations
 trans = "N", x := A*x, or
 trans = "T", x := A'*x, or
 trans = "C", x := conjg( A' )*x,
 where x is an n element vector and  A is an n by n unit, or non-unit,
 upper or lower triangular matrix.
 */
int Rtrmv_(char *uplo, char *trans, char *diag, __CLPK_integer *n, __CLPK_real *a, __CLPK_integer *lda, __CLPK_real *x, __CLPK_integer *incx);
int Ctrmv_(char *uplo, char *trans, char *diag, __CLPK_integer *n, __CLPK_complex *a, __CLPK_integer *lda, __CLPK_complex *x, __CLPK_integer *incx);
int Rtbmv_(char *uplo, char *trans, char *diag, __CLPK_integer *n, __CLPK_integer *k, __CLPK_real *a, __CLPK_integer *lda, __CLPK_real *x, __CLPK_integer *incx);
int Ctbmv_(char *uplo, char *trans, char *diag, __CLPK_integer *n, __CLPK_integer *k, __CLPK_complex *a, __CLPK_integer *lda, __CLPK_complex *x, __CLPK_integer *incx);
int Rtpmv_(char *uplo, char *trans, char *diag, __CLPK_integer *n, __CLPK_real *ap, __CLPK_real *x, __CLPK_integer *incx);
int Ctpmv_(char *uplo, char *trans, char *diag, __CLPK_integer *n, __CLPK_complex *ap, __CLPK_complex *x, __CLPK_integer *incx);

/*
 ?t?sv solves one of the systems of equations
 trans = "N", A*x = b, or
 trans = "T", A'*x = b, or
 trans = "C", conjg( A' )*x = b,
 where b and x are n element vectors and A is an n by n unit, or
 non-unit, upper or lower triangular matrix.
 */
int Rtrsv_(char *uplo, char *trans, char *diag, __CLPK_integer *n, __CLPK_real *a, __CLPK_integer *lda, __CLPK_real *x, __CLPK_integer *incx);
int Ctrsv_(char *uplo, char *trans, char *diag, __CLPK_integer *n, __CLPK_complex *a, __CLPK_integer *lda, __CLPK_complex *x, __CLPK_integer *incx);
int Rtbsv_(char *uplo, char *trans, char *diag, __CLPK_integer *n, __CLPK_integer *k, __CLPK_real *a, __CLPK_integer *lda, __CLPK_real *x, __CLPK_integer *incx);
int Ctbsv_(char *uplo, char *trans, char *diag, __CLPK_integer *n, __CLPK_integer *k, __CLPK_complex *a, __CLPK_integer *lda, __CLPK_complex *x, __CLPK_integer *incx);
int Rtpsv_(char *uplo, char *trans, char *diag, __CLPK_integer *n, __CLPK_real *ap, __CLPK_real *x, __CLPK_integer *incx);
int Ctpsv_(char *uplo, char *trans, char *diag, __CLPK_integer *n, __CLPK_complex *ap, __CLPK_complex *x, __CLPK_integer *incx);


/*
 ?ger? performs the rank 1 operation
 Rger  A := alpha*x*y' + A,
 Cgeru A := alpha*x*y' + A,
 Cgerc A := alpha*x*conjg( y' ) + A,
 where alpha is a scalar, x is an m element vector, y is an n element
 vector and A is an m by n matrix.
 */
int Rger_(__CLPK_integer *m, __CLPK_integer *n, __CLPK_real *alpha, __CLPK_real *x, __CLPK_integer *incx, __CLPK_real *y, __CLPK_integer *incy, __CLPK_real *a, __CLPK_integer *lda);
int Cgeru_(__CLPK_integer *m, __CLPK_integer *n, __CLPK_complex *alpha, __CLPK_complex *x, __CLPK_integer *incx, __CLPK_complex *y, __CLPK_integer *incy, __CLPK_complex *a, __CLPK_integer *lda);
int Cgerc_(__CLPK_integer *m, __CLPK_integer *n, __CLPK_complex *alpha, __CLPK_complex *x, __CLPK_integer *incx, __CLPK_complex *y, __CLPK_integer *incy, __CLPK_complex *a, __CLPK_integer *lda);


/*
 Ch?r? performs the hermitian rank 1 operation
 Ch?r  A := alpha*x*conjg(x') + A, or
 Ch?r2 A := alpha*x*conjg(y') + conjg(alpha)*y*conjg(x') + A,
 where alpha is a real scalar, x is an n element vector and A is an
 n by n hermitian matrix.
 */
int Cher_(char *uplo, __CLPK_integer *n, __CLPK_real *alpha, __CLPK_complex *x, __CLPK_integer *incx, __CLPK_complex *a, __CLPK_integer *lda);
int Cher2_(char *uplo, __CLPK_integer *n, __CLPK_complex *alpha, __CLPK_complex *x, __CLPK_integer *incx, __CLPK_complex *y, __CLPK_integer *incy, __CLPK_complex *a, __CLPK_integer *lda);
int Chpr_(char *uplo, __CLPK_integer *n, __CLPK_real *alpha, __CLPK_complex *x, __CLPK_integer *incx, __CLPK_complex *ap);
int Chpr2_(char *uplo, __CLPK_integer *n, __CLPK_complex *alpha, __CLPK_complex *x, __CLPK_integer *incx, __CLPK_complex *y, __CLPK_integer *incy, __CLPK_complex *ap);

/*
 Rs?r? performs the symmetric rank 1 operation
 Rs?r  A := alpha*x*x' + A,
 Rs?r2 A := alpha*x*y' + alpha*y*x' + A,
 where alpha is a real scalar, x is an n element vector and A is an
 n by n symmetric matrix, supplied in packed form.
 */
int Rsyr_(char *uplo, __CLPK_integer *n, __CLPK_real *alpha, __CLPK_real *x, __CLPK_integer *incx, __CLPK_real *a, __CLPK_integer *lda);
int Rspr_(char *uplo, __CLPK_integer *n, __CLPK_real *alpha, __CLPK_real *x, __CLPK_integer *incx, __CLPK_real *ap);
int Rsyr2_(char *uplo, __CLPK_integer *n, __CLPK_real *alpha, __CLPK_real *x, __CLPK_integer *incx, __CLPK_real *y, __CLPK_integer *incy, __CLPK_real *a, __CLPK_integer *lda);
int Rspr2_(char *uplo, __CLPK_integer *n, __CLPK_real *alpha, __CLPK_real *x, __CLPK_integer *incx, __CLPK_real *y, __CLPK_integer *incy, __CLPK_real *ap);

/*********************************************************************
 *********************************************************************
 
 End of LEVEL 2 MBLAS
 
 *********************************************************************
 **********************************************************************/





#pragma mark - LEVEL 3

/*********************************************************************
 *********************************************************************
 
 LEVEL 3 MBLAS
 
 *********************************************************************
 **********************************************************************/

/*
 ?gemm performs one of the matrix-matrix operations
 C := alpha*op(A)*op(B) + beta*C,
 where op(X) is one of
 op(X) = X or op(X) = X' or op(X) = conjg(X').
 */
int Rgemm_(char *transa, char *transb, __CLPK_integer *m, __CLPK_integer *n, __CLPK_integer *k, __CLPK_real *alpha, __CLPK_real *a, __CLPK_integer *lda, __CLPK_real *b, __CLPK_integer *ldb, __CLPK_real *beta, __CLPK_real *c, __CLPK_integer *ldc);
int Cgemm_(char *transa, char *transb, __CLPK_integer *m, __CLPK_integer *n, __CLPK_integer *k, __CLPK_complex *alpha, __CLPK_complex *a, __CLPK_integer *lda, __CLPK_complex *b, __CLPK_integer *ldb, __CLPK_complex *beta, __CLPK_complex *c, __CLPK_integer *ldc);
int Rsymm_(char *side, char *uplo, __CLPK_integer *m, __CLPK_integer *n, __CLPK_real *alpha, __CLPK_real *a, __CLPK_integer *lda, __CLPK_real *b, __CLPK_integer *ldb, __CLPK_real *beta,__CLPK_real *c, __CLPK_integer *ldc);
int Csymm_(char *side, char *uplo, __CLPK_integer *m, __CLPK_integer *n, __CLPK_complex *alpha, __CLPK_complex *a, __CLPK_integer *lda, __CLPK_complex *b, __CLPK_integer *ldb, __CLPK_complex *beta, __CLPK_complex *c, __CLPK_integer *ldc);
int Chemm_(char *side, char *uplo, __CLPK_integer *m, __CLPK_integer *n, __CLPK_complex *alpha, __CLPK_complex *a, __CLPK_integer *lda, __CLPK_complex *b, __CLPK_integer *ldb, __CLPK_complex *beta, __CLPK_complex *c, __CLPK_integer *ldc);

/*
 ?syrk performs one of the symmetric rank k operations
 C := alpha*A*A' + beta*C,
 or
 C := alpha*A'*A + beta*C,
 where alpha and beta are scalars, C is an n by n symmetric matrix
 and A is an n by k matrix in the first case and a k by n matrix
 in the second case.
 */
int Rsyrk_(char *uplo, char *trans, __CLPK_integer *n, __CLPK_integer *k, __CLPK_real *alpha, __CLPK_real *a, __CLPK_integer *lda, __CLPK_real *beta, __CLPK_real *c, __CLPK_integer *ldc);
int Csyrk_(char *uplo, char *trans, __CLPK_integer *n, __CLPK_integer *k, __CLPK_complex *alpha, __CLPK_complex *a, __CLPK_integer *lda, __CLPK_complex *beta, __CLPK_complex *c, __CLPK_integer *ldc);
int Cherk_(char *uplo, char *trans, __CLPK_integer *n, __CLPK_integer *k, __CLPK_real *alpha, __CLPK_complex *a, __CLPK_integer *lda, __CLPK_real *beta, __CLPK_complex *c, __CLPK_integer *ldc);

/*
 ?syr2k performs one of the symmetric rank 2k operations
 C := alpha*A*B' + alpha*B*A' + beta*C,
 or
 C := alpha*A'*B + alpha*B'*A + beta*C,
 where  alpha and beta  are scalars,  C is an  n by n symmetric matrix
 and A and B  are  n by k  matrices  in the  first  case  and  k by n
 matrices in the second case.
 */
int Rsyr2k_(char *uplo, char *trans, __CLPK_integer *n, __CLPK_integer *k, __CLPK_real *alpha, __CLPK_real *a, __CLPK_integer *lda, __CLPK_real *b, __CLPK_integer *ldb, __CLPK_real *beta, __CLPK_real *c, __CLPK_integer *ldc);
int Csyr2k_(char *uplo, char *trans, __CLPK_integer *n, __CLPK_integer *k, __CLPK_complex *alpha, __CLPK_complex *a, __CLPK_integer *lda, __CLPK_complex *b, __CLPK_integer *ldb, __CLPK_complex *beta, __CLPK_complex *c, __CLPK_integer *ldc);
int Cher2k_(char *uplo, char *trans, __CLPK_integer *n, __CLPK_integer *k, __CLPK_complex *alpha, __CLPK_complex *a, __CLPK_integer *lda, __CLPK_complex *b, __CLPK_integer *ldb, __CLPK_real *beta, __CLPK_complex *c, __CLPK_integer *ldc);

int Rtrmm_(char *side, char *uplo, char *transa, char *diag, __CLPK_integer *m, __CLPK_integer *n, __CLPK_real *alpha, __CLPK_real *a, __CLPK_integer *lda, __CLPK_real *b,   __CLPK_integer *ldb);
int Ctrmm_(char *side, char *uplo, char *transa, char *diag, __CLPK_integer *m, __CLPK_integer *n, __CLPK_complex *alpha, __CLPK_complex *a, __CLPK_integer *lda, __CLPK_complex *b, __CLPK_integer *ldb);
int Rtrsm_(char *side, char *uplo, char *transa, char *diag, __CLPK_integer *m, __CLPK_integer *n, __CLPK_real *alpha, __CLPK_real *a, __CLPK_integer *lda, __CLPK_real *b,   __CLPK_integer *ldb);
int Ctrsm_(char *side, char *uplo, char *transa, char *diag, __CLPK_integer *m, __CLPK_integer *n, __CLPK_complex *alpha, __CLPK_complex *a, __CLPK_integer *lda, __CLPK_complex *b, __CLPK_integer *ldb);


/*********************************************************************
 *********************************************************************
 
 End of LEVEL 3 MBLAS
 
 *********************************************************************
 **********************************************************************/

__CLPK_real RCabs1_(__CLPK_complex *z);

__CLPK_logical lsame_(char *ca, char *cb);

int xerbla_(char *srname, __CLPK_integer *info);


#endif
