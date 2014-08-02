/*
 * File: Target.h
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

#ifndef RTW_HEADER_Target_h_
#define RTW_HEADER_Target_h_
#ifndef Target_COMMON_INCLUDES_
# define Target_COMMON_INCLUDES_
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>
#include <sched.h>
#include <semaphore.h>
#include <errno.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "HostLib_Network.h"
#endif                                 /* Target_COMMON_INCLUDES_ */

#include "Target_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T UDPReceive_o1[6];             /* '<Root>/UDP Receive' */
  real_T TmpSignalConversionAtUDPSendInp[12];
  real_T z;                            /* '<S7>/Constant1' */
  real_T x;                            /* '<S7>/S-Function Builder' */
  real_T y;                            /* '<S7>/S-Function Builder' */
  real_T SFunctionBuilder_o3;          /* '<S7>/S-Function Builder' */
  real_T roll;                         /* '<S7>/Constant' */
  real_T pitch;                        /* '<S7>/Constant2' */
  real_T yaw;                          /* '<S7>/Constant3' */
  uint16_T UDPReceive_o2;              /* '<Root>/UDP Receive' */
} B_Target_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T RateTransition_1_Buffer[2];   /* '<Root>/Rate Transition' */
  real_T RateTransition_2_Buffer[2];   /* '<Root>/Rate Transition' */
  real_T RateTransition_3_Buffer[2];   /* '<Root>/Rate Transition' */
  real_T RateTransition_4_Buffer[2];   /* '<Root>/Rate Transition' */
  real_T RateTransition_5_Buffer[2];   /* '<Root>/Rate Transition' */
  real_T RateTransition_6_Buffer[2];   /* '<Root>/Rate Transition' */
  real_T UDPReceive_NetworkLib[137];   /* '<Root>/UDP Receive' */
  real_T RateTransition_7_Buffer[2];   /* '<Root>/Rate Transition' */
  real_T UDPSend_NetworkLib[137];      /* '<Root>/UDP Send' */
  real_T Memory_PreviousInput[16];     /* '<S5>/Memory' */
  int8_T RateTransition_1_ActiveBufIdx;/* '<Root>/Rate Transition' */
  int8_T RateTransition_1_semaphoreTaken;/* '<Root>/Rate Transition' */
  int8_T RateTransition_2_ActiveBufIdx;/* '<Root>/Rate Transition' */
  int8_T RateTransition_2_semaphoreTaken;/* '<Root>/Rate Transition' */
  int8_T RateTransition_3_ActiveBufIdx;/* '<Root>/Rate Transition' */
  int8_T RateTransition_3_semaphoreTaken;/* '<Root>/Rate Transition' */
  int8_T RateTransition_4_ActiveBufIdx;/* '<Root>/Rate Transition' */
  int8_T RateTransition_4_semaphoreTaken;/* '<Root>/Rate Transition' */
  int8_T RateTransition_5_ActiveBufIdx;/* '<Root>/Rate Transition' */
  int8_T RateTransition_5_semaphoreTaken;/* '<Root>/Rate Transition' */
  int8_T RateTransition_6_ActiveBufIdx;/* '<Root>/Rate Transition' */
  int8_T RateTransition_6_semaphoreTaken;/* '<Root>/Rate Transition' */
  int8_T RateTransition_7_ActiveBufIdx;/* '<Root>/Rate Transition' */
  int8_T RateTransition_7_semaphoreTaken;/* '<Root>/Rate Transition' */
} DW_Target_T;

/* Parameters (auto storage) */
struct P_Target_T_ {
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S7>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S7>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S7>/Constant3'
                                        */
  real_T Constant7_Value[16];          /* Expression: eye(4,4)
                                        * Referenced by: '<S5>/Constant7'
                                        */
  real_T Link6_Value[4];               /* Expression: Link6
                                        * Referenced by: '<S5>/Link6'
                                        */
  real_T Link5_Value[4];               /* Expression: Link5
                                        * Referenced by: '<S5>/Link5'
                                        */
  real_T Link4_Value[4];               /* Expression: Link4
                                        * Referenced by: '<S5>/Link4'
                                        */
  real_T Link3_Value[4];               /* Expression: Link3
                                        * Referenced by: '<S5>/Link3'
                                        */
  real_T Link2_Value[4];               /* Expression: Link2
                                        * Referenced by: '<S5>/Link2'
                                        */
  real_T Link1_Value[4];               /* Expression: Link1
                                        * Referenced by: '<S5>/Link1'
                                        */
  real_T Constant1_Value_c[16];        /* Expression: eye(4,4)
                                        * Referenced by: '<S5>/Constant1'
                                        */
  real_T Memory_X0[16];                /* Expression: eye(4,4)
                                        * Referenced by: '<S5>/Memory'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<S13>/Constant'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S13>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: -1
                                        * Referenced by: '<S13>/Gain1'
                                        */
  real_T Constant1_Value_j;            /* Expression: 1
                                        * Referenced by: '<S13>/Constant1'
                                        */
  real_T Constant_Value_b[9];          /* Expression: eye(3)
                                        * Referenced by: '<S9>/Constant'
                                        */
  real_T RateTransition_1_X0;          /* Expression: 0
                                        * Referenced by: '<Root>/Rate Transition'
                                        */
  real_T RateTransition_2_X0;          /* Expression: 0
                                        * Referenced by: '<Root>/Rate Transition'
                                        */
  real_T RateTransition_3_X0;          /* Expression: 0
                                        * Referenced by: '<Root>/Rate Transition'
                                        */
  real_T Constant1_Value_m[4];         /* Expression: [0 0 0 1]
                                        * Referenced by: '<S9>/Constant1'
                                        */
  real_T Constant_Value_g;             /* Expression: 1
                                        * Referenced by: '<S10>/Constant'
                                        */
  real_T Constant1_Value_k;            /* Expression: 0
                                        * Referenced by: '<S10>/Constant1'
                                        */
  real_T RateTransition_4_X0;          /* Expression: 0
                                        * Referenced by: '<Root>/Rate Transition'
                                        */
  real_T Gain_Gain_m;                  /* Expression: -1
                                        * Referenced by: '<S10>/Gain'
                                        */
  real_T RateTransition_5_X0;          /* Expression: 0
                                        * Referenced by: '<Root>/Rate Transition'
                                        */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S11>/Constant1'
                                        */
  real_T Gain_Gain_d;                  /* Expression: -1
                                        * Referenced by: '<S11>/Gain'
                                        */
  real_T Constant_Value_i;             /* Expression: 1
                                        * Referenced by: '<S11>/Constant'
                                        */
  real_T RateTransition_6_X0;          /* Expression: 0
                                        * Referenced by: '<Root>/Rate Transition'
                                        */
  real_T Constant1_Value_p;            /* Expression: 0
                                        * Referenced by: '<S12>/Constant1'
                                        */
  real_T Gain_Gain_h;                  /* Expression: -1
                                        * Referenced by: '<S12>/Gain'
                                        */
  real_T Constant_Value_bi;            /* Expression: 1
                                        * Referenced by: '<S12>/Constant'
                                        */
  real_T Constant_Value_c[3];          /* Expression: [0;0;0]
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T Constant1_Value_f[4];         /* Expression: [0 0 0 1]
                                        * Referenced by: '<S8>/Constant1'
                                        */
  real_T Gain_Gain_i;                  /* Expression: 0.5
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T RateTransition_7_X0;          /* Expression: 0
                                        * Referenced by: '<Root>/Rate Transition'
                                        */
  int32_T ForIterator_IterationLimit;  /* Computed Parameter: ForIterator_IterationLimit
                                        * Referenced by: '<S5>/For Iterator'
                                        */
  int32_T Switch_Threshold;            /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S5>/Switch'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Target_T {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_Target_T Target_P;

/* Block signals (auto storage) */
extern B_Target_T Target_B;

/* Block states (auto storage) */
extern DW_Target_T Target_DW;

/* Model entry point functions */
extern void Target_initialize(void);
extern void Target_step(void);
extern void Target_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Target_T *const Target_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Target'
 * '<S1>'   : 'Target/Function-Call Subsystem'
 * '<S2>'   : 'Target/Subsystem1'
 * '<S3>'   : 'Target/T2xyz'
 * '<S4>'   : 'Target/Task'
 * '<S5>'   : 'Target/fkine'
 * '<S6>'   : 'Target/tr2diff'
 * '<S7>'   : 'Target/Function-Call Subsystem/Trajectory generation1'
 * '<S8>'   : 'Target/Subsystem1/rpy2T'
 * '<S9>'   : 'Target/Subsystem1/xyz2T'
 * '<S10>'  : 'Target/Subsystem1/rpy2T/Subsystem'
 * '<S11>'  : 'Target/Subsystem1/rpy2T/Subsystem1'
 * '<S12>'  : 'Target/Subsystem1/rpy2T/Subsystem2'
 * '<S13>'  : 'Target/fkine/Subsystem3'
 * '<S14>'  : 'Target/tr2diff/CrossProduct'
 * '<S15>'  : 'Target/tr2diff/CrossProduct1'
 * '<S16>'  : 'Target/tr2diff/CrossProduct2'
 */
#endif                                 /* RTW_HEADER_Target_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
