/*
 * File: Target_private.h
 *
 * Code generated for Simulink model 'Target'.
 *
 * Model version                  : 1.28
 * Simulink Coder version         : 8.4 (R2013a) 13-Feb-2013
 * TLC version                    : 8.4 (Jan 19 2013)
 * C/C++ source code generated on : Fri Apr 11 21:37:06 2014
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86/Pentium
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Target_private_h_
#define RTW_HEADER_Target_private_h_
#include "rtwtypes.h"

/* Define number of LINUX task blocks */
#define NUM_TSK_BLOCKS                 (1)
#define CHECK_STATUS(status, fcn)      if (status != 0) {fprintf(stderr, "Call to %s returned error status (%d).\n", fcn, status); perror(fcn); fflush(stderr); exit(EXIT_FAILURE);}
#ifndef __RTWTYPES_H__
#error This file requires rtwtypes.h to be included
#else
#ifdef TMWTYPES_PREVIOUSLY_INCLUDED
#error This file requires rtwtypes.h to be included before tmwtypes.h
#else

/* Check for inclusion of an incorrect version of rtwtypes.h */
#ifndef RTWTYPES_ID_C08S16I32L32N32F1
#error This code was generated with a different "rtwtypes.h" than the file included
#endif                                 /* RTWTYPES_ID_C08S16I32L32N32F1 */
#endif                                 /* TMWTYPES_PREVIOUSLY_INCLUDED */
#endif                                 /* __RTWTYPES_H__ */

extern void mouse_Outputs_wrapper(real_T *SCALED_X,
  real_T *SCALED_Y,
  real_T *CLEAR);
extern void Main_thread_sampler_Outputs_wrapper();

#endif                                 /* RTW_HEADER_Target_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
