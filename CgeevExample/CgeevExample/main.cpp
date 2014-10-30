//
//  main.cpp
//  CgeevExample
//
//  Created by Zhi-Qiang Zhou on 10/30/14.
//  Copyright (c) 2014 Zhi-Qiang Zhou. All rights reserved.
//

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
