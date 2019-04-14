/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * getPosition.h
 *
 * Code generation for function 'getPosition'
 *
 */

#ifndef GETPOSITION_H
#define GETPOSITION_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "getPosition_types.h"

/* Function Declarations */
extern void getPosition(const emxArray_real_T *zippedSigs, double *x, double *y);
extern void getPosition_initialize(void);
extern void getPosition_terminate(void);

#endif

/* End of code generation (getPosition.h) */
