/*
 * File: Target_data.c
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

#include "Target.h"
#include "Target_private.h"

/* Block parameters (auto storage) */
P_Target_T Target_P = {
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Constant3'
                                        */

  /*  Expression: eye(4,4)
   * Referenced by: '<S5>/Constant7'
   */
  { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0 },

  /*  Expression: Link6
   * Referenced by: '<S5>/Link6'
   */
  { 0.0, 0.0, 1.5707963267948966, 0.0 },

  /*  Expression: Link5
   * Referenced by: '<S5>/Link5'
   */
  { 1.5707963267948966, 0.0, 1.5707963267948966, 0.0 },

  /*  Expression: Link4
   * Referenced by: '<S5>/Link4'
   */
  { 1.5707963267948966, 0.025, 0.0, 0.405 },

  /*  Expression: Link3
   * Referenced by: '<S5>/Link3'
   */
  { -1.5707963267948966, 0.0, 0.0, 0.0 },

  /*  Expression: Link2
   * Referenced by: '<S5>/Link2'
   */
  { 0.0, 0.404, 1.5707963267948966, 0.0 },

  /*  Expression: Link1
   * Referenced by: '<S5>/Link1'
   */
  { 1.5707963267948966, 0.0, 1.5707963267948966, 0.0 },

  /*  Expression: eye(4,4)
   * Referenced by: '<S5>/Constant1'
   */
  { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0 },

  /*  Expression: eye(4,4)
   * Referenced by: '<S5>/Memory'
   */
  { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S13>/Constant'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S13>/Gain'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S13>/Gain1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S13>/Constant1'
                                        */

  /*  Expression: eye(3)
   * Referenced by: '<S9>/Constant'
   */
  { 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Rate Transition'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Rate Transition'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Rate Transition'
                                        */

  /*  Expression: [0 0 0 1]
   * Referenced by: '<S9>/Constant1'
   */
  { 0.0, 0.0, 0.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S10>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S10>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Rate Transition'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S10>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Rate Transition'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/Constant1'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S11>/Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S11>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Rate Transition'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S12>/Constant1'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S12>/Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S12>/Constant'
                                        */

  /*  Expression: [0;0;0]
   * Referenced by: '<S8>/Constant'
   */
  { 0.0, 0.0, 0.0 },

  /*  Expression: [0 0 0 1]
   * Referenced by: '<S8>/Constant1'
   */
  { 0.0, 0.0, 0.0, 1.0 },
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S6>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Rate Transition'
                                        */
  6,                                   /* Computed Parameter: ForIterator_IterationLimit
                                        * Referenced by: '<S5>/For Iterator'
                                        */
  1                                    /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S5>/Switch'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
