mppack
======

## Overview

Multiple Precision computing PACKage, written in C++, is an extension of [BLAS](http://www.netlib.org/blas/) and [LAPACK](http://www.netlib.org/lapack/) with muliple precision data (real and complex) type supported in [ARPREC](http://crd.lbl.gov/~dhbailey/mpdist/).

We provide two data type (_mp\_real_ and _mp\_complex_) in mppack, and modified BLAS and LAPACK's single float and single float complex routines' names, which have prefix __s__ and __c__, to names begin with __R__ and __C__, respectively.

In mppack, we also extended ARPREC to support muliple precision complex number's input and output.

## Example
