mppack
======

### Overview

Multiple Precision computing PACKage, written in C++, is an extension of [BLAS](http://www.netlib.org/blas/) and [LAPACK](http://www.netlib.org/lapack/) with muliple precision data (real and complex) type supported in [ARPREC](http://crd.lbl.gov/~dhbailey/mpdist/).

We provide three data type (begin with \_\_CLPK\_) in mppack, and modified BLAS and LAPACK's single float and single float complex routines' names, which have prefix __s__ and __c__, to names begin with __R__ and __C__, respectively.

All function names and data type names are very similar to these of Accelerate Framework in Mac OSX's Xcode. So, you can easily modify you older source code to use this package for a high precision computing.

__All \_\_CLPK\_ numbers inputted should be follows a comma(,).__

In mppack, we also extended ARPREC to support muliple precision complex number's input and output.

### How to use

1. Add the include folder to /urs/local
2. git the CgeevExample(Xcode project)

### Example

1. [Find all eigenvalues of a complex matrix](http://www.nag.com/lapack-ex/node92.html)

Cgeev.d:
```
4
(-3.97, -5.04),  (-4.11,  3.70),  (-0.34,  1.01),  ( 1.29, -0.86),
( 0.34, -1.50),  ( 1.52, -0.43),  ( 1.88, -5.38),  ( 3.36,  0.65),
( 3.31, -3.85),  ( 2.50,  3.45),  ( 0.88, -1.08),  ( 0.64, -1.48),
(-1.10,  0.82),  ( 1.81, -1.59),  ( 3.25,  1.33),  ( 1.57, -3.44),
```

source code:
```cpp
#include <iostream>
#include <fstream>
#include <iomanip>
#include "Arprec.h"
#include "mplapack.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    mp::mp_init(200);
    
    ifstream infile("/Users/zhou/Desktop/Cgeev.d");
    
    int m;
    infile >> m;
    
    __CLPK_complex *A = new __CLPK_complex[m*m];
    for (int i=0; i<m; i++) {
        for (int j=0; j<m; j++) {
            infile >> A[i + m*j];
        }
    }
    
    infile.close();
    
    char jobvl = 'N', jobvr = 'N';
    int lda = m, ldvl = 1, ldvr = 1, info, lwork = 6*m;
    __CLPK_complex *w    = new __CLPK_complex[  m];
    __CLPK_complex *work = new __CLPK_complex[6*m];
    __CLPK_real   *rwork = new __CLPK_real[6*m];
    
    Cgeev_(&jobvl, &jobvr, &m, A, &lda, w, NULL, &ldvl, NULL, &ldvr, work, &lwork, rwork, &info);
    
    cout << "Eigenvalues:" << endl;
    cout.precision(20);
    for (int i=0; i<m; i++) {
        cout << w[i] << endl;
    }
    
    return 0;
}
```

Results
```
Eigenvalues:
(10 ^ 0 x -6.0004253429492453651, 10 ^ 0 x -6.9998433715703895048)
(10 ^ 0 x -5.0000334575969695514, 10 ^ 0 x 2.006027162316515261)
(10 ^ 0 x 7.9981945162082425749, 10 ^ -1 x -9.9636509139290088878)
(10 ^ 0 x 3.0022642843379723417, 10 ^ 0 x -3.9998186993532248675)
```

2. Singular value decomposition (svd) of [100 by 100 Hilbert Matrix](www-math.mit.edu/~plamen/talks/src99.pdf), h(i,j) = 1/(i+j-1)


``` cpp
#include <iostream>
#include <iomanip>
#include <Arprec.h>
#include <mplapack.h>

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

Biggest values | Smallest values
------------ | -------------
10 ^  0 x 2.1826960977574238 | 10 ^ -144 x 1.4443909342666313
10 ^ -1 x 8.2144556055619752 | 10 ^ -147 x 1.2973462506785146
10 ^ -1 x 2.1859588237069696 | 10 ^ -151 x 5.7797008628348028


Copyright (c) 2014 Zhi-Qiang Zhou.
