mppack
======

### Overview

Multiple Precision computing PACKage, written in C++, is an extension of [BLAS](http://www.netlib.org/blas/) and [LAPACK](http://www.netlib.org/lapack/) with muliple precision data (real and complex) type supported in [ARPREC](http://crd.lbl.gov/~dhbailey/mpdist/).

We provide two data type (_mp\_real_ and _mp\_complex_) in mppack, and modified BLAS and LAPACK's single float and single float complex routines' names, which have prefix __s__ and __c__, to names begin with __R__ and __C__, respectively.

In mppack, we also extended ARPREC to support muliple precision complex number's input and output.

### Example

1. Singular value decomposition (svd) of 100th Hilbert Matrix


``` cpp
\#include <iostream>
\#include <iomanip>
\#include <Arprec.h>
\#include <mplapack.h>

using namespace std;
int main(int argc, char *argv[]) {

    //Initialize ARPREC with 200 digits
    mp::mp_init(200);
    
    __CLPK_integer num_rows = 100;
    __CLPK_integer num_cols = 100;
    
    // create data array for our matrix. Will be a vector that is num_rows*num_cols elements
    // to access A(r,c) use A[r+c*num_rows], in otherwords major column ordering. {r1c1,r2c1,r3c1...}
    __CLPK_real *A = new __CLPK_real[num_rows*num_cols];
    
    // Fill in A the "normal" way and fill in B
    for(int row = 0; row<num_rows; row++) {
        for(int col = 0; col<num_cols; col++) {
            A[row+col*num_rows] = mp_real(1.0)/(row+col+1);
        }
    }
    
    char jobu = 'N', jobvt = 'N';
    __CLPK_integer m = num_rows, n = num_cols;
    __CLPK_integer lda = m, ldu = m, ldvt = m, lwork = 6*m, info;
    __CLPK_real *work  = new __CLPK_real[6*m];
    __CLPK_real *s     = new __CLPK_real[m];
    
    Rgesvd_(&jobu, &jobvt, &m, &n, A, &lda, s, NULL, &ldu, NULL, &ldvt, work, &lwork, &info);
    
    cout.precision(30);
    for(int row = 0; row<num_rows; row++) {
        cout << s[row] << endl;
    }
}
```

The result gives a hundred sigular value, the three biggest and smallest values are listed as follows:
___
10 ^ 0 x 2.18269609775742384304764059192

10 ^ -1 x 8.21445560556197520233200225095

10 ^ -1 x 2.18595882370696967203904906984

...

10 ^ -144 x 1.4443909342666313695029097586

10 ^ -147 x 1.29734625067851467205032032875

10 ^ -151 x 5.77970086283480284745628019746
___
