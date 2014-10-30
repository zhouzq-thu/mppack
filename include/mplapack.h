//
//  mplapack.h
//  mpblas
//
//  Created by Zhi-Qiang Zhou on 10/20/14.
//  Copyright (c) 2014 Zhi-Qiang Zhou. All rights reserved.
//

#ifndef mpblas_mplapack_h
#define mpblas_mplapack_h

#include "mppack.h"
#include "mpblas.h"

int Cbdsqr_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __ncvt, __CLPK_integer* __nru, __CLPK_integer* __ncc, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_complex* __vt, __CLPK_integer* __ldvt, __CLPK_complex* __u, __CLPK_integer* __ldu, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgbbrd_(char* __vect, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __ncc, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_complex* __pt, __CLPK_integer* __ldpt, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgbcon_(char* __norm, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_integer* __ipiv, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgbequ_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_real* __r__, __CLPK_real* __c__, __CLPK_real* __rowcnd, __CLPK_real* __colcnd, __CLPK_real* __amax, __CLPK_integer* __info);

int Cgbequb_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_real* __r__, __CLPK_real* __c__, __CLPK_real* __rowcnd, __CLPK_real* __colcnd, __CLPK_real* __amax, __CLPK_integer* __info);

int Cgbrfs_(char* __trans, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_integer* __nrhs, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_complex* __afb, __CLPK_integer* __ldafb, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgbsv_(__CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_integer* __nrhs, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Cgbsvx_(char* __fact, char* __trans, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_integer* __nrhs, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_complex* __afb, __CLPK_integer* __ldafb, __CLPK_integer* __ipiv, char* __equed, __CLPK_real* __r__, __CLPK_real* __c__, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgbtf2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_integer* __ipiv, __CLPK_integer* __info);

int Cgbtrf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_integer* __ipiv, __CLPK_integer* __info);

int Cgbtrs_(char* __trans, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_integer* __nrhs, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Cgebak_(char* __job, char* __side, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __scale, __CLPK_integer* __m, __CLPK_complex* __v, __CLPK_integer* __ldv, __CLPK_integer* __info);

int Cgebal_(char* __job, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __scale, __CLPK_integer* __info);

int Cgebd2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_complex* __tauq, __CLPK_complex* __taup, __CLPK_complex* __work, __CLPK_integer* __info);

int Cgebrd_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_complex* __tauq, __CLPK_complex* __taup, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cgecon_(char* __norm, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgeequ_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __r__, __CLPK_real* __c__, __CLPK_real* __rowcnd, __CLPK_real* __colcnd, __CLPK_real* __amax, __CLPK_integer* __info);

int Cgeequb_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __r__, __CLPK_real* __c__, __CLPK_real* __rowcnd, __CLPK_real* __colcnd, __CLPK_real* __amax, __CLPK_integer* __info);

int Cgees_(char* __jobvs, char* __sort, __CLPK_L_fp __select, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __sdim, __CLPK_complex* __w, __CLPK_complex* __vs, __CLPK_integer* __ldvs, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_logical* __bwork, __CLPK_integer* __info);

int Cgeesx_(char* __jobvs, char* __sort, __CLPK_L_fp __select, char* __sense, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __sdim, __CLPK_complex* __w, __CLPK_complex* __vs, __CLPK_integer* __ldvs, __CLPK_real* __rconde, __CLPK_real* __rcondv, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_logical* __bwork, __CLPK_integer* __info);

int Cgeev_(char* __jobvl, char* __jobvr, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __w, __CLPK_complex* __vl, __CLPK_integer* __ldvl, __CLPK_complex* __vr, __CLPK_integer* __ldvr, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgeevx_(char* __balanc, char* __jobvl, char* __jobvr, char* __sense, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __w, __CLPK_complex* __vl, __CLPK_integer* __ldvl, __CLPK_complex* __vr, __CLPK_integer* __ldvr, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __scale, __CLPK_real* __abnrm, __CLPK_real* __rconde, __CLPK_real* __rcondv, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgegs_(char* __jobvsl, char* __jobvsr, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __alpha, __CLPK_complex* __beta, __CLPK_complex* __vsl, __CLPK_integer* __ldvsl, __CLPK_complex* __vsr, __CLPK_integer* __ldvsr, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgegv_(char* __jobvl, char* __jobvr, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __alpha, __CLPK_complex* __beta, __CLPK_complex* __vl, __CLPK_integer* __ldvl, __CLPK_complex* __vr, __CLPK_integer* __ldvr, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgehd2_(__CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __info);

int Cgehrd_(__CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cgelq2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __info);

int Cgelqf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cgels_(char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cgelsd_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_real* __s, __CLPK_real* __rcond, __CLPK_integer* __rank, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Cgelss_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_real* __s, __CLPK_real* __rcond, __CLPK_integer* __rank, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgelsx_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __jpvt, __CLPK_real* __rcond, __CLPK_integer* __rank, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgelsy_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __jpvt, __CLPK_real* __rcond, __CLPK_integer* __rank, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgeql2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __info);

int Cgeqlf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cgeqp3_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __jpvt, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgeqpf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __jpvt, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgeqr2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __info);

int Cgeqrf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cgerfs_(char* __trans, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __af, __CLPK_integer* __ldaf, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgerq2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __info);

int Cgerqf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cgesc2_(__CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __rhs, __CLPK_integer* __ipiv, __CLPK_integer* __jpiv, __CLPK_real* __scale);

int Cgesdd_(char* __jobz, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __s, __CLPK_complex* __u, __CLPK_integer* __ldu, __CLPK_complex* __vt, __CLPK_integer* __ldvt, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Cgesv_(__CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Cgesvd_(char* __jobu, char* __jobvt, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __s, __CLPK_complex* __u, __CLPK_integer* __ldu, __CLPK_complex* __vt, __CLPK_integer* __ldvt, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgesvx_(char* __fact, char* __trans, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __af, __CLPK_integer* __ldaf, __CLPK_integer* __ipiv, char* __equed, __CLPK_real* __r__, __CLPK_real* __c__, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgetc2_(__CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_integer* __jpiv, __CLPK_integer* __info);

int Cgetf2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_integer* __info);

int Cgetrf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_integer* __info);

int Cgetri_(__CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cgetrs_(char* __trans, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Cggbak_(char* __job, char* __side, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __lscale, __CLPK_real* __rscale, __CLPK_integer* __m, __CLPK_complex* __v, __CLPK_integer* __ldv, __CLPK_integer* __info);

int Cggbal_(char* __job, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __lscale, __CLPK_real* __rscale, __CLPK_real* __work, __CLPK_integer* __info);

int Cgges_(char* __jobvsl, char* __jobvsr, char* __sort, __CLPK_L_fp __selctg, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __sdim, __CLPK_complex* __alpha, __CLPK_complex* __beta, __CLPK_complex* __vsl, __CLPK_integer* __ldvsl, __CLPK_complex* __vsr, __CLPK_integer* __ldvsr, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_logical* __bwork, __CLPK_integer* __info);

int Cggesx_(char* __jobvsl, char* __jobvsr, char* __sort, __CLPK_L_fp __selctg, char* __sense, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __sdim, __CLPK_complex* __alpha, __CLPK_complex* __beta, __CLPK_complex* __vsl, __CLPK_integer* __ldvsl, __CLPK_complex* __vsr, __CLPK_integer* __ldvsr, __CLPK_real* __rconde, __CLPK_real* __rcondv, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_logical* __bwork, __CLPK_integer* __info);

int Cggev_(char* __jobvl, char* __jobvr, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __alpha, __CLPK_complex* __beta, __CLPK_complex* __vl, __CLPK_integer* __ldvl, __CLPK_complex* __vr, __CLPK_integer* __ldvr, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cggevx_(char* __balanc, char* __jobvl, char* __jobvr, char* __sense, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __alpha, __CLPK_complex* __beta, __CLPK_complex* __vl, __CLPK_integer* __ldvl, __CLPK_complex* __vr, __CLPK_integer* __ldvr, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __lscale, __CLPK_real* __rscale, __CLPK_real* __abnrm, __CLPK_real* __bbnrm, __CLPK_real* __rconde, __CLPK_real* __rcondv, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __iwork, __CLPK_logical* __bwork, __CLPK_integer* __info);

int Cggglm_(__CLPK_integer* __n, __CLPK_integer* __m, __CLPK_integer* __p, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __d__, __CLPK_complex* __x, __CLPK_complex* __y, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cgghrd_(char* __compq, char* __compz, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_integer* __info);

int Cgglse_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __p, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __c__, __CLPK_complex* __d__, __CLPK_complex* __x, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cggqrf_(__CLPK_integer* __n, __CLPK_integer* __m, __CLPK_integer* __p, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __taua, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __taub, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cggrqf_(__CLPK_integer* __m, __CLPK_integer* __p, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __taua, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __taub, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cggsvd_(char* __jobu, char* __jobv, char* __jobq, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __p, __CLPK_integer* __k, __CLPK_integer* __l, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_real* __alpha, __CLPK_real* __beta, __CLPK_complex* __u, __CLPK_integer* __ldu, __CLPK_complex* __v, __CLPK_integer* __ldv, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Cggsvp_(char* __jobu, char* __jobv, char* __jobq, __CLPK_integer* __m, __CLPK_integer* __p, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_real* __tola, __CLPK_real* __tolb, __CLPK_integer* __k, __CLPK_integer* __l, __CLPK_complex* __u, __CLPK_integer* __ldu, __CLPK_complex* __v, __CLPK_integer* __ldv, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_integer* __iwork, __CLPK_real* __rwork, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __info);

int Cgtcon_(char* __norm, __CLPK_integer* __n, __CLPK_complex* __dl, __CLPK_complex* __d__, __CLPK_complex* __du, __CLPK_complex* __du2, __CLPK_integer* __ipiv, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_complex* __work, __CLPK_integer* __info);

int Cgtrfs_(char* __trans, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __dl, __CLPK_complex* __d__, __CLPK_complex* __du, __CLPK_complex* __dlf, __CLPK_complex* __df, __CLPK_complex* __duf, __CLPK_complex* __du2, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgtsv_(__CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __dl, __CLPK_complex* __d__, __CLPK_complex* __du, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Cgtsvx_(char* __fact, char* __trans, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __dl, __CLPK_complex* __d__, __CLPK_complex* __du, __CLPK_complex* __dlf, __CLPK_complex* __df, __CLPK_complex* __duf, __CLPK_complex* __du2, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cgttrf_(__CLPK_integer* __n, __CLPK_complex* __dl, __CLPK_complex* __d__, __CLPK_complex* __du, __CLPK_complex* __du2, __CLPK_integer* __ipiv, __CLPK_integer* __info);

int Cgttrs_(char* __trans, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __dl, __CLPK_complex* __d__, __CLPK_complex* __du, __CLPK_complex* __du2, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Cgtts2_(__CLPK_integer* __itrans, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __dl, __CLPK_complex* __d__, __CLPK_complex* __du, __CLPK_complex* __du2, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb);

int Chbev_(char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_real* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Chbevd_(char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_real* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __lrwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Chbevx_(char* __jobz, char* __range, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __iwork, __CLPK_integer* __ifail, __CLPK_integer* __info);

int Chbgst_(char* __vect, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __ka, __CLPK_integer* __kb, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_complex* __bb, __CLPK_integer* __ldbb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Chbgv_(char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __ka, __CLPK_integer* __kb, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_complex* __bb, __CLPK_integer* __ldbb, __CLPK_real* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Chbgvd_(char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __ka, __CLPK_integer* __kb, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_complex* __bb, __CLPK_integer* __ldbb, __CLPK_real* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __lrwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Chbgvx_(char* __jobz, char* __range, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __ka, __CLPK_integer* __kb, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_complex* __bb, __CLPK_integer* __ldbb, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __iwork, __CLPK_integer* __ifail, __CLPK_integer* __info);

int Chbtrd_(char* __vect, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_complex* __work, __CLPK_integer* __info);

int Checon_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_complex* __work, __CLPK_integer* __info);

int Cheequb_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, __CLPK_complex* __work, __CLPK_integer* __info);

int Cheev_(char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __w, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cheevd_(char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __w, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __lrwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Cheevr_(char* __jobz, char* __range, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_integer* __isuppz, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __lrwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Cheevx_(char* __jobz, char* __range, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __iwork, __CLPK_integer* __ifail, __CLPK_integer* __info);

int Chegs2_(__CLPK_integer* __itype, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Chegst_(__CLPK_integer* __itype, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Chegv_(__CLPK_integer* __itype, char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_real* __w, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __info);

int Chegvd_(__CLPK_integer* __itype, char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_real* __w, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __lrwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Chegvx_(__CLPK_integer* __itype, char* __jobz, char* __range, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __iwork, __CLPK_integer* __ifail, __CLPK_integer* __info);

int Cherfs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __af, __CLPK_integer* __ldaf, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Chesv_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Chesvx_(char* __fact, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __af, __CLPK_integer* __ldaf, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __info);

int Chetd2_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_complex* __tau, __CLPK_integer* __info);

int Chetf2_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_integer* __info);

int Chetrd_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Chetrf_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Chetri_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_complex* __work, __CLPK_integer* __info);

int Chetrs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Chfrk_(char* __transr, char* __uplo, char* __trans, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __alpha, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __beta, __CLPK_complex* __c__);

int Chgeqz_(char* __job, char* __compq, char* __compz, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_complex* __h__, __CLPK_integer* __ldh, __CLPK_complex* __t, __CLPK_integer* __ldt, __CLPK_complex* __alpha, __CLPK_complex* __beta, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __info);

int Chpcon_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_integer* __ipiv, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_complex* __work, __CLPK_integer* __info);

int Chpev_(char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_real* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Chpevd_(char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_real* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __lrwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Chpevx_(char* __jobz, char* __range, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __iwork, __CLPK_integer* __ifail, __CLPK_integer* __info);

int Chpgst_(__CLPK_integer* __itype, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_complex* __bp, __CLPK_integer* __info);

int Chpgv_(__CLPK_integer* __itype, char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_complex* __bp, __CLPK_real* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Chpgvd_(__CLPK_integer* __itype, char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_complex* __bp, __CLPK_real* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __lrwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Chpgvx_(__CLPK_integer* __itype, char* __jobz, char* __range, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_complex* __bp, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __iwork, __CLPK_integer* __ifail, __CLPK_integer* __info);

int Chprfs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __ap, __CLPK_complex* __afp, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Chpsv_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __ap, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Chpsvx_(char* __fact, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __ap, __CLPK_complex* __afp, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Chptrd_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_complex* __tau, __CLPK_integer* __info);

int Chptrf_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_integer* __ipiv, __CLPK_integer* __info);

int Chptri_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_integer* __ipiv, __CLPK_complex* __work, __CLPK_integer* __info);

int Chptrs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __ap, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Chsein_(char* __side, char* __eigsrc, char* __initv, __CLPK_logical* __select, __CLPK_integer* __n, __CLPK_complex* __h__, __CLPK_integer* __ldh, __CLPK_complex* __w, __CLPK_complex* __vl, __CLPK_integer* __ldvl, __CLPK_complex* __vr, __CLPK_integer* __ldvr, __CLPK_integer* __mm, __CLPK_integer* __m, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __ifaill, __CLPK_integer* __ifailr, __CLPK_integer* __info);

int Chseqr_(char* __job, char* __compz, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_complex* __h__, __CLPK_integer* __ldh, __CLPK_complex* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Clabrd_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __nb, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_complex* __tauq, __CLPK_complex* __taup, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_complex* __y, __CLPK_integer* __ldy);

int Clacgv_(__CLPK_integer* __n, __CLPK_complex* __x, __CLPK_integer* __incx);

int Clacn2_(__CLPK_integer* __n, __CLPK_complex* __v, __CLPK_complex* __x, __CLPK_real* __est, __CLPK_integer* __kase, __CLPK_integer* __isave);

int Clacon_(__CLPK_integer* __n, __CLPK_complex* __v, __CLPK_complex* __x, __CLPK_real* __est, __CLPK_integer* __kase);

int Clacp2_(char* __uplo, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb);

int Clacpy_(char* __uplo, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb);

int Clacrm_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_real* __rwork);

int Clacrt_(__CLPK_integer* __n, __CLPK_complex* __cx, __CLPK_integer* __incx, __CLPK_complex* __cy, __CLPK_integer* __incy, __CLPK_complex* __c__, __CLPK_complex* __s);

void Cladiv_(__CLPK_complex* __ret_val, __CLPK_complex* __x, __CLPK_complex* __y);

int Claed0_(__CLPK_integer* __qsiz, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_complex* __qstore, __CLPK_integer* __ldqs, __CLPK_real* __rwork, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Claed7_(__CLPK_integer* __n, __CLPK_integer* __cutpnt, __CLPK_integer* __qsiz, __CLPK_integer* __tlvls, __CLPK_integer* __curlvl, __CLPK_integer* __curpbm, __CLPK_real* __d__, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_real* __rho, __CLPK_integer* __indxq, __CLPK_real* __qstore, __CLPK_integer* __qptr, __CLPK_integer* __prmptr, __CLPK_integer* __perm, __CLPK_integer* __givptr, __CLPK_integer* __givcol, __CLPK_real* __givnum, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Claed8_(__CLPK_integer* __k, __CLPK_integer* __n, __CLPK_integer* __qsiz, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_real* __d__, __CLPK_real* __rho, __CLPK_integer* __cutpnt, __CLPK_real* __z__, __CLPK_real* __dlamda, __CLPK_complex* __q2, __CLPK_integer* __ldq2, __CLPK_real* __w, __CLPK_integer* __indxp, __CLPK_integer* __indx, __CLPK_integer* __indxq, __CLPK_integer* __perm, __CLPK_integer* __givptr, __CLPK_integer* __givcol, __CLPK_real* __givnum, __CLPK_integer* __info);

int Claein_(__CLPK_logical* __rightv, __CLPK_logical* __noinit, __CLPK_integer* __n, __CLPK_complex* __h__, __CLPK_integer* __ldh, __CLPK_complex* __w, __CLPK_complex* __v, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_real* __rwork, __CLPK_real* __eps3, __CLPK_real* __smlnum, __CLPK_integer* __info);

int Claesy_(__CLPK_complex* __a, __CLPK_complex* __b, __CLPK_complex* __c__, __CLPK_complex* __rt1, __CLPK_complex* __rt2, __CLPK_complex* __evscal, __CLPK_complex* __cs1, __CLPK_complex* __sn1);

int Claev2_(__CLPK_complex* __a, __CLPK_complex* __b, __CLPK_complex* __c__, __CLPK_real* __rt1, __CLPK_real* __rt2, __CLPK_real* __cs1, __CLPK_complex* __sn1);

int Clag2z_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __sa, __CLPK_integer* __ldsa, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Clags2_(__CLPK_logical* __upper, __CLPK_real* __a1, __CLPK_complex* __a2, __CLPK_real* __a3, __CLPK_real* __b1, __CLPK_complex* __b2, __CLPK_real* __b3, __CLPK_real* __csu, __CLPK_complex* __snu, __CLPK_real* __csv, __CLPK_complex* __snv, __CLPK_real* __csq, __CLPK_complex* __snq);

int Clagtm_(char* __trans, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __alpha, __CLPK_complex* __dl, __CLPK_complex* __d__, __CLPK_complex* __du, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __beta, __CLPK_complex* __b, __CLPK_integer* __ldb);

int Clahef_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nb, __CLPK_integer* __kb, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_complex* __w, __CLPK_integer* __ldw, __CLPK_integer* __info);

int Clahqr_(__CLPK_logical* __wantt, __CLPK_logical* __wantz, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_complex* __h__, __CLPK_integer* __ldh, __CLPK_complex* __w, __CLPK_integer* __iloz, __CLPK_integer* __ihiz, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_integer* __info);

int Clahr2_(__CLPK_integer* __n, __CLPK_integer* __k, __CLPK_integer* __nb, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __t, __CLPK_integer* __ldt, __CLPK_complex* __y, __CLPK_integer* __ldy);

int Clahrd_(__CLPK_integer* __n, __CLPK_integer* __k, __CLPK_integer* __nb, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __t, __CLPK_integer* __ldt, __CLPK_complex* __y, __CLPK_integer* __ldy);

int Claic1_(__CLPK_integer* __job, __CLPK_integer* __j, __CLPK_complex* __x, __CLPK_real* __sest, __CLPK_complex* __w, __CLPK_complex* __gamma, __CLPK_real* __sestpr, __CLPK_complex* __s, __CLPK_complex* __c__);

int Clals0_(__CLPK_integer* __icompq, __CLPK_integer* __nl, __CLPK_integer* __nr, __CLPK_integer* __sqre, __CLPK_integer* __nrhs, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __bx, __CLPK_integer* __ldbx, __CLPK_integer* __perm, __CLPK_integer* __givptr, __CLPK_integer* __givcol, __CLPK_integer* __ldgcol, __CLPK_real* __givnum, __CLPK_integer* __ldgnum, __CLPK_real* __poles, __CLPK_real* __difl, __CLPK_real* __difr, __CLPK_real* __z__, __CLPK_integer* __k, __CLPK_real* __c__, __CLPK_real* __s, __CLPK_real* __rwork, __CLPK_integer* __info);

int Clalsa_(__CLPK_integer* __icompq, __CLPK_integer* __smlsiz, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __bx, __CLPK_integer* __ldbx, __CLPK_real* __u, __CLPK_integer* __ldu, __CLPK_real* __vt, __CLPK_integer* __k, __CLPK_real* __difl, __CLPK_real* __difr, __CLPK_real* __z__, __CLPK_real* __poles, __CLPK_integer* __givptr, __CLPK_integer* __givcol, __CLPK_integer* __ldgcol, __CLPK_integer* __perm, __CLPK_real* __givnum, __CLPK_real* __c__, __CLPK_real* __s, __CLPK_real* __rwork, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Clalsd_(char* __uplo, __CLPK_integer* __smlsiz, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_real* __rcond, __CLPK_integer* __rank, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __iwork, __CLPK_integer* __info);

__CLPK_real Clangb_(char* __norm, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_real* __work);

__CLPK_real Clange_(char* __norm, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __work);

__CLPK_real Clangt_(char* __norm, __CLPK_integer* __n, __CLPK_complex* __dl, __CLPK_complex* __d__, __CLPK_complex* __du);

__CLPK_real Clanhb_(char* __norm, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_real* __work);

__CLPK_real Clanhe_(char* __norm, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __work);

__CLPK_real Clanhf_(char* __norm, char* __transr, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_real* __work);

__CLPK_real Clanhp_(char* __norm, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_real* __work);

__CLPK_real Clanhs_(char* __norm, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __work);

__CLPK_real Clanht_(char* __norm, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_complex* __e);

__CLPK_real Clansb_(char* __norm, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_real* __work);

__CLPK_real Clansp_(char* __norm, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_real* __work);

__CLPK_real Clansy_(char* __norm, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __work);

__CLPK_real Clantb_(char* __norm, char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_real* __work);

__CLPK_real Clantp_(char* __norm, char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_real* __work);

__CLPK_real Clantr_(char* __norm, char* __uplo, char* __diag, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __work);

int Clapll_(__CLPK_integer* __n, __CLPK_complex* __x, __CLPK_integer* __incx, __CLPK_complex* __y, __CLPK_integer* __incy, __CLPK_real* __ssmin);

int Clapmt_(__CLPK_logical* __forwrd, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_integer* __k);

int Claqgb_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_real* __r__, __CLPK_real* __c__, __CLPK_real* __rowcnd, __CLPK_real* __colcnd, __CLPK_real* __amax, char* __equed);

int Claqge_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __r__, __CLPK_real* __c__, __CLPK_real* __rowcnd, __CLPK_real* __colcnd, __CLPK_real* __amax, char* __equed);

int Claqhb_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, char* __equed);

int Claqhe_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, char* __equed);

int Claqhp_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, char* __equed);

int Claqp2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __offset, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __jpvt, __CLPK_complex* __tau, __CLPK_real* __vn1, __CLPK_real* __vn2, __CLPK_complex* __work);

int Claqps_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __offset, __CLPK_integer* __nb, __CLPK_integer* __kb, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __jpvt, __CLPK_complex* __tau, __CLPK_real* __vn1, __CLPK_real* __vn2, __CLPK_complex* __auxv, __CLPK_complex* __f, __CLPK_integer* __ldf);

int Claqr0_(__CLPK_logical* __wantt, __CLPK_logical* __wantz, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_complex* __h__, __CLPK_integer* __ldh, __CLPK_complex* __w, __CLPK_integer* __iloz, __CLPK_integer* __ihiz, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Claqr1_(__CLPK_integer* __n, __CLPK_complex* __h__, __CLPK_integer* __ldh, __CLPK_complex* __s1, __CLPK_complex* __s2, __CLPK_complex* __v);

int Claqr2_(__CLPK_logical* __wantt, __CLPK_logical* __wantz, __CLPK_integer* __n, __CLPK_integer* __ktop, __CLPK_integer* __kbot, __CLPK_integer* __nw, __CLPK_complex* __h__, __CLPK_integer* __ldh, __CLPK_integer* __iloz, __CLPK_integer* __ihiz, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_integer* __ns, __CLPK_integer* __nd, __CLPK_complex* __sh, __CLPK_complex* __v, __CLPK_integer* __ldv, __CLPK_integer* __nh, __CLPK_complex* __t, __CLPK_integer* __ldt, __CLPK_integer* __nv, __CLPK_complex* __wv, __CLPK_integer* __ldwv, __CLPK_complex* __work, __CLPK_integer* __lwork);

int Claqr3_(__CLPK_logical* __wantt, __CLPK_logical* __wantz, __CLPK_integer* __n, __CLPK_integer* __ktop, __CLPK_integer* __kbot, __CLPK_integer* __nw, __CLPK_complex* __h__, __CLPK_integer* __ldh, __CLPK_integer* __iloz, __CLPK_integer* __ihiz, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_integer* __ns, __CLPK_integer* __nd, __CLPK_complex* __sh, __CLPK_complex* __v, __CLPK_integer* __ldv, __CLPK_integer* __nh, __CLPK_complex* __t, __CLPK_integer* __ldt, __CLPK_integer* __nv, __CLPK_complex* __wv, __CLPK_integer* __ldwv, __CLPK_complex* __work, __CLPK_integer* __lwork);

int Claqr4_(__CLPK_logical* __wantt, __CLPK_logical* __wantz, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_complex* __h__, __CLPK_integer* __ldh, __CLPK_complex* __w, __CLPK_integer* __iloz, __CLPK_integer* __ihiz, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Claqr5_(__CLPK_logical* __wantt, __CLPK_logical* __wantz, __CLPK_integer* __kacc22, __CLPK_integer* __n, __CLPK_integer* __ktop, __CLPK_integer* __kbot, __CLPK_integer* __nshfts, __CLPK_complex* __s, __CLPK_complex* __h__, __CLPK_integer* __ldh, __CLPK_integer* __iloz, __CLPK_integer* __ihiz, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __v, __CLPK_integer* __ldv, __CLPK_complex* __u, __CLPK_integer* __ldu, __CLPK_integer* __nv, __CLPK_complex* __wv, __CLPK_integer* __ldwv, __CLPK_integer* __nh, __CLPK_complex* __wh, __CLPK_integer* __ldwh);

int Claqsb_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, char* __equed);

int Claqsp_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, char* __equed);

int Claqsy_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, char* __equed);

int Clar1v_(__CLPK_integer* __n, __CLPK_integer* __b1, __CLPK_integer* __bn, __CLPK_real* __lambda, __CLPK_real* __d__, __CLPK_real* __l, __CLPK_real* __ld, __CLPK_real* __lld, __CLPK_real* __pivmin, __CLPK_real* __gaptol, __CLPK_complex* __z__, __CLPK_logical* __wantnc, __CLPK_integer* __negcnt, __CLPK_real* __ztz, __CLPK_real* __mingma, __CLPK_integer* __r__, __CLPK_integer* __isuppz, __CLPK_real* __nrminv, __CLPK_real* __resid, __CLPK_real* __rqcorr, __CLPK_real* __work);

int Clar2v_(__CLPK_integer* __n, __CLPK_complex* __x, __CLPK_complex* __y, __CLPK_complex* __z__, __CLPK_integer* __incx, __CLPK_real* __c__, __CLPK_complex* __s, __CLPK_integer* __incc);

int Clarcm_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_real* __rwork);

int Clarf_(char* __side, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __v, __CLPK_integer* __incv, __CLPK_complex* __tau, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work);

int Clarfb_(char* __side, char* __trans, char* __direct, char* __storev, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __v, __CLPK_integer* __ldv, __CLPK_complex* __t, __CLPK_integer* __ldt, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work, __CLPK_integer* __ldwork);

int Clarfg_(__CLPK_integer* __n, __CLPK_complex* __alpha, __CLPK_complex* __x, __CLPK_integer* __incx, __CLPK_complex* __tau);

int Clarfp_(__CLPK_integer* __n, __CLPK_complex* __alpha, __CLPK_complex* __x, __CLPK_integer* __incx, __CLPK_complex* __tau);

int Clarft_(char* __direct, char* __storev, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __v, __CLPK_integer* __ldv, __CLPK_complex* __tau, __CLPK_complex* __t, __CLPK_integer* __ldt);

int Clarfx_(char* __side, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __v, __CLPK_complex* __tau, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work);

int Clargv_(__CLPK_integer* __n, __CLPK_complex* __x, __CLPK_integer* __incx, __CLPK_complex* __y, __CLPK_integer* __incy, __CLPK_real* __c__, __CLPK_integer* __incc);

int Clarnv_(__CLPK_integer* __idist, __CLPK_integer* __iseed, __CLPK_integer* __n, __CLPK_complex* __x);

int Clarrv_(__CLPK_integer* __n, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_real* __d__, __CLPK_real* __l, __CLPK_real* __pivmin, __CLPK_integer* __isplit, __CLPK_integer* __m, __CLPK_integer* __dol, __CLPK_integer* __dou, __CLPK_real* __minrgp, __CLPK_real* __rtol1, __CLPK_real* __rtol2, __CLPK_real* __w, __CLPK_real* __werr, __CLPK_real* __wgap, __CLPK_integer* __iblock, __CLPK_integer* __indexw, __CLPK_real* __gers, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_integer* __isuppz, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Clarscl2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_complex* __x, __CLPK_integer* __ldx);

int Clartg_(__CLPK_complex* __f, __CLPK_complex* __g, __CLPK_real* __cs, __CLPK_complex* __sn, __CLPK_complex* __r__);

int Clartv_(__CLPK_integer* __n, __CLPK_complex* __x, __CLPK_integer* __incx, __CLPK_complex* __y, __CLPK_integer* __incy, __CLPK_real* __c__, __CLPK_complex* __s, __CLPK_integer* __incc);

int Clarz_(char* __side, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __l, __CLPK_complex* __v, __CLPK_integer* __incv, __CLPK_complex* __tau, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work);

int Clarzb_(char* __side, char* __trans, char* __direct, char* __storev, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_integer* __l, __CLPK_complex* __v, __CLPK_integer* __ldv, __CLPK_complex* __t, __CLPK_integer* __ldt, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work, __CLPK_integer* __ldwork);

int Clarzt_(char* __direct, char* __storev, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __v, __CLPK_integer* __ldv, __CLPK_complex* __tau, __CLPK_complex* __t, __CLPK_integer* __ldt);

int Clascl_(char* __type__, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_real* __cfrom, __CLPK_real* __cto, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Clascl2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_complex* __x, __CLPK_integer* __ldx);

int Claset_(char* __uplo, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __alpha, __CLPK_complex* __beta, __CLPK_complex* __a, __CLPK_integer* __lda);

int Clasr_(char* __side, char* __pivot, char* __direct, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __c__, __CLPK_real* __s, __CLPK_complex* __a, __CLPK_integer* __lda);

int Classq_(__CLPK_integer* __n, __CLPK_complex* __x, __CLPK_integer* __incx, __CLPK_real* __scale, __CLPK_real* __sumsq);

int Claswp_(__CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __k1, __CLPK_integer* __k2, __CLPK_integer* __ipiv, __CLPK_integer* __incx);

int Clasyf_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nb, __CLPK_integer* __kb, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_complex* __w, __CLPK_integer* __ldw, __CLPK_integer* __info);

int Clatbs_(char* __uplo, char* __trans, char* __diag, char* __normin, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_complex* __x, __CLPK_real* __scale, __CLPK_real* __cnorm, __CLPK_integer* __info);

int Clatdf_(__CLPK_integer* __ijob, __CLPK_integer* __n, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __rhs, __CLPK_real* __rdsum, __CLPK_real* __rdscal, __CLPK_integer* __ipiv, __CLPK_integer* __jpiv);

int Clatps_(char* __uplo, char* __trans, char* __diag, char* __normin, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_complex* __x, __CLPK_real* __scale, __CLPK_real* __cnorm, __CLPK_integer* __info);

int Clatrd_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nb, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __e, __CLPK_complex* __tau, __CLPK_complex* __w, __CLPK_integer* __ldw);

int Clatrs_(char* __uplo, char* __trans, char* __diag, char* __normin, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __x, __CLPK_real* __scale, __CLPK_real* __cnorm, __CLPK_integer* __info);

int Clatrz_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __l, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work);

int Clatzm_(char* __side, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __v, __CLPK_integer* __incv, __CLPK_complex* __tau, __CLPK_complex* __c1, __CLPK_complex* __c2, __CLPK_integer* __ldc, __CLPK_complex* __work);

int Clauu2_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Clauum_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Cpbcon_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cpbequ_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, __CLPK_integer* __info);

int Cpbrfs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_integer* __nrhs, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_complex* __afb, __CLPK_integer* __ldafb, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cpbstf_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_integer* __info);

int Cpbsv_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_integer* __nrhs, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Cpbsvx_(char* __fact, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_integer* __nrhs, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_complex* __afb, __CLPK_integer* __ldafb, char* __equed, __CLPK_real* __s, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cpbtf2_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_integer* __info);

int Cpbtrf_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_integer* __info);

int Cpbtrs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_integer* __nrhs, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Cpftrf_(char* __transr, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __info);

int Cpftri_(char* __transr, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __info);

int Cpftrs_(char* __transr, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Cpocon_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cpoequ_(__CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, __CLPK_integer* __info);

int Cpoequb_(__CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, __CLPK_integer* __info);

int Cporfs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __af, __CLPK_integer* __ldaf, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cposv_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Cposvx_(char* __fact, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __af, __CLPK_integer* __ldaf, char* __equed, __CLPK_real* __s, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cpotf2_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Cpotrf_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Cpotri_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Cpotrs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Cppcon_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cppequ_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, __CLPK_integer* __info);

int Cpprfs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __ap, __CLPK_complex* __afp, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cppsv_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __ap, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Cppsvx_(char* __fact, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __ap, __CLPK_complex* __afp, char* __equed, __CLPK_real* __s, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cpptrf_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_integer* __info);

int Cpptri_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_integer* __info);

int Cpptrs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __ap, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Cpstf2_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __piv, __CLPK_integer* __rank, __CLPK_real* __tol, __CLPK_real* __work, __CLPK_integer* __info);

int Cpstrf_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __piv, __CLPK_integer* __rank, __CLPK_real* __tol, __CLPK_real* __work, __CLPK_integer* __info);

int Cptcon_(__CLPK_integer* __n, __CLPK_real* __d__, __CLPK_complex* __e, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cpteqr_(char* __compz, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __info);

int Cptrfs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __d__, __CLPK_complex* __e, __CLPK_real* __df, __CLPK_complex* __ef, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cptsv_(__CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __d__, __CLPK_complex* __e, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Cptsvx_(char* __fact, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __d__, __CLPK_complex* __e, __CLPK_real* __df, __CLPK_complex* __ef, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cpttrf_(__CLPK_integer* __n, __CLPK_real* __d__, __CLPK_complex* __e, __CLPK_integer* __info);

int Cpttrs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __d__, __CLPK_complex* __e, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Cptts2_(__CLPK_integer* __iuplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __d__, __CLPK_complex* __e, __CLPK_complex* __b, __CLPK_integer* __ldb);

int Crot_(__CLPK_integer* __n, __CLPK_complex* __cx, __CLPK_integer* __incx, __CLPK_complex* __cy, __CLPK_integer* __incy, __CLPK_real* __c__, __CLPK_complex* __s);

int Cspcon_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_integer* __ipiv, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_complex* __work, __CLPK_integer* __info);

int Cspmv_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __alpha, __CLPK_complex* __ap, __CLPK_complex* __x, __CLPK_integer* __incx, __CLPK_complex* __beta, __CLPK_complex* __y, __CLPK_integer* __incy);

int Cspr_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __alpha, __CLPK_complex* __x, __CLPK_integer* __incx, __CLPK_complex* __ap);

int Csprfs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __ap, __CLPK_complex* __afp, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Cspsv_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __ap, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Cspsvx_(char* __fact, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __ap, __CLPK_complex* __afp, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Csptrf_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_integer* __ipiv, __CLPK_integer* __info);

int Csptri_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_integer* __ipiv, __CLPK_complex* __work, __CLPK_integer* __info);

int Csptrs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __ap, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int CRrscl_(__CLPK_integer* __n, __CLPK_real* __sa, __CLPK_complex* __sx, __CLPK_integer* __incx);

int Cstedc_(char* __compz, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __lrwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Cstegr_(char* __jobz, char* __range, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_integer* __isuppz, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Cstein_(__CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_integer* __iblock, __CLPK_integer* __isplit, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __ifail, __CLPK_integer* __info);

int Cstemr_(char* __jobz, char* __range, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_integer* __nzc, __CLPK_integer* __isuppz, __CLPK_logical* __tryrac, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Csteqr_(char* __compz, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __info);

int Csycon_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_complex* __work, __CLPK_integer* __info);

int Csyequb_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, __CLPK_complex* __work, __CLPK_integer* __info);

int Csymv_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __alpha, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __x, __CLPK_integer* __incx, __CLPK_complex* __beta, __CLPK_complex* __y, __CLPK_integer* __incy);

int Csyr_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __alpha, __CLPK_complex* __x, __CLPK_integer* __incx, __CLPK_complex* __a, __CLPK_integer* __lda);

int Csyrfs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __af, __CLPK_integer* __ldaf, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Csysv_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Csysvx_(char* __fact, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __af, __CLPK_integer* __ldaf, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_real* __rwork, __CLPK_integer* __info);

int Csytf2_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_integer* __info);

int Csytrf_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Csytri_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_complex* __work, __CLPK_integer* __info);

int Csytrs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Ctbcon_(char* __norm, char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_real* __rcond, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Ctbrfs_(char* __uplo, char* __trans, char* __diag, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_integer* __nrhs, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Ctbtrs_(char* __uplo, char* __trans, char* __diag, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_integer* __nrhs, __CLPK_complex* __ab, __CLPK_integer* __ldab, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Ctfsm_(char* __transr, char* __side, char* __uplo, char* __trans, char* __diag, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __alpha, __CLPK_complex* __a, __CLPK_complex* __b, __CLPK_integer* __ldb);

int Ctftri_(char* __transr, char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __info);

int Ctfttp_(char* __transr, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __arf, __CLPK_complex* __ap, __CLPK_integer* __info);

int Ctfttr_(char* __transr, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __arf, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Ctgevc_(char* __side, char* __howmny, __CLPK_logical* __select, __CLPK_integer* __n, __CLPK_complex* __s, __CLPK_integer* __lds, __CLPK_complex* __p, __CLPK_integer* __ldp, __CLPK_complex* __vl, __CLPK_integer* __ldvl, __CLPK_complex* __vr, __CLPK_integer* __ldvr, __CLPK_integer* __mm, __CLPK_integer* __m, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Ctgex2_(__CLPK_logical* __wantq, __CLPK_logical* __wantz, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_integer* __j1, __CLPK_integer* __info);

int Ctgexc_(__CLPK_logical* __wantq, __CLPK_logical* __wantz, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_integer* __ifst, __CLPK_integer* __ilst, __CLPK_integer* __info);

int Ctgsen_(__CLPK_integer* __ijob, __CLPK_logical* __wantq, __CLPK_logical* __wantz, __CLPK_logical* __select, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __alpha, __CLPK_complex* __beta, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_complex* __z__, __CLPK_integer* __ldz, __CLPK_integer* __m, __CLPK_real* __pl, __CLPK_real* __pr, __CLPK_real* __dif, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Ctgsja_(char* __jobu, char* __jobv, char* __jobq, __CLPK_integer* __m, __CLPK_integer* __p, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_integer* __l, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_real* __tola, __CLPK_real* __tolb, __CLPK_real* __alpha, __CLPK_real* __beta, __CLPK_complex* __u, __CLPK_integer* __ldu, __CLPK_complex* __v, __CLPK_integer* __ldv, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_complex* __work, __CLPK_integer* __ncycle, __CLPK_integer* __info);

int Ctgsna_(char* __job, char* __howmny, __CLPK_logical* __select, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __vl, __CLPK_integer* __ldvl, __CLPK_complex* __vr, __CLPK_integer* __ldvr, __CLPK_real* __s, __CLPK_real* __dif, __CLPK_integer* __mm, __CLPK_integer* __m, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Ctgsy2_(char* __trans, __CLPK_integer* __ijob, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __d__, __CLPK_integer* __ldd, __CLPK_complex* __e, __CLPK_integer* __lde, __CLPK_complex* __f, __CLPK_integer* __ldf, __CLPK_real* __scale, __CLPK_real* __rdsum, __CLPK_real* __rdscal, __CLPK_integer* __info);

int Ctgsyl_(char* __trans, __CLPK_integer* __ijob, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __d__, __CLPK_integer* __ldd, __CLPK_complex* __e, __CLPK_integer* __lde, __CLPK_complex* __f, __CLPK_integer* __ldf, __CLPK_real* __scale, __CLPK_real* __dif, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Ctpcon_(char* __norm, char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_real* __rcond, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Ctprfs_(char* __uplo, char* __trans, char* __diag, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __ap, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Ctptri_(char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_integer* __info);

int Ctptrs_(char* __uplo, char* __trans, char* __diag, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __ap, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Ctpttf_(char* __transr, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_complex* __arf, __CLPK_integer* __info);

int Ctpttr_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Ctrcon_(char* __norm, char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_real* __rcond, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Ctrevc_(char* __side, char* __howmny, __CLPK_logical* __select, __CLPK_integer* __n, __CLPK_complex* __t, __CLPK_integer* __ldt, __CLPK_complex* __vl, __CLPK_integer* __ldvl, __CLPK_complex* __vr, __CLPK_integer* __ldvr, __CLPK_integer* __mm, __CLPK_integer* __m, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Ctrexc_(char* __compq, __CLPK_integer* __n, __CLPK_complex* __t, __CLPK_integer* __ldt, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_integer* __ifst, __CLPK_integer* __ilst, __CLPK_integer* __info);

int Ctrrfs_(char* __uplo, char* __trans, char* __diag, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_complex* __work, __CLPK_real* __rwork, __CLPK_integer* __info);

int Ctrsen_(char* __job, char* __compq, __CLPK_logical* __select, __CLPK_integer* __n, __CLPK_complex* __t, __CLPK_integer* __ldt, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_complex* __w, __CLPK_integer* __m, __CLPK_real* __s, __CLPK_real* __sep, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Ctrsna_(char* __job, char* __howmny, __CLPK_logical* __select, __CLPK_integer* __n, __CLPK_complex* __t, __CLPK_integer* __ldt, __CLPK_complex* __vl, __CLPK_integer* __ldvl, __CLPK_complex* __vr, __CLPK_integer* __ldvr, __CLPK_real* __s, __CLPK_real* __sep, __CLPK_integer* __mm, __CLPK_integer* __m, __CLPK_complex* __work, __CLPK_integer* __ldwork, __CLPK_real* __rwork, __CLPK_integer* __info);

int Ctrsyl_(char* __trana, char* __tranb, __CLPK_integer* __isgn, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_real* __scale, __CLPK_integer* __info);

int Ctrti2_(char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Ctrtri_(char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Ctrtrs_(char* __uplo, char* __trans, char* __diag, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Ctrttf_(char* __transr, char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __arf, __CLPK_integer* __info);

int Ctrttp_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __ap, __CLPK_integer* __info);

int Ctzrqf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_integer* __info);

int Ctzrzf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cung2l_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __info);

int Cung2r_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __info);

int Cungbr_(char* __vect, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cunghr_(__CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cungl2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __info);

int Cunglq_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cungql_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cungqr_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cungr2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __info);

int Cungrq_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cungtr_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cunm2l_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work, __CLPK_integer* __info);

int Cunm2r_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work, __CLPK_integer* __info);

int Cunmbr_(char* __vect, char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cunmhr_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cunml2_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work, __CLPK_integer* __info);

int Cunmlq_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cunmql_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cunmqr_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cunmr2_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work, __CLPK_integer* __info);

int Cunmr3_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_integer* __l, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work, __CLPK_integer* __info);

int Cunmrq_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cunmrz_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_integer* __l, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cunmtr_(char* __side, char* __uplo, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda, __CLPK_complex* __tau, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Cupgtr_(char* __uplo, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_complex* __tau, __CLPK_complex* __q, __CLPK_integer* __ldq, __CLPK_complex* __work, __CLPK_integer* __info);

int Cupmtr_(char* __side, char* __uplo, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __ap, __CLPK_complex* __tau, __CLPK_complex* __c__, __CLPK_integer* __ldc, __CLPK_complex* __work, __CLPK_integer* __info);

__CLPK_integer iCmax1_(__CLPK_integer* __n, __CLPK_complex* __cx, __CLPK_integer* __incx);

__CLPK_integer ieeeck_(__CLPK_integer* __ispec, __CLPK_real* __zero, __CLPK_real* __one);

__CLPK_integer ilaclc_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda);

__CLPK_integer ilaclr_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda);

__CLPK_integer iladiag_(char* __diag);

__CLPK_integer iladlc_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda);

__CLPK_integer iladlr_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda);

__CLPK_integer ilaenv_(__CLPK_integer* __ispec, char* __name__, char* __opts, __CLPK_integer* __n1, __CLPK_integer* __n2, __CLPK_integer* __n3, __CLPK_integer* __n4);

__CLPK_integer ilaprec_(char* __prec);

__CLPK_integer ilaslc_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda);

__CLPK_integer ilaslr_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda);

__CLPK_integer ilatrans_(char* __trans);

__CLPK_integer ilauplo_(char* __uplo);

int ilaver_(__CLPK_integer* __vers_major__, __CLPK_integer* __vers_minor__, __CLPK_integer* __vers_patch__);

__CLPK_integer ilazlc_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda);

__CLPK_integer ilazlr_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_complex* __a, __CLPK_integer* __lda);

__CLPK_integer iparmq_(__CLPK_integer* __ispec, char* __name__, char* __opts, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_integer* __lwork);

__CLPK_logical lsamen_(__CLPK_integer* __n, char* __ca, char* __cb);

int Rbdsdc_(char* __uplo, char* __compq, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __u, __CLPK_integer* __ldu, __CLPK_real* __vt, __CLPK_integer* __ldvt, __CLPK_real* __q, __CLPK_integer* __iq, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rbdsqr_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __ncvt, __CLPK_integer* __nru, __CLPK_integer* __ncc, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __vt, __CLPK_integer* __ldvt, __CLPK_real* __u, __CLPK_integer* __ldu, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __info);

__CLPK_real Rcsum1_(__CLPK_integer* __n, __CLPK_complex* __cx, __CLPK_integer* __incx);

int Rdisna_(char* __job, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __sep, __CLPK_integer* __info);

int Rgbbrd_(char* __vect, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __ncc, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_real* __pt, __CLPK_integer* __ldpt, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __info);

int Rgbcon_(char* __norm, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_integer* __ipiv, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rgbequ_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __r__, __CLPK_real* __c__, __CLPK_real* __rowcnd, __CLPK_real* __colcnd, __CLPK_real* __amax, __CLPK_integer* __info);

int Rgbequb_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __r__, __CLPK_real* __c__, __CLPK_real* __rowcnd, __CLPK_real* __colcnd, __CLPK_real* __amax, __CLPK_integer* __info);

int Rgbrfs_(char* __trans, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_integer* __nrhs, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __afb, __CLPK_integer* __ldafb, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rgbsv_(__CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_integer* __nrhs, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rgbsvx_(char* __fact, char* __trans, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_integer* __nrhs, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __afb, __CLPK_integer* __ldafb, __CLPK_integer* __ipiv, char* __equed, __CLPK_real* __r__, __CLPK_real* __c__, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rgbtf2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_integer* __ipiv, __CLPK_integer* __info);

int Rgbtrf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_integer* __ipiv, __CLPK_integer* __info);

int Rgbtrs_(char* __trans, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_integer* __nrhs, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rgebak_(char* __job, char* __side, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __scale, __CLPK_integer* __m, __CLPK_real* __v, __CLPK_integer* __ldv, __CLPK_integer* __info);

int Rgebal_(char* __job, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __scale, __CLPK_integer* __info);

int Rgebd2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __tauq, __CLPK_real* __taup, __CLPK_real* __work, __CLPK_integer* __info);

int Rgebrd_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __tauq, __CLPK_real* __taup, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgecon_(char* __norm, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rgeequ_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __r__, __CLPK_real* __c__, __CLPK_real* __rowcnd, __CLPK_real* __colcnd, __CLPK_real* __amax, __CLPK_integer* __info);

int Rgeequb_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __r__, __CLPK_real* __c__, __CLPK_real* __rowcnd, __CLPK_real* __colcnd, __CLPK_real* __amax, __CLPK_integer* __info);

int Rgees_(char* __jobvs, char* __Rort, __CLPK_L_fp __select, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __Rdim, __CLPK_real* __wr, __CLPK_real* __wi, __CLPK_real* __vs, __CLPK_integer* __ldvs, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_logical* __bwork, __CLPK_integer* __info);

int Rgeesx_(char* __jobvs, char* __Rort, __CLPK_L_fp __select, char* __sense, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __Rdim, __CLPK_real* __wr, __CLPK_real* __wi, __CLPK_real* __vs, __CLPK_integer* __ldvs, __CLPK_real* __rconde, __CLPK_real* __rcondv, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_logical* __bwork, __CLPK_integer* __info);

int Rgeev_(char* __jobvl, char* __jobvr, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __wr, __CLPK_real* __wi, __CLPK_real* __vl, __CLPK_integer* __ldvl, __CLPK_real* __vr, __CLPK_integer* __ldvr, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgeevx_(char* __balanc, char* __jobvl, char* __jobvr, char* __sense, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __wr, __CLPK_real* __wi, __CLPK_real* __vl, __CLPK_integer* __ldvl, __CLPK_real* __vr, __CLPK_integer* __ldvr, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __scale, __CLPK_real* __abnrm, __CLPK_real* __rconde, __CLPK_real* __rcondv, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rgegs_(char* __jobvsl, char* __jobvsr, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __alphar, __CLPK_real* __alphai, __CLPK_real* __beta, __CLPK_real* __vsl, __CLPK_integer* __ldvsl, __CLPK_real* __vsr, __CLPK_integer* __ldvsr, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgegv_(char* __jobvl, char* __jobvr, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __alphar, __CLPK_real* __alphai, __CLPK_real* __beta, __CLPK_real* __vl, __CLPK_integer* __ldvl, __CLPK_real* __vr, __CLPK_integer* __ldvr, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgehd2_(__CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __info);

int Rgehrd_(__CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgejsv_(char* __joba, char* __jobu, char* __jobv, char* __jobr, char* __jobt, char* __jobp, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __sva, __CLPK_real* __u, __CLPK_integer* __ldu, __CLPK_real* __v, __CLPK_integer* __ldv, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rgelq2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __info);

int Rgelqf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgels_(char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgelsd_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __s, __CLPK_real* __rcond, __CLPK_integer* __rank, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rgelss_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __s, __CLPK_real* __rcond, __CLPK_integer* __rank, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgelsx_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __jpvt, __CLPK_real* __rcond, __CLPK_integer* __rank, __CLPK_real* __work, __CLPK_integer* __info);

int Rgelsy_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __jpvt, __CLPK_real* __rcond, __CLPK_integer* __rank, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgeql2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __info);

int Rgeqlf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgeqp3_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __jpvt, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgeqpf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __jpvt, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __info);

int Rgeqr2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __info);

int Rgeqrf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgerfs_(char* __trans, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __af, __CLPK_integer* __ldaf, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rgerq2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __info);

int Rgerqf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgesc2_(__CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __rhs, __CLPK_integer* __ipiv, __CLPK_integer* __jpiv, __CLPK_real* __scale);

int Rgesdd_(char* __jobz, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __s, __CLPK_real* __u, __CLPK_integer* __ldu, __CLPK_real* __vt, __CLPK_integer* __ldvt, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rgesv_(__CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rgesvd_(char* __jobu, char* __jobvt, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __s, __CLPK_real* __u, __CLPK_integer* __ldu, __CLPK_real* __vt, __CLPK_integer* __ldvt, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgesvj_(char* __joba, char* __jobu, char* __jobv, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __sva, __CLPK_integer* __mv, __CLPK_real* __v, __CLPK_integer* __ldv, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgesvx_(char* __fact, char* __trans, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __af, __CLPK_integer* __ldaf, __CLPK_integer* __ipiv, char* __equed, __CLPK_real* __r__, __CLPK_real* __c__, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rgetc2_(__CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_integer* __jpiv, __CLPK_integer* __info);

int Rgetf2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_integer* __info);

int Rgetrf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_integer* __info);

int Rgetri_(__CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgetrs_(char* __trans, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rggbak_(char* __job, char* __side, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __lscale, __CLPK_real* __rscale, __CLPK_integer* __m, __CLPK_real* __v, __CLPK_integer* __ldv, __CLPK_integer* __info);

int Rggbal_(char* __job, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __lscale, __CLPK_real* __rscale, __CLPK_real* __work, __CLPK_integer* __info);

int Rgges_(char* __jobvsl, char* __jobvsr, char* __Rort, __CLPK_L_fp __selctg, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __Rdim, __CLPK_real* __alphar, __CLPK_real* __alphai, __CLPK_real* __beta, __CLPK_real* __vsl, __CLPK_integer* __ldvsl, __CLPK_real* __vsr, __CLPK_integer* __ldvsr, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_logical* __bwork, __CLPK_integer* __info);

int Rggesx_(char* __jobvsl, char* __jobvsr, char* __Rort, __CLPK_L_fp __selctg, char* __sense, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __Rdim, __CLPK_real* __alphar, __CLPK_real* __alphai, __CLPK_real* __beta, __CLPK_real* __vsl, __CLPK_integer* __ldvsl, __CLPK_real* __vsr, __CLPK_integer* __ldvsr, __CLPK_real* __rconde, __CLPK_real* __rcondv, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_logical* __bwork, __CLPK_integer* __info);

int Rggev_(char* __jobvl, char* __jobvr, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __alphar, __CLPK_real* __alphai, __CLPK_real* __beta, __CLPK_real* __vl, __CLPK_integer* __ldvl, __CLPK_real* __vr, __CLPK_integer* __ldvr, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rggevx_(char* __balanc, char* __jobvl, char* __jobvr, char* __sense, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __alphar, __CLPK_real* __alphai, __CLPK_real* __beta, __CLPK_real* __vl, __CLPK_integer* __ldvl, __CLPK_real* __vr, __CLPK_integer* __ldvr, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __lscale, __CLPK_real* __rscale, __CLPK_real* __abnrm, __CLPK_real* __bbnrm, __CLPK_real* __rconde, __CLPK_real* __rcondv, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_logical* __bwork, __CLPK_integer* __info);

int Rggglm_(__CLPK_integer* __n, __CLPK_integer* __m, __CLPK_integer* __p, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __d__, __CLPK_real* __x, __CLPK_real* __y, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgghrd_(char* __compq, char* __compz, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_integer* __info);

int Rgglse_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __p, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __c__, __CLPK_real* __d__, __CLPK_real* __x, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rggqrf_(__CLPK_integer* __n, __CLPK_integer* __m, __CLPK_integer* __p, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __taua, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __taub, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rggrqf_(__CLPK_integer* __m, __CLPK_integer* __p, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __taua, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __taub, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rggsvd_(char* __jobu, char* __jobv, char* __jobq, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __p, __CLPK_integer* __k, __CLPK_integer* __l, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __alpha, __CLPK_real* __beta, __CLPK_real* __u, __CLPK_integer* __ldu, __CLPK_real* __v, __CLPK_integer* __ldv, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rggsvp_(char* __jobu, char* __jobv, char* __jobq, __CLPK_integer* __m, __CLPK_integer* __p, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __tola, __CLPK_real* __tolb, __CLPK_integer* __k, __CLPK_integer* __l, __CLPK_real* __u, __CLPK_integer* __ldu, __CLPK_real* __v, __CLPK_integer* __ldv, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_integer* __iwork, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __info);

int Rgsvj0_(char* __jobv, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __d__, __CLPK_real* __sva, __CLPK_integer* __mv, __CLPK_real* __v, __CLPK_integer* __ldv, __CLPK_real* __eps, __CLPK_real* __sfmin, __CLPK_real* __tol, __CLPK_integer* __nsweep, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgsvj1_(char* __jobv, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __n1, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __d__, __CLPK_real* __sva, __CLPK_integer* __mv, __CLPK_real* __v, __CLPK_integer* __ldv, __CLPK_real* __eps, __CLPK_real* __sfmin, __CLPK_real* __tol, __CLPK_integer* __nsweep, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rgtcon_(char* __norm, __CLPK_integer* __n, __CLPK_real* __dl, __CLPK_real* __d__, __CLPK_real* __du, __CLPK_real* __du2, __CLPK_integer* __ipiv, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rgtrfs_(char* __trans, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __dl, __CLPK_real* __d__, __CLPK_real* __du, __CLPK_real* __dlf, __CLPK_real* __df, __CLPK_real* __duf, __CLPK_real* __du2, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rgtsv_(__CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __dl, __CLPK_real* __d__, __CLPK_real* __du, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rgtsvx_(char* __fact, char* __trans, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __dl, __CLPK_real* __d__, __CLPK_real* __du, __CLPK_real* __dlf, __CLPK_real* __df, __CLPK_real* __duf, __CLPK_real* __du2, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rgttrf_(__CLPK_integer* __n, __CLPK_real* __dl, __CLPK_real* __d__, __CLPK_real* __du, __CLPK_real* __du2, __CLPK_integer* __ipiv, __CLPK_integer* __info);

int Rgttrs_(char* __trans, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __dl, __CLPK_real* __d__, __CLPK_real* __du, __CLPK_real* __du2, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rgtts2_(__CLPK_integer* __itrans, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __dl, __CLPK_real* __d__, __CLPK_real* __du, __CLPK_real* __du2, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb);

int Rhgeqz_(char* __job, char* __compq, char* __compz, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __h__, __CLPK_integer* __ldh, __CLPK_real* __t, __CLPK_integer* __ldt, __CLPK_real* __alphar, __CLPK_real* __alphai, __CLPK_real* __beta, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rhsein_(char* __side, char* __eigsrc, char* __initv, __CLPK_logical* __select, __CLPK_integer* __n, __CLPK_real* __h__, __CLPK_integer* __ldh, __CLPK_real* __wr, __CLPK_real* __wi, __CLPK_real* __vl, __CLPK_integer* __ldvl, __CLPK_real* __vr, __CLPK_integer* __ldvr, __CLPK_integer* __mm, __CLPK_integer* __m, __CLPK_real* __work, __CLPK_integer* __ifaill, __CLPK_integer* __ifailr, __CLPK_integer* __info);

int Rhseqr_(char* __job, char* __compz, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __h__, __CLPK_integer* __ldh, __CLPK_real* __wr, __CLPK_real* __wi, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);


__CLPK_logical Risnan_(__CLPK_real* __sin__);

int Rlabad_(__CLPK_real* __small, __CLPK_real* __large);

int Rlabrd_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __nb, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __tauq, __CLPK_real* __taup, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __y, __CLPK_integer* __ldy);

int Rlacn2_(__CLPK_integer* __n, __CLPK_real* __v, __CLPK_real* __x, __CLPK_integer* __isgn, __CLPK_real* __est, __CLPK_integer* __kase, __CLPK_integer* __isave);

int Rlacon_(__CLPK_integer* __n, __CLPK_real* __v, __CLPK_real* __x, __CLPK_integer* __isgn, __CLPK_real* __est, __CLPK_integer* __kase);

int Rlacpy_(char* __uplo, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb);

int Rladiv_(__CLPK_real* __a, __CLPK_real* __b, __CLPK_real* __c__, __CLPK_real* __d__, __CLPK_real* __p, __CLPK_real* __q);

int Rlae2_(__CLPK_real* __a, __CLPK_real* __b, __CLPK_real* __c__, __CLPK_real* __rt1, __CLPK_real* __rt2);

int Rlaebz_(__CLPK_integer* __ijob, __CLPK_integer* __nitmax, __CLPK_integer* __n, __CLPK_integer* __mmax, __CLPK_integer* __minp, __CLPK_integer* __nbmin, __CLPK_real* __abstol, __CLPK_real* __reltol, __CLPK_real* __pivmin, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __e2, __CLPK_integer* __nval, __CLPK_real* __ab, __CLPK_real* __c__, __CLPK_integer* __mout, __CLPK_integer* __nab, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rlaed0_(__CLPK_integer* __icompq, __CLPK_integer* __qsiz, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_real* __qstore, __CLPK_integer* __ldqs, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rlaed1_(__CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_integer* __indxq, __CLPK_real* __rho, __CLPK_integer* __cutpnt, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rlaed2_(__CLPK_integer* __k, __CLPK_integer* __n, __CLPK_integer* __n1, __CLPK_real* __d__, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_integer* __indxq, __CLPK_real* __rho, __CLPK_real* __z__, __CLPK_real* __dlamda, __CLPK_real* __w, __CLPK_real* __q2, __CLPK_integer* __indx, __CLPK_integer* __indxc, __CLPK_integer* __indxp, __CLPK_integer* __coltyp, __CLPK_integer* __info);

int Rlaed3_(__CLPK_integer* __k, __CLPK_integer* __n, __CLPK_integer* __n1, __CLPK_real* __d__, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_real* __rho, __CLPK_real* __dlamda, __CLPK_real* __q2, __CLPK_integer* __indx, __CLPK_integer* __ctot, __CLPK_real* __w, __CLPK_real* __s, __CLPK_integer* __info);

int Rlaed4_(__CLPK_integer* __n, __CLPK_integer* __i__, __CLPK_real* __d__, __CLPK_real* __z__, __CLPK_real* __delta, __CLPK_real* __rho, __CLPK_real* __dlam, __CLPK_integer* __info);

int Rlaed5_(__CLPK_integer* __i__, __CLPK_real* __d__, __CLPK_real* __z__, __CLPK_real* __delta, __CLPK_real* __rho, __CLPK_real* __dlam);

int Rlaed6_(__CLPK_integer* __kniter, __CLPK_logical* __orgati, __CLPK_real* __rho, __CLPK_real* __d__, __CLPK_real* __z__, __CLPK_real* __finit, __CLPK_real* __tau, __CLPK_integer* __info);

int Rlaed7_(__CLPK_integer* __icompq, __CLPK_integer* __n, __CLPK_integer* __qsiz, __CLPK_integer* __tlvls, __CLPK_integer* __curlvl, __CLPK_integer* __curpbm, __CLPK_real* __d__, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_integer* __indxq, __CLPK_real* __rho, __CLPK_integer* __cutpnt, __CLPK_real* __qstore, __CLPK_integer* __qptr, __CLPK_integer* __prmptr, __CLPK_integer* __perm, __CLPK_integer* __givptr, __CLPK_integer* __givcol, __CLPK_real* __givnum, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rlaed8_(__CLPK_integer* __icompq, __CLPK_integer* __k, __CLPK_integer* __n, __CLPK_integer* __qsiz, __CLPK_real* __d__, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_integer* __indxq, __CLPK_real* __rho, __CLPK_integer* __cutpnt, __CLPK_real* __z__, __CLPK_real* __dlamda, __CLPK_real* __q2, __CLPK_integer* __ldq2, __CLPK_real* __w, __CLPK_integer* __perm, __CLPK_integer* __givptr, __CLPK_integer* __givcol, __CLPK_real* __givnum, __CLPK_integer* __indxp, __CLPK_integer* __indx, __CLPK_integer* __info);

int Rlaed9_(__CLPK_integer* __k, __CLPK_integer* __kstart, __CLPK_integer* __kstop, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_real* __rho, __CLPK_real* __dlamda, __CLPK_real* __w, __CLPK_real* __s, __CLPK_integer* __lds, __CLPK_integer* __info);

int Rlaeda_(__CLPK_integer* __n, __CLPK_integer* __tlvls, __CLPK_integer* __curlvl, __CLPK_integer* __curpbm, __CLPK_integer* __prmptr, __CLPK_integer* __perm, __CLPK_integer* __givptr, __CLPK_integer* __givcol, __CLPK_real* __givnum, __CLPK_real* __q, __CLPK_integer* __qptr, __CLPK_real* __z__, __CLPK_real* __ztemp, __CLPK_integer* __info);

int Rlaein_(__CLPK_logical* __rightv, __CLPK_logical* __noinit, __CLPK_integer* __n, __CLPK_real* __h__, __CLPK_integer* __ldh, __CLPK_real* __wr, __CLPK_real* __wi, __CLPK_real* __vr, __CLPK_real* __vi, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __work, __CLPK_real* __eps3, __CLPK_real* __smlnum, __CLPK_real* __bignum, __CLPK_integer* __info);

int Rlaev2_(__CLPK_real* __a, __CLPK_real* __b, __CLPK_real* __c__, __CLPK_real* __rt1, __CLPK_real* __rt2, __CLPK_real* __cs1, __CLPK_real* __sn1);

int Rlaexc_(__CLPK_logical* __wantq, __CLPK_integer* __n, __CLPK_real* __t, __CLPK_integer* __ldt, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_integer* __j1, __CLPK_integer* __n1, __CLPK_integer* __n2, __CLPK_real* __work, __CLPK_integer* __info);

int Rlag2_(__CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __safmin, __CLPK_real* __scale1, __CLPK_real* __scale2, __CLPK_real* __wr1, __CLPK_real* __wr2, __CLPK_real* __wi);

int Rlag2d_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __sa, __CLPK_integer* __ldsa, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Rlags2_(__CLPK_logical* __upper, __CLPK_real* __a1, __CLPK_real* __a2, __CLPK_real* __a3, __CLPK_real* __b1, __CLPK_real* __b2, __CLPK_real* __b3, __CLPK_real* __csu, __CLPK_real* __snu, __CLPK_real* __csv, __CLPK_real* __snv, __CLPK_real* __csq, __CLPK_real* __snq);

int Rlagtf_(__CLPK_integer* __n, __CLPK_real* __a, __CLPK_real* __lambda, __CLPK_real* __b, __CLPK_real* __c__, __CLPK_real* __tol, __CLPK_real* __d__, __CLPK_integer* __in, __CLPK_integer* __info);

int Rlagtm_(char* __trans, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __alpha, __CLPK_real* __dl, __CLPK_real* __d__, __CLPK_real* __du, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __beta, __CLPK_real* __b, __CLPK_integer* __ldb);

int Rlagts_(__CLPK_integer* __job, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_real* __b, __CLPK_real* __c__, __CLPK_real* __d__, __CLPK_integer* __in, __CLPK_real* __y, __CLPK_real* __tol, __CLPK_integer* __info);

int Rlagv2_(__CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __alphar, __CLPK_real* __alphai, __CLPK_real* __beta, __CLPK_real* __csl, __CLPK_real* __snl, __CLPK_real* __csr, __CLPK_real* __snr);

int Rlahqr_(__CLPK_logical* __wantt, __CLPK_logical* __wantz, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __h__, __CLPK_integer* __ldh, __CLPK_real* __wr, __CLPK_real* __wi, __CLPK_integer* __iloz, __CLPK_integer* __ihiz, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_integer* __info);

int Rlahr2_(__CLPK_integer* __n, __CLPK_integer* __k, __CLPK_integer* __nb, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __t, __CLPK_integer* __ldt, __CLPK_real* __y, __CLPK_integer* __ldy);

int Rlahrd_(__CLPK_integer* __n, __CLPK_integer* __k, __CLPK_integer* __nb, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __t, __CLPK_integer* __ldt, __CLPK_real* __y, __CLPK_integer* __ldy);

int Rlaic1_(__CLPK_integer* __job, __CLPK_integer* __j, __CLPK_real* __x, __CLPK_real* __sest, __CLPK_real* __w, __CLPK_real* __gamma, __CLPK_real* __seRtpr, __CLPK_real* __s, __CLPK_real* __c__);

__CLPK_logical Rlaisnan_(__CLPK_real* __sin1, __CLPK_real* __sin2);

int Rlaln2_(__CLPK_logical* __ltrans, __CLPK_integer* __na, __CLPK_integer* __nw, __CLPK_real* __smin, __CLPK_real* __ca, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __d1, __CLPK_real* __d2, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __wr, __CLPK_real* __wi, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __scale, __CLPK_real* __xnorm, __CLPK_integer* __info);

int Rlals0_(__CLPK_integer* __icompq, __CLPK_integer* __nl, __CLPK_integer* __nr, __CLPK_integer* __sqre, __CLPK_integer* __nrhs, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __bx, __CLPK_integer* __ldbx, __CLPK_integer* __perm, __CLPK_integer* __givptr, __CLPK_integer* __givcol, __CLPK_integer* __ldgcol, __CLPK_real* __givnum, __CLPK_integer* __ldgnum, __CLPK_real* __poles, __CLPK_real* __difl, __CLPK_real* __difr, __CLPK_real* __z__, __CLPK_integer* __k, __CLPK_real* __c__, __CLPK_real* __s, __CLPK_real* __work, __CLPK_integer* __info);

int Rlalsa_(__CLPK_integer* __icompq, __CLPK_integer* __smlsiz, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __bx, __CLPK_integer* __ldbx, __CLPK_real* __u, __CLPK_integer* __ldu, __CLPK_real* __vt, __CLPK_integer* __k, __CLPK_real* __difl, __CLPK_real* __difr, __CLPK_real* __z__, __CLPK_real* __poles, __CLPK_integer* __givptr, __CLPK_integer* __givcol, __CLPK_integer* __ldgcol, __CLPK_integer* __perm, __CLPK_real* __givnum, __CLPK_real* __c__, __CLPK_real* __s, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rlalsd_(char* __uplo, __CLPK_integer* __smlsiz, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __rcond, __CLPK_integer* __rank, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

__CLPK_real Rlamc3_(__CLPK_real* a, __CLPK_real* b);

__CLPK_real Rlamch_(char* cmach);

int Rlamrg_(__CLPK_integer* __n1, __CLPK_integer* __n2, __CLPK_real* __a, __CLPK_integer* __Rtrd1, __CLPK_integer* __Rtrd2, __CLPK_integer* __index);

__CLPK_integer Rlaneg_(__CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __lld, __CLPK_real* __sigma, __CLPK_real* __pivmin, __CLPK_integer* __r__);

__CLPK_real Rlangb_(char* __norm, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __work);

__CLPK_real Rlange_(char* __norm, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __work);

__CLPK_real Rlangt_(char* __norm, __CLPK_integer* __n, __CLPK_real* __dl, __CLPK_real* __d__, __CLPK_real* __du);

__CLPK_real Rlanhs_(char* __norm, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __work);

__CLPK_real Rlansb_(char* __norm, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __work);

__CLPK_real Rlansf_(char* __norm, char* __transr, char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_real* __work);

__CLPK_real Rlansp_(char* __norm, char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __work);

__CLPK_real Rlanst_(char* __norm, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e);

__CLPK_real Rlansy_(char* __norm, char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __work);

__CLPK_real Rlantb_(char* __norm, char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __work);

__CLPK_real Rlantp_(char* __norm, char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __work);

__CLPK_real Rlantr_(char* __norm, char* __uplo, char* __diag, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __work);

int Rlanv2_(__CLPK_real* __a, __CLPK_real* __b, __CLPK_real* __c__, __CLPK_real* __d__, __CLPK_real* __rt1r, __CLPK_real* __rt1i, __CLPK_real* __rt2r, __CLPK_real* __rt2i, __CLPK_real* __cs, __CLPK_real* __sn);

int Rlapll_(__CLPK_integer* __n, __CLPK_real* __x, __CLPK_integer* __incx, __CLPK_real* __y, __CLPK_integer* __incy, __CLPK_real* __ssmin);

int Rlapmt_(__CLPK_logical* __forwrd, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_integer* __k);

__CLPK_real Rlapy2_(__CLPK_real* __x, __CLPK_real* __y);

__CLPK_real Rlapy3_(__CLPK_real* __x, __CLPK_real* __y, __CLPK_real* __z__);

int Rlaqgb_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __r__, __CLPK_real* __c__, __CLPK_real* __rowcnd, __CLPK_real* __colcnd, __CLPK_real* __amax, char* __equed);

int Rlaqge_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __r__, __CLPK_real* __c__, __CLPK_real* __rowcnd, __CLPK_real* __colcnd, __CLPK_real* __amax, char* __equed);

int Rlaqp2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __offset, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __jpvt, __CLPK_real* __tau, __CLPK_real* __vn1, __CLPK_real* __vn2, __CLPK_real* __work);

int Rlaqps_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __offset, __CLPK_integer* __nb, __CLPK_integer* __kb, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __jpvt, __CLPK_real* __tau, __CLPK_real* __vn1, __CLPK_real* __vn2, __CLPK_real* __auxv, __CLPK_real* __f, __CLPK_integer* __ldf);

int Rlaqr0_(__CLPK_logical* __wantt, __CLPK_logical* __wantz, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __h__, __CLPK_integer* __ldh, __CLPK_real* __wr, __CLPK_real* __wi, __CLPK_integer* __iloz, __CLPK_integer* __ihiz, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rlaqr1_(__CLPK_integer* __n, __CLPK_real* __h__, __CLPK_integer* __ldh, __CLPK_real* __sr1, __CLPK_real* __si1, __CLPK_real* __sr2, __CLPK_real* __si2, __CLPK_real* __v);

int Rlaqr2_(__CLPK_logical* __wantt, __CLPK_logical* __wantz, __CLPK_integer* __n, __CLPK_integer* __ktop, __CLPK_integer* __kbot, __CLPK_integer* __nw, __CLPK_real* __h__, __CLPK_integer* __ldh, __CLPK_integer* __iloz, __CLPK_integer* __ihiz, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_integer* __ns, __CLPK_integer* __nd, __CLPK_real* __sr, __CLPK_real* __si, __CLPK_real* __v, __CLPK_integer* __ldv, __CLPK_integer* __nh, __CLPK_real* __t, __CLPK_integer* __ldt, __CLPK_integer* __nv, __CLPK_real* __wv, __CLPK_integer* __ldwv, __CLPK_real* __work, __CLPK_integer* __lwork);

int Rlaqr3_(__CLPK_logical* __wantt, __CLPK_logical* __wantz, __CLPK_integer* __n, __CLPK_integer* __ktop, __CLPK_integer* __kbot, __CLPK_integer* __nw, __CLPK_real* __h__, __CLPK_integer* __ldh, __CLPK_integer* __iloz, __CLPK_integer* __ihiz, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_integer* __ns, __CLPK_integer* __nd, __CLPK_real* __sr, __CLPK_real* __si, __CLPK_real* __v, __CLPK_integer* __ldv, __CLPK_integer* __nh, __CLPK_real* __t, __CLPK_integer* __ldt, __CLPK_integer* __nv, __CLPK_real* __wv, __CLPK_integer* __ldwv, __CLPK_real* __work, __CLPK_integer* __lwork);

int Rlaqr4_(__CLPK_logical* __wantt, __CLPK_logical* __wantz, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __h__, __CLPK_integer* __ldh, __CLPK_real* __wr, __CLPK_real* __wi, __CLPK_integer* __iloz, __CLPK_integer* __ihiz, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rlaqr5_(__CLPK_logical* __wantt, __CLPK_logical* __wantz, __CLPK_integer* __kacc22, __CLPK_integer* __n, __CLPK_integer* __ktop, __CLPK_integer* __kbot, __CLPK_integer* __nshfts, __CLPK_real* __sr, __CLPK_real* __si, __CLPK_real* __h__, __CLPK_integer* __ldh, __CLPK_integer* __iloz, __CLPK_integer* __ihiz, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __v, __CLPK_integer* __ldv, __CLPK_real* __u, __CLPK_integer* __ldu, __CLPK_integer* __nv, __CLPK_real* __wv, __CLPK_integer* __ldwv, __CLPK_integer* __nh, __CLPK_real* __wh, __CLPK_integer* __ldwh);

int Rlaqsb_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, char* __equed);

int Rlaqsp_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, char* __equed);

int Rlaqsy_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, char* __equed);

int Rlaqtr_(__CLPK_logical* __ltran, __CLPK_logical* __l__CLPK_real, __CLPK_integer* __n, __CLPK_real* __t, __CLPK_integer* __ldt, __CLPK_real* __b, __CLPK_real* __w, __CLPK_real* __scale, __CLPK_real* __x, __CLPK_real* __work, __CLPK_integer* __info);

int Rlar1v_(__CLPK_integer* __n, __CLPK_integer* __b1, __CLPK_integer* __bn, __CLPK_real* __lambda, __CLPK_real* __d__, __CLPK_real* __l, __CLPK_real* __ld, __CLPK_real* __lld, __CLPK_real* __pivmin, __CLPK_real* __gaptol, __CLPK_real* __z__, __CLPK_logical* __wantnc, __CLPK_integer* __negcnt, __CLPK_real* __ztz, __CLPK_real* __mingma, __CLPK_integer* __r__, __CLPK_integer* __isuppz, __CLPK_real* __nrminv, __CLPK_real* __resid, __CLPK_real* __rqcorr, __CLPK_real* __work);

int Rlar2v_(__CLPK_integer* __n, __CLPK_real* __x, __CLPK_real* __y, __CLPK_real* __z__, __CLPK_integer* __incx, __CLPK_real* __c__, __CLPK_real* __s, __CLPK_integer* __incc);

int Rlarf_(char* __side, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __v, __CLPK_integer* __incv, __CLPK_real* __tau, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work);

int Rlarfb_(char* __side, char* __trans, char* __direct, char* __storev, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __v, __CLPK_integer* __ldv, __CLPK_real* __t, __CLPK_integer* __ldt, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __ldwork);

int Rlarfg_(__CLPK_integer* __n, __CLPK_real* __alpha, __CLPK_real* __x, __CLPK_integer* __incx, __CLPK_real* __tau);

int Rlarfp_(__CLPK_integer* __n, __CLPK_real* __alpha, __CLPK_real* __x, __CLPK_integer* __incx, __CLPK_real* __tau);

int Rlarft_(char* __direct, char* __storev, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __v, __CLPK_integer* __ldv, __CLPK_real* __tau, __CLPK_real* __t, __CLPK_integer* __ldt);

int Rlarfx_(char* __side, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __v, __CLPK_real* __tau, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work);

int Rlargv_(__CLPK_integer* __n, __CLPK_real* __x, __CLPK_integer* __incx, __CLPK_real* __y, __CLPK_integer* __incy, __CLPK_real* __c__, __CLPK_integer* __incc);

int Rlarnv_(__CLPK_integer* __idist, __CLPK_integer* __iseed, __CLPK_integer* __n, __CLPK_real* __x);

int Rlarra_(__CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __e2, __CLPK_real* __spltol, __CLPK_real* __tnrm, __CLPK_integer* __nsplit, __CLPK_integer* __isplit, __CLPK_integer* __info);

int Rlarrb_(__CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __lld, __CLPK_integer* __ifirst, __CLPK_integer* __ilast, __CLPK_real* __rtol1, __CLPK_real* __rtol2, __CLPK_integer* __offset, __CLPK_real* __w, __CLPK_real* __wgap, __CLPK_real* __werr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_real* __pivmin, __CLPK_real* __spdiam, __CLPK_integer* __twist, __CLPK_integer* __info);

int Rlarrc_(char* __jobt, __CLPK_integer* __n, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __pivmin, __CLPK_integer* __eigcnt, __CLPK_integer* __lcnt, __CLPK_integer* __rcnt, __CLPK_integer* __info);

int Rlarrd_(char* __range, char* __order, __CLPK_integer* __n, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __gers, __CLPK_real* __reltol, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __e2, __CLPK_real* __pivmin, __CLPK_integer* __nsplit, __CLPK_integer* __isplit, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_real* __werr, __CLPK_real* __wl, __CLPK_real* __wu, __CLPK_integer* __iblock, __CLPK_integer* __indexw, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rlarre_(char* __range, __CLPK_integer* __n, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __e2, __CLPK_real* __rtol1, __CLPK_real* __rtol2, __CLPK_real* __spltol, __CLPK_integer* __nsplit, __CLPK_integer* __isplit, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_real* __werr, __CLPK_real* __wgap, __CLPK_integer* __iblock, __CLPK_integer* __indexw, __CLPK_real* __gers, __CLPK_real* __pivmin, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rlarrf_(__CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __l, __CLPK_real* __ld, __CLPK_integer* __clRtrt, __CLPK_integer* __clend, __CLPK_real* __w, __CLPK_real* __wgap, __CLPK_real* __werr, __CLPK_real* __spdiam, __CLPK_real* __clgapl, __CLPK_real* __clgapr, __CLPK_real* __pivmin, __CLPK_real* __sigma, __CLPK_real* __dplus, __CLPK_real* __lplus, __CLPK_real* __work, __CLPK_integer* __info);

int Rlarrj_(__CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e2, __CLPK_integer* __ifirst, __CLPK_integer* __ilast, __CLPK_real* __rtol, __CLPK_integer* __offset, __CLPK_real* __w, __CLPK_real* __werr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_real* __pivmin, __CLPK_real* __spdiam, __CLPK_integer* __info);

int Rlarrk_(__CLPK_integer* __n, __CLPK_integer* __iw, __CLPK_real* __gl, __CLPK_real* __gu, __CLPK_real* __d__, __CLPK_real* __e2, __CLPK_real* __pivmin, __CLPK_real* __reltol, __CLPK_real* __w, __CLPK_real* __werr, __CLPK_integer* __info);

int Rlarrr_(__CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_integer* __info);

int Rlarrv_(__CLPK_integer* __n, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_real* __d__, __CLPK_real* __l, __CLPK_real* __pivmin, __CLPK_integer* __isplit, __CLPK_integer* __m, __CLPK_integer* __dol, __CLPK_integer* __dou, __CLPK_real* __minrgp, __CLPK_real* __rtol1, __CLPK_real* __rtol2, __CLPK_real* __w, __CLPK_real* __werr, __CLPK_real* __wgap, __CLPK_integer* __iblock, __CLPK_integer* __indexw, __CLPK_real* __gers, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_integer* __isuppz, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rlarscl2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __x, __CLPK_integer* __ldx);

int Rlartg_(__CLPK_real* __f, __CLPK_real* __g, __CLPK_real* __cs, __CLPK_real* __sn, __CLPK_real* __r__);

int Rlartv_(__CLPK_integer* __n, __CLPK_real* __x, __CLPK_integer* __incx, __CLPK_real* __y, __CLPK_integer* __incy, __CLPK_real* __c__, __CLPK_real* __s, __CLPK_integer* __incc);

int Rlaruv_(__CLPK_integer* __iseed, __CLPK_integer* __n, __CLPK_real* __x);

int Rlarz_(char* __side, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __l, __CLPK_real* __v, __CLPK_integer* __incv, __CLPK_real* __tau, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work);

int Rlarzb_(char* __side, char* __trans, char* __direct, char* __storev, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_integer* __l, __CLPK_real* __v, __CLPK_integer* __ldv, __CLPK_real* __t, __CLPK_integer* __ldt, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __ldwork);

int Rlarzt_(char* __direct, char* __storev, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __v, __CLPK_integer* __ldv, __CLPK_real* __tau, __CLPK_real* __t, __CLPK_integer* __ldt);

int Rlas2_(__CLPK_real* __f, __CLPK_real* __g, __CLPK_real* __h__, __CLPK_real* __ssmin, __CLPK_real* __ssmax);

int Rlascl_(char* __type__, __CLPK_integer* __kl, __CLPK_integer* __ku, __CLPK_real* __cfrom, __CLPK_real* __cto, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Rlascl2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __x, __CLPK_integer* __ldx);

int Rlasd0_(__CLPK_integer* __n, __CLPK_integer* __sqre, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __u, __CLPK_integer* __ldu, __CLPK_real* __vt, __CLPK_integer* __ldvt, __CLPK_integer* __smlsiz, __CLPK_integer* __iwork, __CLPK_real* __work, __CLPK_integer* __info);

int Rlasd1_(__CLPK_integer* __nl, __CLPK_integer* __nr, __CLPK_integer* __sqre, __CLPK_real* __d__, __CLPK_real* __alpha, __CLPK_real* __beta, __CLPK_real* __u, __CLPK_integer* __ldu, __CLPK_real* __vt, __CLPK_integer* __ldvt, __CLPK_integer* __idxq, __CLPK_integer* __iwork, __CLPK_real* __work, __CLPK_integer* __info);

int Rlasd2_(__CLPK_integer* __nl, __CLPK_integer* __nr, __CLPK_integer* __sqre, __CLPK_integer* __k, __CLPK_real* __d__, __CLPK_real* __z__, __CLPK_real* __alpha, __CLPK_real* __beta, __CLPK_real* __u, __CLPK_integer* __ldu, __CLPK_real* __vt, __CLPK_integer* __ldvt, __CLPK_real* __dsigma, __CLPK_real* __u2, __CLPK_integer* __ldu2, __CLPK_real* __vt2, __CLPK_integer* __ldvt2, __CLPK_integer* __idxp, __CLPK_integer* __idx, __CLPK_integer* __idxc, __CLPK_integer* __idxq, __CLPK_integer* __coltyp, __CLPK_integer* __info);

int Rlasd3_(__CLPK_integer* __nl, __CLPK_integer* __nr, __CLPK_integer* __sqre, __CLPK_integer* __k, __CLPK_real* __d__, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_real* __dsigma, __CLPK_real* __u, __CLPK_integer* __ldu, __CLPK_real* __u2, __CLPK_integer* __ldu2, __CLPK_real* __vt, __CLPK_integer* __ldvt, __CLPK_real* __vt2, __CLPK_integer* __ldvt2, __CLPK_integer* __idxc, __CLPK_integer* __ctot, __CLPK_real* __z__, __CLPK_integer* __info);

int Rlasd4_(__CLPK_integer* __n, __CLPK_integer* __i__, __CLPK_real* __d__, __CLPK_real* __z__, __CLPK_real* __delta, __CLPK_real* __rho, __CLPK_real* __sigma, __CLPK_real* __work, __CLPK_integer* __info);

int Rlasd5_(__CLPK_integer* __i__, __CLPK_real* __d__, __CLPK_real* __z__, __CLPK_real* __delta, __CLPK_real* __rho, __CLPK_real* __dsigma, __CLPK_real* __work);

int Rlasd6_(__CLPK_integer* __icompq, __CLPK_integer* __nl, __CLPK_integer* __nr, __CLPK_integer* __sqre, __CLPK_real* __d__, __CLPK_real* __vf, __CLPK_real* __vl, __CLPK_real* __alpha, __CLPK_real* __beta, __CLPK_integer* __idxq, __CLPK_integer* __perm, __CLPK_integer* __givptr, __CLPK_integer* __givcol, __CLPK_integer* __ldgcol, __CLPK_real* __givnum, __CLPK_integer* __ldgnum, __CLPK_real* __poles, __CLPK_real* __difl, __CLPK_real* __difr, __CLPK_real* __z__, __CLPK_integer* __k, __CLPK_real* __c__, __CLPK_real* __s, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rlasd7_(__CLPK_integer* __icompq, __CLPK_integer* __nl, __CLPK_integer* __nr, __CLPK_integer* __sqre, __CLPK_integer* __k, __CLPK_real* __d__, __CLPK_real* __z__, __CLPK_real* __zw, __CLPK_real* __vf, __CLPK_real* __vfw, __CLPK_real* __vl, __CLPK_real* __vlw, __CLPK_real* __alpha, __CLPK_real* __beta, __CLPK_real* __dsigma, __CLPK_integer* __idx, __CLPK_integer* __idxp, __CLPK_integer* __idxq, __CLPK_integer* __perm, __CLPK_integer* __givptr, __CLPK_integer* __givcol, __CLPK_integer* __ldgcol, __CLPK_real* __givnum, __CLPK_integer* __ldgnum, __CLPK_real* __c__, __CLPK_real* __s, __CLPK_integer* __info);

int Rlasd8_(__CLPK_integer* __icompq, __CLPK_integer* __k, __CLPK_real* __d__, __CLPK_real* __z__, __CLPK_real* __vf, __CLPK_real* __vl, __CLPK_real* __difl, __CLPK_real* __difr, __CLPK_integer* __lddifr, __CLPK_real* __dsigma, __CLPK_real* __work, __CLPK_integer* __info);

int Rlasda_(__CLPK_integer* __icompq, __CLPK_integer* __smlsiz, __CLPK_integer* __n, __CLPK_integer* __sqre, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __u, __CLPK_integer* __ldu, __CLPK_real* __vt, __CLPK_integer* __k, __CLPK_real* __difl, __CLPK_real* __difr, __CLPK_real* __z__, __CLPK_real* __poles, __CLPK_integer* __givptr, __CLPK_integer* __givcol, __CLPK_integer* __ldgcol, __CLPK_integer* __perm, __CLPK_real* __givnum, __CLPK_real* __c__, __CLPK_real* __s, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rlasdq_(char* __uplo, __CLPK_integer* __sqre, __CLPK_integer* __n, __CLPK_integer* __ncvt, __CLPK_integer* __nru, __CLPK_integer* __ncc, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __vt, __CLPK_integer* __ldvt, __CLPK_real* __u, __CLPK_integer* __ldu, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __info);

int Rlasdt_(__CLPK_integer* __n, __CLPK_integer* __lvl, __CLPK_integer* __nd, __CLPK_integer* __inode, __CLPK_integer* __ndiml, __CLPK_integer* __ndimr, __CLPK_integer* __msub);

int Rlaset_(char* __uplo, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __alpha, __CLPK_real* __beta, __CLPK_real* __a, __CLPK_integer* __lda);

int Rlasq1_(__CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __work, __CLPK_integer* __info);

int Rlasq2_(__CLPK_integer* __n, __CLPK_real* __z__, __CLPK_integer* __info);

int Rlasq3_(__CLPK_integer* __i0, __CLPK_integer* __n0, __CLPK_real* __z__, __CLPK_integer* __pp, __CLPK_real* __dmin__, __CLPK_real* __sigma, __CLPK_real* __desig, __CLPK_real* __qmax, __CLPK_integer* __nfail, __CLPK_integer* __iter, __CLPK_integer* __ndiv, __CLPK_logical* __ieee, __CLPK_integer* __ttype, __CLPK_real* __dmin1, __CLPK_real* __dmin2, __CLPK_real* __dn, __CLPK_real* __dn1, __CLPK_real* __dn2, __CLPK_real* __g, __CLPK_real* __tau);

int Rlasq4_(__CLPK_integer* __i0, __CLPK_integer* __n0, __CLPK_real* __z__, __CLPK_integer* __pp, __CLPK_integer* __n0in, __CLPK_real* __dmin__, __CLPK_real* __dmin1, __CLPK_real* __dmin2, __CLPK_real* __dn, __CLPK_real* __dn1, __CLPK_real* __dn2, __CLPK_real* __tau, __CLPK_integer* __ttype, __CLPK_real* __g);

int Rlasq5_(__CLPK_integer* __i0, __CLPK_integer* __n0, __CLPK_real* __z__, __CLPK_integer* __pp, __CLPK_real* __tau, __CLPK_real* __dmin__, __CLPK_real* __dmin1, __CLPK_real* __dmin2, __CLPK_real* __dn, __CLPK_real* __dnm1, __CLPK_real* __dnm2, __CLPK_logical* __ieee);

int Rlasq6_(__CLPK_integer* __i0, __CLPK_integer* __n0, __CLPK_real* __z__, __CLPK_integer* __pp, __CLPK_real* __dmin__, __CLPK_real* __dmin1, __CLPK_real* __dmin2, __CLPK_real* __dn, __CLPK_real* __dnm1, __CLPK_real* __dnm2);

int Rlasr_(char* __side, char* __pivot, char* __direct, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __c__, __CLPK_real* __s, __CLPK_real* __a, __CLPK_integer* __lda);

int Rlasrt_(char* __id, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_integer* __info);

int Rlassq_(__CLPK_integer* __n, __CLPK_real* __x, __CLPK_integer* __incx, __CLPK_real* __scale, __CLPK_real* __sumsq);

int Rlasv2_(__CLPK_real* __f, __CLPK_real* __g, __CLPK_real* __h__, __CLPK_real* __ssmin, __CLPK_real* __ssmax, __CLPK_real* __snr, __CLPK_real* __csr, __CLPK_real* __snl, __CLPK_real* __csl);

int Rlaswp_(__CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __k1, __CLPK_integer* __k2, __CLPK_integer* __ipiv, __CLPK_integer* __incx);

int Rlasy2_(__CLPK_logical* __ltranl, __CLPK_logical* __ltranr, __CLPK_integer* __isgn, __CLPK_integer* __n1, __CLPK_integer* __n2, __CLPK_real* __tl, __CLPK_integer* __ldtl, __CLPK_real* __tr, __CLPK_integer* __ldtr, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __scale, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __xnorm, __CLPK_integer* __info);

int Rlasyf_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nb, __CLPK_integer* __kb, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_real* __w, __CLPK_integer* __ldw, __CLPK_integer* __info);

int Rlatbs_(char* __uplo, char* __trans, char* __diag, char* __normin, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __x, __CLPK_real* __scale, __CLPK_real* __cnorm, __CLPK_integer* __info);

int Rlatdf_(__CLPK_integer* __ijob, __CLPK_integer* __n, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __rhs, __CLPK_real* __rdsum, __CLPK_real* __rdscal, __CLPK_integer* __ipiv, __CLPK_integer* __jpiv);

int Rlatps_(char* __uplo, char* __trans, char* __diag, char* __normin, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __x, __CLPK_real* __scale, __CLPK_real* __cnorm, __CLPK_integer* __info);

int Rlatrd_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nb, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __e, __CLPK_real* __tau, __CLPK_real* __w, __CLPK_integer* __ldw);

int Rlatrs_(char* __uplo, char* __trans, char* __diag, char* __normin, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __x, __CLPK_real* __scale, __CLPK_real* __cnorm, __CLPK_integer* __info);

int Rlatrz_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __l, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work);

int Rlatzm_(char* __side, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __v, __CLPK_integer* __incv, __CLPK_real* __tau, __CLPK_real* __c1, __CLPK_real* __c2, __CLPK_integer* __ldc, __CLPK_real* __work);

int Rlauu2_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Rlauum_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

__CLPK_integer Rmaxloc_(__CLPK_real* __a, __CLPK_integer* __dimm);

int Ropgtr_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __tau, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_real* __work, __CLPK_integer* __info);

int Ropmtr_(char* __side, char* __uplo, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __tau, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __info);

int Rorg2l_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __info);

int Rorg2r_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __info);

int Rorgbr_(char* __vect, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rorghr_(__CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rorgl2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __info);

int Rorglq_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rorgql_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rorgqr_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rorgr2_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __info);

int Rorgrq_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rorgtr_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rorm2l_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __info);

int Rorm2r_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __info);

int Rormbr_(char* __vect, char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rormhr_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __ilo, __CLPK_integer* __ihi, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rorml2_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __info);

int Rormlq_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rormql_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rormqr_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rormr2_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __info);

int Rormr3_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_integer* __l, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __info);

int Rormrq_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rormrz_(char* __side, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_integer* __l, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rormtr_(char* __side, char* __uplo, char* __trans, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rpbcon_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rpbequ_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, __CLPK_integer* __info);

int Rpbrfs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_integer* __nrhs, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __afb, __CLPK_integer* __ldafb, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int RpbRtf_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_integer* __info);

int Rpbsv_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_integer* __nrhs, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rpbsvx_(char* __fact, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_integer* __nrhs, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __afb, __CLPK_integer* __ldafb, char* __equed, __CLPK_real* __s, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rpbtf2_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_integer* __info);

int Rpbtrf_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_integer* __info);

int Rpbtrs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_integer* __nrhs, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rpftrf_(char* __transr, char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __info);

int Rpftri_(char* __transr, char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __info);

int Rpftrs_(char* __transr, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rpocon_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rpoequ_(__CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, __CLPK_integer* __info);

int Rpoequb_(__CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, __CLPK_integer* __info);

int Rporfs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __af, __CLPK_integer* __ldaf, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rposv_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rposvx_(char* __fact, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __af, __CLPK_integer* __ldaf, char* __equed, __CLPK_real* __s, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rpotf2_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Rpotrf_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Rpotri_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Rpotrs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rppcon_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rppequ_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, __CLPK_integer* __info);

int Rpprfs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __ap, __CLPK_real* __afp, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rppsv_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __ap, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rppsvx_(char* __fact, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __ap, __CLPK_real* __afp, char* __equed, __CLPK_real* __s, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rpptrf_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_integer* __info);

int Rpptri_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_integer* __info);

int Rpptrs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __ap, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rpstf2_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __piv, __CLPK_integer* __rank, __CLPK_real* __tol, __CLPK_real* __work, __CLPK_integer* __info);

int Rpstrf_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __piv, __CLPK_integer* __rank, __CLPK_real* __tol, __CLPK_real* __work, __CLPK_integer* __info);

int Rptcon_(__CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_real* __work, __CLPK_integer* __info);

int Rpteqr_(char* __compz, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __info);

int Rptrfs_(__CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __df, __CLPK_real* __ef, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __info);

int Rptsv_(__CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rptsvx_(char* __fact, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __df, __CLPK_real* __ef, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __info);

int Rpttrf_(__CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_integer* __info);

int Rpttrs_(__CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rptts2_(__CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __b, __CLPK_integer* __ldb);

int Rrscl_(__CLPK_integer* __n, __CLPK_real* __sa, __CLPK_real* __sx, __CLPK_integer* __incx);

int Rsbev_(char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __info);

int Rsbevd_(char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Rsbevx_(char* __jobz, char* __range, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __ifail, __CLPK_integer* __info);

int Rsbgst_(char* __vect, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __ka, __CLPK_integer* __kb, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __bb, __CLPK_integer* __ldbb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __work, __CLPK_integer* __info);

int Rsbgv_(char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __ka, __CLPK_integer* __kb, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __bb, __CLPK_integer* __ldbb, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __info);

int Rsbgvd_(char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __ka, __CLPK_integer* __kb, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __bb, __CLPK_integer* __ldbb, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Rsbgvx_(char* __jobz, char* __range, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __ka, __CLPK_integer* __kb, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __bb, __CLPK_integer* __ldbb, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __ifail, __CLPK_integer* __info);

int Rsbtrd_(char* __vect, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_real* __work, __CLPK_integer* __info);

int Rsfrk_(char* __transr, char* __uplo, char* __trans, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_real* __alpha, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __beta, __CLPK_real* __c__);

int Rspcon_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_integer* __ipiv, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rspev_(char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __info);

int Rspevd_(char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Rspevx_(char* __jobz, char* __range, char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __ifail, __CLPK_integer* __info);

int Rspgst_(__CLPK_integer* __itype, char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __bp, __CLPK_integer* __info);

int Rspgv_(__CLPK_integer* __itype, char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __bp, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __info);

int Rspgvd_(__CLPK_integer* __itype, char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __bp, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Rspgvx_(__CLPK_integer* __itype, char* __jobz, char* __range, char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __bp, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __ifail, __CLPK_integer* __info);

int Rsprfs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __ap, __CLPK_real* __afp, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rspsv_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __ap, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rspsvx_(char* __fact, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __ap, __CLPK_real* __afp, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rsptrd_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __tau, __CLPK_integer* __info);

int Rsptrf_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_integer* __ipiv, __CLPK_integer* __info);

int Rsptri_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_integer* __ipiv, __CLPK_real* __work, __CLPK_integer* __info);

int Rsptrs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __ap, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rstebz_(char* __range, char* __order, __CLPK_integer* __n, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_integer* __m, __CLPK_integer* __nsplit, __CLPK_real* __w, __CLPK_integer* __iblock, __CLPK_integer* __isplit, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rstedc_(char* __compz, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Rstegr_(char* __jobz, char* __range, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_integer* __isuppz, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Rstein_(__CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_integer* __iblock, __CLPK_integer* __isplit, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __ifail, __CLPK_integer* __info);

int Rstemr_(char* __jobz, char* __range, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_integer* __nzc, __CLPK_integer* __isuppz, __CLPK_logical* __tryrac, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Rsteqr_(char* __compz, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __info);

int Rsterf_(__CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_integer* __info);

int Rstev_(char* __jobz, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __info);

int Rstevd_(char* __jobz, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Rstevr_(char* __jobz, char* __range, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_integer* __isuppz, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Rstevx_(char* __jobz, char* __range, __CLPK_integer* __n, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __ifail, __CLPK_integer* __info);

int Rsycon_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_real* __anorm, __CLPK_real* __rcond, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rsyequb_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __s, __CLPK_real* __scond, __CLPK_real* __amax, __CLPK_real* __work, __CLPK_integer* __info);

int Rsyev_(char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __w, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rsyevd_(char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __w, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Rsyevr_(char* __jobz, char* __range, char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_integer* __isuppz, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Rsyevx_(char* __jobz, char* __range, char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __ifail, __CLPK_integer* __info);

int Rsygs2_(__CLPK_integer* __itype, char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rsygst_(__CLPK_integer* __itype, char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rsygv_(__CLPK_integer* __itype, char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __w, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rsygvd_(__CLPK_integer* __itype, char* __jobz, char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __w, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Rsygvx_(__CLPK_integer* __itype, char* __jobz, char* __range, char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __vl, __CLPK_real* __vu, __CLPK_integer* __il, __CLPK_integer* __iu, __CLPK_real* __abstol, __CLPK_integer* __m, __CLPK_real* __w, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __ifail, __CLPK_integer* __info);

int Rsyrfs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __af, __CLPK_integer* __ldaf, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rsysv_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rsysvx_(char* __fact, char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __af, __CLPK_integer* __ldaf, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __rcond, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rsytd2_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __tau, __CLPK_integer* __info);

int Rsytf2_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_integer* __info);

int Rsytrd_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __d__, __CLPK_real* __e, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rsytrf_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rsytri_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_real* __work, __CLPK_integer* __info);

int Rsytrs_(char* __uplo, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __ipiv, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rtbcon_(char* __norm, char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __rcond, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rtbrfs_(char* __uplo, char* __trans, char* __diag, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_integer* __nrhs, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rtbtrs_(char* __uplo, char* __trans, char* __diag, __CLPK_integer* __n, __CLPK_integer* __kd, __CLPK_integer* __nrhs, __CLPK_real* __ab, __CLPK_integer* __ldab, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rtfsm_(char* __transr, char* __side, char* __uplo, char* __trans, char* __diag, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __alpha, __CLPK_real* __a, __CLPK_real* __b, __CLPK_integer* __ldb);

int Rtftri_(char* __transr, char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __info);

int Rtfttp_(char* __transr, char* __uplo, __CLPK_integer* __n, __CLPK_real* __arf, __CLPK_real* __ap, __CLPK_integer* __info);

int Rtfttr_(char* __transr, char* __uplo, __CLPK_integer* __n, __CLPK_real* __arf, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Rtgevc_(char* __side, char* __howmny, __CLPK_logical* __select, __CLPK_integer* __n, __CLPK_real* __s, __CLPK_integer* __lds, __CLPK_real* __p, __CLPK_integer* __ldp, __CLPK_real* __vl, __CLPK_integer* __ldvl, __CLPK_real* __vr, __CLPK_integer* __ldvr, __CLPK_integer* __mm, __CLPK_integer* __m, __CLPK_real* __work, __CLPK_integer* __info);

int Rtgex2_(__CLPK_logical* __wantq, __CLPK_logical* __wantz, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_integer* __j1, __CLPK_integer* __n1, __CLPK_integer* __n2, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rtgexc_(__CLPK_logical* __wantq, __CLPK_logical* __wantz, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_integer* __ifst, __CLPK_integer* __ilst, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

int Rtgsen_(__CLPK_integer* __ijob, __CLPK_logical* __wantq, __CLPK_logical* __wantz, __CLPK_logical* __select, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __alphar, __CLPK_real* __alphai, __CLPK_real* __beta, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_real* __z__, __CLPK_integer* __ldz, __CLPK_integer* __m, __CLPK_real* __pl, __CLPK_real* __pr, __CLPK_real* __dif, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Rtgsja_(char* __jobu, char* __jobv, char* __jobq, __CLPK_integer* __m, __CLPK_integer* __p, __CLPK_integer* __n, __CLPK_integer* __k, __CLPK_integer* __l, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __tola, __CLPK_real* __tolb, __CLPK_real* __alpha, __CLPK_real* __beta, __CLPK_real* __u, __CLPK_integer* __ldu, __CLPK_real* __v, __CLPK_integer* __ldv, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_real* __work, __CLPK_integer* __ncycle, __CLPK_integer* __info);

int Rtgsna_(char* __job, char* __howmny, __CLPK_logical* __select, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __vl, __CLPK_integer* __ldvl, __CLPK_real* __vr, __CLPK_integer* __ldvr, __CLPK_real* __s, __CLPK_real* __dif, __CLPK_integer* __mm, __CLPK_integer* __m, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rtgsy2_(char* __trans, __CLPK_integer* __ijob, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __d__, __CLPK_integer* __ldd, __CLPK_real* __e, __CLPK_integer* __lde, __CLPK_real* __f, __CLPK_integer* __ldf, __CLPK_real* __scale, __CLPK_real* __rdsum, __CLPK_real* __rdscal, __CLPK_integer* __iwork, __CLPK_integer* __pq, __CLPK_integer* __info);

int Rtgsyl_(char* __trans, __CLPK_integer* __ijob, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __d__, __CLPK_integer* __ldd, __CLPK_real* __e, __CLPK_integer* __lde, __CLPK_real* __f, __CLPK_integer* __ldf, __CLPK_real* __scale, __CLPK_real* __dif, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rtpcon_(char* __norm, char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __rcond, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rtprfs_(char* __uplo, char* __trans, char* __diag, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __ap, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rtptri_(char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_integer* __info);

int Rtptrs_(char* __uplo, char* __trans, char* __diag, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __ap, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rtpttf_(char* __transr, char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __arf, __CLPK_integer* __info);

int Rtpttr_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __ap, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Rtrcon_(char* __norm, char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __rcond, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rtrevc_(char* __side, char* __howmny, __CLPK_logical* __select, __CLPK_integer* __n, __CLPK_real* __t, __CLPK_integer* __ldt, __CLPK_real* __vl, __CLPK_integer* __ldvl, __CLPK_real* __vr, __CLPK_integer* __ldvr, __CLPK_integer* __mm, __CLPK_integer* __m, __CLPK_real* __work, __CLPK_integer* __info);

int Rtrexc_(char* __compq, __CLPK_integer* __n, __CLPK_real* __t, __CLPK_integer* __ldt, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_integer* __ifst, __CLPK_integer* __ilst, __CLPK_real* __work, __CLPK_integer* __info);

int Rtrrfs_(char* __uplo, char* __trans, char* __diag, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __x, __CLPK_integer* __ldx, __CLPK_real* __ferr, __CLPK_real* __berr, __CLPK_real* __work, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rtrsen_(char* __job, char* __compq, __CLPK_logical* __select, __CLPK_integer* __n, __CLPK_real* __t, __CLPK_integer* __ldt, __CLPK_real* __q, __CLPK_integer* __ldq, __CLPK_real* __wr, __CLPK_real* __wi, __CLPK_integer* __m, __CLPK_real* __s, __CLPK_real* __sep, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __iwork, __CLPK_integer* __liwork, __CLPK_integer* __info);

int Rtrsna_(char* __job, char* __howmny, __CLPK_logical* __select, __CLPK_integer* __n, __CLPK_real* __t, __CLPK_integer* __ldt, __CLPK_real* __vl, __CLPK_integer* __ldvl, __CLPK_real* __vr, __CLPK_integer* __ldvr, __CLPK_real* __s, __CLPK_real* __sep, __CLPK_integer* __mm, __CLPK_integer* __m, __CLPK_real* __work, __CLPK_integer* __ldwork, __CLPK_integer* __iwork, __CLPK_integer* __info);

int Rtrsyl_(char* __trana, char* __tranb, __CLPK_integer* __isgn, __CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_real* __c__, __CLPK_integer* __ldc, __CLPK_real* __scale, __CLPK_integer* __info);

int Rtrti2_(char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Rtrtri_(char* __uplo, char* __diag, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_integer* __info);

int Rtrtrs_(char* __uplo, char* __trans, char* __diag, __CLPK_integer* __n, __CLPK_integer* __nrhs, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __b, __CLPK_integer* __ldb, __CLPK_integer* __info);

int Rtrttf_(char* __transr, char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __arf, __CLPK_integer* __info);

int Rtrttp_(char* __uplo, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __ap, __CLPK_integer* __info);

int Rtzrqf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_integer* __info);

int Rtzrzf_(__CLPK_integer* __m, __CLPK_integer* __n, __CLPK_real* __a, __CLPK_integer* __lda, __CLPK_real* __tau, __CLPK_real* __work, __CLPK_integer* __lwork, __CLPK_integer* __info);

#endif
