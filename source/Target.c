/*
 * File: Target.c
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

/* Block signals (auto storage) */
B_Target_T Target_B;

/* Block states (auto storage) */
DW_Target_T Target_DW;

/* Real-time model */
RT_MODEL_Target_T Target_M_;
RT_MODEL_Target_T *const Target_M = &Target_M_;
void Task0_fcn(void)
{
  /* Wait until application is initialized properly */
  while (1) {
    /* Call the system: <Root>/Function-Call Subsystem */
    {
      /* Output and update for function-call system: '<Root>/Function-Call Subsystem' */

      /* Constant: '<S7>/Constant1' */
      Target_B.z = Target_P.Constant1_Value;

      /* S-Function (mouse): '<S7>/S-Function Builder' */
      mouse_Outputs_wrapper( &Target_B.x, &Target_B.y,
                            &Target_B.SFunctionBuilder_o3 );

      /* Constant: '<S7>/Constant' */
      Target_B.roll = Target_P.Constant_Value;

      /* Constant: '<S7>/Constant2' */
      Target_B.pitch = Target_P.Constant2_Value;

      /* Constant: '<S7>/Constant3' */
      Target_B.yaw = Target_P.Constant3_Value;

      /* RateTransition: '<Root>/Rate Transition' */
      Target_DW.RateTransition_1_Buffer[Target_DW.RateTransition_1_semaphoreTaken
        == 0] = Target_B.x;
      Target_DW.RateTransition_1_ActiveBufIdx = (int8_T)
        (Target_DW.RateTransition_1_semaphoreTaken == 0);

      /* RateTransition: '<Root>/Rate Transition' */
      Target_DW.RateTransition_2_Buffer[Target_DW.RateTransition_2_semaphoreTaken
        == 0] = Target_B.y;
      Target_DW.RateTransition_2_ActiveBufIdx = (int8_T)
        (Target_DW.RateTransition_2_semaphoreTaken == 0);

      /* RateTransition: '<Root>/Rate Transition' */
      Target_DW.RateTransition_3_Buffer[Target_DW.RateTransition_3_semaphoreTaken
        == 0] = Target_B.z;
      Target_DW.RateTransition_3_ActiveBufIdx = (int8_T)
        (Target_DW.RateTransition_3_semaphoreTaken == 0);

      /* RateTransition: '<Root>/Rate Transition' */
      Target_DW.RateTransition_4_Buffer[Target_DW.RateTransition_4_semaphoreTaken
        == 0] = Target_B.roll;
      Target_DW.RateTransition_4_ActiveBufIdx = (int8_T)
        (Target_DW.RateTransition_4_semaphoreTaken == 0);

      /* RateTransition: '<Root>/Rate Transition' */
      Target_DW.RateTransition_5_Buffer[Target_DW.RateTransition_5_semaphoreTaken
        == 0] = Target_B.pitch;
      Target_DW.RateTransition_5_ActiveBufIdx = (int8_T)
        (Target_DW.RateTransition_5_semaphoreTaken == 0);

      /* RateTransition: '<Root>/Rate Transition' */
      Target_DW.RateTransition_6_Buffer[Target_DW.RateTransition_6_semaphoreTaken
        == 0] = Target_B.yaw;
      Target_DW.RateTransition_6_ActiveBufIdx = (int8_T)
        (Target_DW.RateTransition_6_semaphoreTaken == 0);

      /* RateTransition: '<Root>/Rate Transition' */
      Target_DW.RateTransition_7_Buffer[Target_DW.RateTransition_7_semaphoreTaken
        == 0] = Target_B.SFunctionBuilder_o3;
      Target_DW.RateTransition_7_ActiveBufIdx = (int8_T)
        (Target_DW.RateTransition_7_semaphoreTaken == 0);
    }
  }
}

/* Model step function */
void Target_step(void)
{
  char_T *sErr;
  int32_T samplesRead;
  real_T rtb_MatrixConcatenate[12];
  real_T rtb_x;
  real_T rtb_y;
  real_T rtb_z;
  real_T rtb_VectorConcatenate3[9];
  real_T rtb_Selector_i;
  real_T rtb_signal3;
  real_T rtb_VectorConcatenate3_m[9];
  real_T rtb_VectorConcatenate3_i[9];
  real_T rtb_MatrixConcatenate_o[12];
  int32_T s5_iter;
  real_T rtb_VectorConcatenate1[6];
  real_T rtb_MatrixsConcatenate[16];
  real_T rtb_Elementproduct[6];
  real_T rtb_Product_f[16];
  real_T rtb_Product1[16];
  real_T rtb_Product[16];
  real_T rtb_VectorConcatenate3_m_0[9];
  int32_T i;
  real_T rtb_MatrixConcatenate_0[16];
  real_T rtb_MatrixConcatenate_o_0[16];
  real_T rtb_Product_0[6];
  real_T rtb_Product_f_0[6];
  real_T rtb_Product_1[6];
  real_T rtb_Product_f_1[6];
  real_T rtb_Product_2[6];
  real_T rtb_Product_f_2[6];
  int32_T i_0;
  real_T rtb_Selector7_idx;
  real_T rtb_Add3_j_idx;
  real_T rtb_Add3_j_idx_0;
  real_T rtb_Add3_j_idx_1;

  /* S-Function (Main_thread_sampler): '<Root>/S-Function Builder2' */
  Main_thread_sampler_Outputs_wrapper( );

  /* Constant: '<S9>/Constant' */
  memcpy(&rtb_MatrixConcatenate[0], &Target_P.Constant_Value_b[0], 9U * sizeof
         (real_T));

  /* RateTransition: '<Root>/Rate Transition' */
  Target_DW.RateTransition_1_semaphoreTaken =
    Target_DW.RateTransition_1_ActiveBufIdx;
  rtb_x =
    Target_DW.RateTransition_1_Buffer[Target_DW.RateTransition_1_ActiveBufIdx];

  /* SignalConversion: '<S9>/ConcatBufferAtVector ConcatenateIn1' incorporates:
   *  RateTransition: '<Root>/Rate Transition'
   */
  rtb_MatrixConcatenate[9] =
    Target_DW.RateTransition_1_Buffer[Target_DW.RateTransition_1_ActiveBufIdx];

  /* RateTransition: '<Root>/Rate Transition' */
  Target_DW.RateTransition_2_semaphoreTaken =
    Target_DW.RateTransition_2_ActiveBufIdx;
  rtb_y =
    Target_DW.RateTransition_2_Buffer[Target_DW.RateTransition_2_ActiveBufIdx];

  /* SignalConversion: '<S9>/ConcatBufferAtVector ConcatenateIn2' incorporates:
   *  RateTransition: '<Root>/Rate Transition'
   */
  rtb_MatrixConcatenate[10] =
    Target_DW.RateTransition_2_Buffer[Target_DW.RateTransition_2_ActiveBufIdx];

  /* RateTransition: '<Root>/Rate Transition' */
  Target_DW.RateTransition_3_semaphoreTaken =
    Target_DW.RateTransition_3_ActiveBufIdx;
  rtb_z =
    Target_DW.RateTransition_3_Buffer[Target_DW.RateTransition_3_ActiveBufIdx];

  /* SignalConversion: '<S9>/ConcatBufferAtVector ConcatenateIn3' incorporates:
   *  RateTransition: '<Root>/Rate Transition'
   */
  rtb_MatrixConcatenate[11] =
    Target_DW.RateTransition_3_Buffer[Target_DW.RateTransition_3_ActiveBufIdx];

  /* Constant: '<S10>/Constant' */
  rtb_VectorConcatenate3[0] = Target_P.Constant_Value_g;

  /* SignalConversion: '<S10>/ConcatBufferAtVector ConcatenateIn2' incorporates:
   *  Constant: '<S10>/Constant1'
   */
  rtb_VectorConcatenate3[1] = Target_P.Constant1_Value_k;

  /* SignalConversion: '<S10>/ConcatBufferAtVector ConcatenateIn3' incorporates:
   *  Constant: '<S10>/Constant1'
   */
  rtb_VectorConcatenate3[2] = Target_P.Constant1_Value_k;

  /* SignalConversion: '<S10>/ConcatBufferAtVector Concatenate1In1' incorporates:
   *  Constant: '<S10>/Constant1'
   */
  rtb_VectorConcatenate3[3] = Target_P.Constant1_Value_k;

  /* RateTransition: '<Root>/Rate Transition' */
  Target_DW.RateTransition_4_semaphoreTaken =
    Target_DW.RateTransition_4_ActiveBufIdx;

  /* Trigonometry: '<S10>/Trigonometric Function1' incorporates:
   *  RateTransition: '<Root>/Rate Transition'
   */
  rtb_Selector_i = cos
    (Target_DW.RateTransition_4_Buffer[Target_DW.RateTransition_4_ActiveBufIdx]);

  /* SignalConversion: '<S10>/ConcatBufferAtVector Concatenate1In2' */
  rtb_VectorConcatenate3[4] = rtb_Selector_i;

  /* Trigonometry: '<S10>/Trigonometric Function' incorporates:
   *  RateTransition: '<Root>/Rate Transition'
   */
  rtb_signal3 = sin
    (Target_DW.RateTransition_4_Buffer[Target_DW.RateTransition_4_ActiveBufIdx]);

  /* SignalConversion: '<S10>/ConcatBufferAtVector Concatenate1In3' */
  rtb_VectorConcatenate3[5] = rtb_signal3;

  /* SignalConversion: '<S10>/ConcatBufferAtVector Concatenate2In1' incorporates:
   *  Constant: '<S10>/Constant1'
   */
  rtb_VectorConcatenate3[6] = Target_P.Constant1_Value_k;

  /* Gain: '<S10>/Gain' */
  rtb_VectorConcatenate3[7] = Target_P.Gain_Gain_m * rtb_signal3;

  /* SignalConversion: '<S10>/ConcatBufferAtVector Concatenate2In3' */
  rtb_VectorConcatenate3[8] = rtb_Selector_i;

  /* RateTransition: '<Root>/Rate Transition' */
  Target_DW.RateTransition_5_semaphoreTaken =
    Target_DW.RateTransition_5_ActiveBufIdx;

  /* Trigonometry: '<S11>/Trigonometric Function1' incorporates:
   *  RateTransition: '<Root>/Rate Transition'
   */
  rtb_signal3 = cos
    (Target_DW.RateTransition_5_Buffer[Target_DW.RateTransition_5_ActiveBufIdx]);

  /* SignalConversion: '<S11>/ConcatBufferAtVector ConcatenateIn1' */
  rtb_VectorConcatenate3_m[0] = rtb_signal3;

  /* SignalConversion: '<S11>/ConcatBufferAtVector ConcatenateIn2' incorporates:
   *  Constant: '<S11>/Constant1'
   */
  rtb_VectorConcatenate3_m[1] = Target_P.Constant1_Value_g;

  /* Trigonometry: '<S11>/Trigonometric Function' incorporates:
   *  RateTransition: '<Root>/Rate Transition'
   */
  rtb_Selector_i = sin
    (Target_DW.RateTransition_5_Buffer[Target_DW.RateTransition_5_ActiveBufIdx]);

  /* Gain: '<S11>/Gain' */
  rtb_VectorConcatenate3_m[2] = Target_P.Gain_Gain_d * rtb_Selector_i;

  /* SignalConversion: '<S11>/ConcatBufferAtVector Concatenate1In1' incorporates:
   *  Constant: '<S11>/Constant1'
   */
  rtb_VectorConcatenate3_m[3] = Target_P.Constant1_Value_g;

  /* Constant: '<S11>/Constant' */
  rtb_VectorConcatenate3_m[4] = Target_P.Constant_Value_i;

  /* SignalConversion: '<S11>/ConcatBufferAtVector Concatenate1In3' incorporates:
   *  Constant: '<S11>/Constant1'
   */
  rtb_VectorConcatenate3_m[5] = Target_P.Constant1_Value_g;

  /* SignalConversion: '<S11>/ConcatBufferAtVector Concatenate2In1' */
  rtb_VectorConcatenate3_m[6] = rtb_Selector_i;

  /* SignalConversion: '<S11>/ConcatBufferAtVector Concatenate2In2' incorporates:
   *  Constant: '<S11>/Constant1'
   */
  rtb_VectorConcatenate3_m[7] = Target_P.Constant1_Value_g;

  /* SignalConversion: '<S11>/ConcatBufferAtVector Concatenate2In3' */
  rtb_VectorConcatenate3_m[8] = rtb_signal3;

  /* RateTransition: '<Root>/Rate Transition' */
  Target_DW.RateTransition_6_semaphoreTaken =
    Target_DW.RateTransition_6_ActiveBufIdx;

  /* Trigonometry: '<S12>/Trigonometric Function1' incorporates:
   *  RateTransition: '<Root>/Rate Transition'
   */
  rtb_signal3 = cos
    (Target_DW.RateTransition_6_Buffer[Target_DW.RateTransition_6_ActiveBufIdx]);

  /* SignalConversion: '<S12>/ConcatBufferAtVector ConcatenateIn1' */
  rtb_VectorConcatenate3_i[0] = rtb_signal3;

  /* Trigonometry: '<S12>/Trigonometric Function' incorporates:
   *  RateTransition: '<Root>/Rate Transition'
   */
  rtb_Selector_i = sin
    (Target_DW.RateTransition_6_Buffer[Target_DW.RateTransition_6_ActiveBufIdx]);

  /* SignalConversion: '<S12>/ConcatBufferAtVector ConcatenateIn2' */
  rtb_VectorConcatenate3_i[1] = rtb_Selector_i;

  /* SignalConversion: '<S12>/ConcatBufferAtVector ConcatenateIn3' incorporates:
   *  Constant: '<S12>/Constant1'
   */
  rtb_VectorConcatenate3_i[2] = Target_P.Constant1_Value_p;

  /* Gain: '<S12>/Gain' */
  rtb_VectorConcatenate3_i[3] = Target_P.Gain_Gain_h * rtb_Selector_i;

  /* SignalConversion: '<S12>/ConcatBufferAtVector Concatenate1In2' */
  rtb_VectorConcatenate3_i[4] = rtb_signal3;

  /* SignalConversion: '<S12>/ConcatBufferAtVector Concatenate1In3' incorporates:
   *  Constant: '<S12>/Constant1'
   */
  rtb_VectorConcatenate3_i[5] = Target_P.Constant1_Value_p;

  /* SignalConversion: '<S12>/ConcatBufferAtVector Concatenate2In1' incorporates:
   *  Constant: '<S12>/Constant1'
   */
  rtb_VectorConcatenate3_i[6] = Target_P.Constant1_Value_p;

  /* SignalConversion: '<S12>/ConcatBufferAtVector Concatenate2In2' incorporates:
   *  Constant: '<S12>/Constant1'
   */
  rtb_VectorConcatenate3_i[7] = Target_P.Constant1_Value_p;

  /* Constant: '<S12>/Constant' */
  rtb_VectorConcatenate3_i[8] = Target_P.Constant_Value_bi;

  /* Product: '<S8>/Product' */
  for (i = 0; i < 3; i++) {
    for (i_0 = 0; i_0 < 3; i_0++) {
      rtb_VectorConcatenate3_m_0[i + 3 * i_0] = 0.0;
      rtb_VectorConcatenate3_m_0[i + 3 * i_0] += rtb_VectorConcatenate3_i[3 *
        i_0] * rtb_VectorConcatenate3_m[i];
      rtb_VectorConcatenate3_m_0[i + 3 * i_0] += rtb_VectorConcatenate3_i[3 *
        i_0 + 1] * rtb_VectorConcatenate3_m[i + 3];
      rtb_VectorConcatenate3_m_0[i + 3 * i_0] += rtb_VectorConcatenate3_i[3 *
        i_0 + 2] * rtb_VectorConcatenate3_m[i + 6];
    }
  }

  for (i = 0; i < 3; i++) {
    for (i_0 = 0; i_0 < 3; i_0++) {
      rtb_VectorConcatenate3_m[i + 3 * i_0] = 0.0;
      rtb_VectorConcatenate3_m[i + 3 * i_0] += rtb_VectorConcatenate3_m_0[3 *
        i_0] * rtb_VectorConcatenate3[i];
      rtb_VectorConcatenate3_m[i + 3 * i_0] += rtb_VectorConcatenate3_m_0[3 *
        i_0 + 1] * rtb_VectorConcatenate3[i + 3];
      rtb_VectorConcatenate3_m[i + 3 * i_0] += rtb_VectorConcatenate3_m_0[3 *
        i_0 + 2] * rtb_VectorConcatenate3[i + 6];
    }
  }

  memcpy(&rtb_MatrixConcatenate_o[0], &rtb_VectorConcatenate3_m[0], 9U * sizeof
         (real_T));

  /* End of Product: '<S8>/Product' */

  /* Constant: '<S8>/Constant' */
  rtb_MatrixConcatenate_o[9] = Target_P.Constant_Value_c[0];
  rtb_MatrixConcatenate_o[10] = Target_P.Constant_Value_c[1];
  rtb_MatrixConcatenate_o[11] = Target_P.Constant_Value_c[2];

  /* Concatenate: '<S9>/Matrix Concatenate1' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Product: '<S2>/Product'
   */
  for (i = 0; i < 4; i++) {
    rtb_MatrixConcatenate_0[i << 2] = rtb_MatrixConcatenate[3 * i];
    rtb_MatrixConcatenate_0[1 + (i << 2)] = rtb_MatrixConcatenate[3 * i + 1];
    rtb_MatrixConcatenate_0[2 + (i << 2)] = rtb_MatrixConcatenate[3 * i + 2];
  }

  rtb_MatrixConcatenate_0[3] = Target_P.Constant1_Value_m[0];
  rtb_MatrixConcatenate_0[7] = Target_P.Constant1_Value_m[1];
  rtb_MatrixConcatenate_0[11] = Target_P.Constant1_Value_m[2];
  rtb_MatrixConcatenate_0[15] = Target_P.Constant1_Value_m[3];

  /* End of Concatenate: '<S9>/Matrix Concatenate1' */

  /* Concatenate: '<S8>/Matrix Concatenate1' incorporates:
   *  Constant: '<S8>/Constant1'
   *  Product: '<S2>/Product'
   */
  for (i = 0; i < 4; i++) {
    rtb_MatrixConcatenate_o_0[i << 2] = rtb_MatrixConcatenate_o[3 * i];
    rtb_MatrixConcatenate_o_0[1 + (i << 2)] = rtb_MatrixConcatenate_o[3 * i + 1];
    rtb_MatrixConcatenate_o_0[2 + (i << 2)] = rtb_MatrixConcatenate_o[3 * i + 2];
  }

  rtb_MatrixConcatenate_o_0[3] = Target_P.Constant1_Value_f[0];
  rtb_MatrixConcatenate_o_0[7] = Target_P.Constant1_Value_f[1];
  rtb_MatrixConcatenate_o_0[11] = Target_P.Constant1_Value_f[2];
  rtb_MatrixConcatenate_o_0[15] = Target_P.Constant1_Value_f[3];

  /* End of Concatenate: '<S8>/Matrix Concatenate1' */

  /* Product: '<S2>/Product' */
  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 4; i_0++) {
      rtb_Product_f[i + (i_0 << 2)] = 0.0;
      rtb_Product_f[i + (i_0 << 2)] += rtb_MatrixConcatenate_o_0[i_0 << 2] *
        rtb_MatrixConcatenate_0[i];
      rtb_Product_f[i + (i_0 << 2)] += rtb_MatrixConcatenate_o_0[(i_0 << 2) + 1]
        * rtb_MatrixConcatenate_0[i + 4];
      rtb_Product_f[i + (i_0 << 2)] += rtb_MatrixConcatenate_o_0[(i_0 << 2) + 2]
        * rtb_MatrixConcatenate_0[i + 8];
      rtb_Product_f[i + (i_0 << 2)] += rtb_MatrixConcatenate_o_0[(i_0 << 2) + 3]
        * rtb_MatrixConcatenate_0[i + 12];
    }
  }

  /* S-Function (sdspFromNetwork): '<Root>/UDP Receive' */
  sErr = GetErrorBuffer(&Target_DW.UDPReceive_NetworkLib[0U]);
  samplesRead = 6;
  LibOutputs_Network(&Target_DW.UDPReceive_NetworkLib[0U],
                     &Target_B.UDPReceive_o1[0U], &samplesRead);
  if (*sErr != 0) {
    rtmSetErrorStatus(Target_M, sErr);
    rtmSetStopRequested(Target_M, 1);
  }

  Target_B.UDPReceive_o2 = (uint16_T)samplesRead;
  if (samplesRead == 0) {
    for (s5_iter = 0; s5_iter < 6; s5_iter++) {
      Target_B.UDPReceive_o1[s5_iter] = 0.0;
    }
  }

  /* End of S-Function (sdspFromNetwork): '<Root>/UDP Receive' */

  /* Outputs for Iterator SubSystem: '<Root>/fkine' incorporates:
   *  ForIterator: '<S5>/For Iterator'
   */
  for (s5_iter = 1; s5_iter <= Target_P.ForIterator_IterationLimit; s5_iter++) {
    /* MultiPortSwitch: '<S5>/Index Vector' */
    switch (s5_iter) {
     case 1:
      rtb_Selector_i = Target_B.UDPReceive_o1[0];

      /* MultiPortSwitch: '<S5>/Index Vector1' incorporates:
       *  Constant: '<S5>/Link1'
       */
      rtb_Selector7_idx = Target_P.Link1_Value[0];
      rtb_Add3_j_idx = Target_P.Link1_Value[1];
      rtb_Add3_j_idx_0 = Target_P.Link1_Value[3];
      break;

     case 2:
      rtb_Selector_i = Target_B.UDPReceive_o1[1];

      /* MultiPortSwitch: '<S5>/Index Vector1' incorporates:
       *  Constant: '<S5>/Link2'
       */
      rtb_Selector7_idx = Target_P.Link2_Value[0];
      rtb_Add3_j_idx = Target_P.Link2_Value[1];
      rtb_Add3_j_idx_0 = Target_P.Link2_Value[3];
      break;

     case 3:
      rtb_Selector_i = Target_B.UDPReceive_o1[2];

      /* MultiPortSwitch: '<S5>/Index Vector1' incorporates:
       *  Constant: '<S5>/Link3'
       */
      rtb_Selector7_idx = Target_P.Link3_Value[0];
      rtb_Add3_j_idx = Target_P.Link3_Value[1];
      rtb_Add3_j_idx_0 = Target_P.Link3_Value[3];
      break;

     case 4:
      rtb_Selector_i = Target_B.UDPReceive_o1[3];

      /* MultiPortSwitch: '<S5>/Index Vector1' incorporates:
       *  Constant: '<S5>/Link4'
       */
      rtb_Selector7_idx = Target_P.Link4_Value[0];
      rtb_Add3_j_idx = Target_P.Link4_Value[1];
      rtb_Add3_j_idx_0 = Target_P.Link4_Value[3];
      break;

     case 5:
      rtb_Selector_i = Target_B.UDPReceive_o1[4];

      /* MultiPortSwitch: '<S5>/Index Vector1' incorporates:
       *  Constant: '<S5>/Link5'
       */
      rtb_Selector7_idx = Target_P.Link5_Value[0];
      rtb_Add3_j_idx = Target_P.Link5_Value[1];
      rtb_Add3_j_idx_0 = Target_P.Link5_Value[3];
      break;

     default:
      rtb_Selector_i = Target_B.UDPReceive_o1[5];

      /* MultiPortSwitch: '<S5>/Index Vector1' incorporates:
       *  Constant: '<S5>/Link6'
       */
      rtb_Selector7_idx = Target_P.Link6_Value[0];
      rtb_Add3_j_idx = Target_P.Link6_Value[1];
      rtb_Add3_j_idx_0 = Target_P.Link6_Value[3];
      break;
    }

    /* End of MultiPortSwitch: '<S5>/Index Vector' */

    /* Trigonometry: '<S13>/TrigonometricFunction3' */
    rtb_signal3 = cos(rtb_Selector_i);

    /* SignalConversion: '<S13>/ConcatBufferAtVectorConcatenate1In1' */
    rtb_MatrixsConcatenate[0] = rtb_signal3;

    /* Trigonometry: '<S13>/TrigonometricFunction2' */
    rtb_Selector_i = sin(rtb_Selector_i);

    /* SignalConversion: '<S13>/ConcatBufferAtVectorConcatenate1In2' */
    rtb_MatrixsConcatenate[1] = rtb_Selector_i;

    /* SignalConversion: '<S13>/ConcatBufferAtVectorConcatenate1In3' incorporates:
     *  Constant: '<S13>/Constant'
     */
    rtb_MatrixsConcatenate[2] = Target_P.Constant_Value_o;

    /* SignalConversion: '<S13>/ConcatBufferAtVectorConcatenate1In4' incorporates:
     *  Constant: '<S13>/Constant'
     */
    rtb_MatrixsConcatenate[3] = Target_P.Constant_Value_o;

    /* Trigonometry: '<S13>/TrigonometricFunction1' */
    rtb_Add3_j_idx_1 = cos(rtb_Selector7_idx);

    /* Product: '<S13>/Product' incorporates:
     *  Gain: '<S13>/Gain'
     */
    rtb_MatrixsConcatenate[4] = Target_P.Gain_Gain * rtb_Selector_i *
      rtb_Add3_j_idx_1;

    /* Product: '<S13>/Product3' */
    rtb_MatrixsConcatenate[5] = rtb_signal3 * rtb_Add3_j_idx_1;

    /* Trigonometry: '<S13>/TrigonometricFunction' */
    rtb_Selector7_idx = sin(rtb_Selector7_idx);

    /* SignalConversion: '<S13>/ConcatBufferAtVectorConcatenate2In3' */
    rtb_MatrixsConcatenate[6] = rtb_Selector7_idx;

    /* SignalConversion: '<S13>/ConcatBufferAtVectorConcatenate2In4' incorporates:
     *  Constant: '<S13>/Constant'
     */
    rtb_MatrixsConcatenate[7] = Target_P.Constant_Value_o;

    /* Product: '<S13>/Product1' */
    rtb_MatrixsConcatenate[8] = rtb_Selector_i * rtb_Selector7_idx;

    /* Product: '<S13>/Product4' incorporates:
     *  Gain: '<S13>/Gain1'
     */
    rtb_MatrixsConcatenate[9] = Target_P.Gain1_Gain * rtb_signal3 *
      rtb_Selector7_idx;

    /* SignalConversion: '<S13>/ConcatBufferAtVectorConcatenate3In3' */
    rtb_MatrixsConcatenate[10] = rtb_Add3_j_idx_1;

    /* SignalConversion: '<S13>/ConcatBufferAtVectorConcatenate3In4' incorporates:
     *  Constant: '<S13>/Constant'
     */
    rtb_MatrixsConcatenate[11] = Target_P.Constant_Value_o;

    /* Product: '<S13>/Product2' */
    rtb_MatrixsConcatenate[12] = rtb_Add3_j_idx * rtb_signal3;

    /* Product: '<S13>/Product5' */
    rtb_MatrixsConcatenate[13] = rtb_Add3_j_idx * rtb_Selector_i;

    /* SignalConversion: '<S13>/ConcatBufferAtVectorsConcatenate4In3' */
    rtb_MatrixsConcatenate[14] = rtb_Add3_j_idx_0;

    /* Constant: '<S13>/Constant1' */
    rtb_MatrixsConcatenate[15] = Target_P.Constant1_Value_j;

    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<S5>/Constant7'
     *  Memory: '<S5>/Memory'
     *  Product: '<S5>/Product'
     */
    if (s5_iter > Target_P.Switch_Threshold) {
      for (i = 0; i < 4; i++) {
        rtb_MatrixConcatenate_0[i << 2] = Target_DW.Memory_PreviousInput[i << 2];
        rtb_MatrixConcatenate_0[1 + (i << 2)] = Target_DW.Memory_PreviousInput
          [(i << 2) + 1];
        rtb_MatrixConcatenate_0[2 + (i << 2)] = Target_DW.Memory_PreviousInput
          [(i << 2) + 2];
        rtb_MatrixConcatenate_0[3 + (i << 2)] = Target_DW.Memory_PreviousInput
          [(i << 2) + 3];
      }
    } else {
      for (i = 0; i < 4; i++) {
        rtb_MatrixConcatenate_0[i << 2] = Target_P.Constant7_Value[i << 2];
        rtb_MatrixConcatenate_0[1 + (i << 2)] = Target_P.Constant7_Value[(i << 2)
          + 1];
        rtb_MatrixConcatenate_0[2 + (i << 2)] = Target_P.Constant7_Value[(i << 2)
          + 2];
        rtb_MatrixConcatenate_0[3 + (i << 2)] = Target_P.Constant7_Value[(i << 2)
          + 3];
      }
    }

    /* End of Switch: '<S5>/Switch' */

    /* Product: '<S5>/Product' */
    for (i = 0; i < 4; i++) {
      for (i_0 = 0; i_0 < 4; i_0++) {
        rtb_Product[i + (i_0 << 2)] = 0.0;
        rtb_Product[i + (i_0 << 2)] += rtb_MatrixsConcatenate[i_0 << 2] *
          rtb_MatrixConcatenate_0[i];
        rtb_Product[i + (i_0 << 2)] += rtb_MatrixsConcatenate[(i_0 << 2) + 1] *
          rtb_MatrixConcatenate_0[i + 4];
        rtb_Product[i + (i_0 << 2)] += rtb_MatrixsConcatenate[(i_0 << 2) + 2] *
          rtb_MatrixConcatenate_0[i + 8];
        rtb_Product[i + (i_0 << 2)] += rtb_MatrixsConcatenate[(i_0 << 2) + 3] *
          rtb_MatrixConcatenate_0[i + 12];
      }
    }

    /* Product: '<S5>/Product1' incorporates:
     *  Constant: '<S5>/Constant1'
     */
    for (i = 0; i < 4; i++) {
      for (i_0 = 0; i_0 < 4; i_0++) {
        rtb_Product1[i + (i_0 << 2)] = 0.0;
        rtb_Product1[i + (i_0 << 2)] += Target_P.Constant1_Value_c[i_0 << 2] *
          rtb_Product[i];
        rtb_Product1[i + (i_0 << 2)] += Target_P.Constant1_Value_c[(i_0 << 2) +
          1] * rtb_Product[i + 4];
        rtb_Product1[i + (i_0 << 2)] += Target_P.Constant1_Value_c[(i_0 << 2) +
          2] * rtb_Product[i + 8];
        rtb_Product1[i + (i_0 << 2)] += Target_P.Constant1_Value_c[(i_0 << 2) +
          3] * rtb_Product[i + 12];
      }
    }

    /* End of Product: '<S5>/Product1' */

    /* Update for Memory: '<S5>/Memory' */
    memcpy(&Target_DW.Memory_PreviousInput[0], &rtb_Product[0], sizeof(real_T) <<
           4U);
  }

  /* End of Outputs for SubSystem: '<Root>/fkine' */

  /* SignalConversion: '<S6>/ConcatBufferAtVectorConcatenate1In1' incorporates:
   *  Selector: '<S6>/Selector'
   *  Selector: '<S6>/Selector1'
   *  Sum: '<S6>/Subtract'
   */
  rtb_VectorConcatenate1[0] = rtb_Product_f[12] - rtb_Product1[12];

  /* SignalConversion: '<S6>/ConcatBufferAtVectorConcatenate1In2' incorporates:
   *  Selector: '<S6>/Selector'
   *  Selector: '<S6>/Selector1'
   *  Sum: '<S6>/Subtract'
   */
  rtb_VectorConcatenate1[1] = rtb_Product_f[13] - rtb_Product1[13];

  /* SignalConversion: '<S6>/ConcatBufferAtVectorConcatenate1In3' incorporates:
   *  Selector: '<S6>/Selector'
   *  Selector: '<S6>/Selector1'
   *  Sum: '<S6>/Subtract'
   */
  rtb_VectorConcatenate1[2] = rtb_Product_f[14] - rtb_Product1[14];

  /* Product: '<S14>/Element product' incorporates:
   *  Selector: '<S6>/Selector2'
   *  Selector: '<S6>/Selector3'
   */
  rtb_Product_0[0] = rtb_Product1[1];
  rtb_Product_0[1] = rtb_Product1[2];
  rtb_Product_0[2] = rtb_Product1[0];
  rtb_Product_0[3] = rtb_Product1[2];
  rtb_Product_0[4] = rtb_Product1[0];
  rtb_Product_0[5] = rtb_Product1[1];
  rtb_Product_f_0[0] = rtb_Product_f[2];
  rtb_Product_f_0[1] = rtb_Product_f[0];
  rtb_Product_f_0[2] = rtb_Product_f[1];
  rtb_Product_f_0[3] = rtb_Product_f[1];
  rtb_Product_f_0[4] = rtb_Product_f[2];
  rtb_Product_f_0[5] = rtb_Product_f[0];
  for (i = 0; i < 6; i++) {
    rtb_Elementproduct[i] = rtb_Product_0[i] * rtb_Product_f_0[i];
  }

  /* End of Product: '<S14>/Element product' */

  /* Sum: '<S14>/Add3' */
  rtb_Selector7_idx = rtb_Elementproduct[0] - rtb_Elementproduct[3];
  rtb_Selector_i = rtb_Elementproduct[1] - rtb_Elementproduct[4];
  rtb_signal3 = rtb_Elementproduct[2] - rtb_Elementproduct[5];

  /* Product: '<S15>/Element product' incorporates:
   *  Selector: '<S6>/Selector4'
   *  Selector: '<S6>/Selector5'
   */
  rtb_Product_1[0] = rtb_Product1[5];
  rtb_Product_1[1] = rtb_Product1[6];
  rtb_Product_1[2] = rtb_Product1[4];
  rtb_Product_1[3] = rtb_Product1[6];
  rtb_Product_1[4] = rtb_Product1[4];
  rtb_Product_1[5] = rtb_Product1[5];
  rtb_Product_f_1[0] = rtb_Product_f[6];
  rtb_Product_f_1[1] = rtb_Product_f[4];
  rtb_Product_f_1[2] = rtb_Product_f[5];
  rtb_Product_f_1[3] = rtb_Product_f[5];
  rtb_Product_f_1[4] = rtb_Product_f[6];
  rtb_Product_f_1[5] = rtb_Product_f[4];
  for (i = 0; i < 6; i++) {
    rtb_Elementproduct[i] = rtb_Product_1[i] * rtb_Product_f_1[i];
  }

  /* End of Product: '<S15>/Element product' */

  /* Sum: '<S15>/Add3' */
  rtb_Add3_j_idx = rtb_Elementproduct[0] - rtb_Elementproduct[3];
  rtb_Add3_j_idx_0 = rtb_Elementproduct[1] - rtb_Elementproduct[4];
  rtb_Add3_j_idx_1 = rtb_Elementproduct[2] - rtb_Elementproduct[5];

  /* Product: '<S16>/Element product' incorporates:
   *  Selector: '<S6>/Selector6'
   *  Selector: '<S6>/Selector7'
   */
  rtb_Product_2[0] = rtb_Product1[9];
  rtb_Product_2[1] = rtb_Product1[10];
  rtb_Product_2[2] = rtb_Product1[8];
  rtb_Product_2[3] = rtb_Product1[10];
  rtb_Product_2[4] = rtb_Product1[8];
  rtb_Product_2[5] = rtb_Product1[9];
  rtb_Product_f_2[0] = rtb_Product_f[10];
  rtb_Product_f_2[1] = rtb_Product_f[8];
  rtb_Product_f_2[2] = rtb_Product_f[9];
  rtb_Product_f_2[3] = rtb_Product_f[9];
  rtb_Product_f_2[4] = rtb_Product_f[10];
  rtb_Product_f_2[5] = rtb_Product_f[8];
  for (i = 0; i < 6; i++) {
    rtb_Elementproduct[i] = rtb_Product_2[i] * rtb_Product_f_2[i];
  }

  /* End of Product: '<S16>/Element product' */

  /* Gain: '<S6>/Gain' incorporates:
   *  Sum: '<S16>/Add3'
   *  Sum: '<S6>/Add'
   */
  rtb_VectorConcatenate1[3] = ((rtb_Selector7_idx + rtb_Add3_j_idx) +
    (rtb_Elementproduct[0] - rtb_Elementproduct[3])) * Target_P.Gain_Gain_i;
  rtb_VectorConcatenate1[4] = ((rtb_Selector_i + rtb_Add3_j_idx_0) +
    (rtb_Elementproduct[1] - rtb_Elementproduct[4])) * Target_P.Gain_Gain_i;
  rtb_VectorConcatenate1[5] = ((rtb_signal3 + rtb_Add3_j_idx_1) +
    (rtb_Elementproduct[2] - rtb_Elementproduct[5])) * Target_P.Gain_Gain_i;

  /* RateTransition: '<Root>/Rate Transition' */
  Target_DW.RateTransition_7_semaphoreTaken =
    Target_DW.RateTransition_7_ActiveBufIdx;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtUDP SendInport1' incorporates:
   *  RateTransition: '<Root>/Rate Transition'
   *  Selector: '<S3>/Selector'
   *  Selector: '<S3>/Selector1'
   */
  for (i = 0; i < 6; i++) {
    Target_B.TmpSignalConversionAtUDPSendInp[i] = rtb_VectorConcatenate1[i];
  }

  Target_B.TmpSignalConversionAtUDPSendInp[6] = rtb_x;
  Target_B.TmpSignalConversionAtUDPSendInp[7] = rtb_y;
  Target_B.TmpSignalConversionAtUDPSendInp[8] = rtb_z;
  Target_B.TmpSignalConversionAtUDPSendInp[9] =
    Target_DW.RateTransition_7_Buffer[Target_DW.RateTransition_7_ActiveBufIdx];
  Target_B.TmpSignalConversionAtUDPSendInp[10] = rtb_Product1[12];
  Target_B.TmpSignalConversionAtUDPSendInp[11] = rtb_Product1[13];

  /* End of SignalConversion: '<Root>/TmpSignal ConversionAtUDP SendInport1' */

  /* Update for S-Function (sdspToNetwork): '<Root>/UDP Send' */
  sErr = GetErrorBuffer(&Target_DW.UDPSend_NetworkLib[0U]);
  LibUpdate_Network(&Target_DW.UDPSend_NetworkLib[0U],
                    &Target_B.TmpSignalConversionAtUDPSendInp[0U], 12);
  if (*sErr != 0) {
    rtmSetErrorStatus(Target_M, sErr);
    rtmSetStopRequested(Target_M, 1);
  }

  /* End of Update for S-Function (sdspToNetwork): '<Root>/UDP Send' */
}

/* Model initialize function */
void Target_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Target_M, 0,
                sizeof(RT_MODEL_Target_T));

  /* block I/O */
  (void) memset(((void *) &Target_B), 0,
                sizeof(B_Target_T));

  /* states (dwork) */
  (void) memset((void *)&Target_DW, 0,
                sizeof(DW_Target_T));

  {
    char_T *sErr;

    /* user code (Start function Body) */

    /* System '<Root>' */
    i= open(MOUSEFILE,O_RDONLY);
    sem_init(&main_sem, 0, 0);
    rc = makeTimer("First Timer", &firstTimerID, TIMER1, TIMER1);

    /* Start for S-Function (linux_task): '<S4>/S-Function1' */
    {
      pthread_attr_t attr;
      pthread_t thread;
      struct sched_param param;
      int policy;
      int inherit;
      int ret;
      size_t stackSize;
      pthread_attr_init(&attr);

      /* Set thread inherit attribute */
      inherit = PTHREAD_EXPLICIT_SCHED;
      ret = pthread_attr_setinheritsched(&attr, PTHREAD_EXPLICIT_SCHED);
      CHECK_STATUS(ret, "pthread_attr_setinheritsched");

      /* Set thread detach attribute */
      ret = pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
      CHECK_STATUS(ret, "pthread_attr_setdetachstate");

      /* Set thread stack size attribute */
      stackSize = (512 > PTHREAD_STACK_MIN) ? 512:PTHREAD_STACK_MIN;
      ret = pthread_attr_setstacksize(&attr, stackSize);
      CHECK_STATUS(ret, "pthread_attr_setstacksize");

      /* Set thread schedule policy attribute */
      policy = SCHED_FIFO;
      ret = pthread_attr_setschedpolicy(&attr, policy);
      CHECK_STATUS(ret, "pthread_attr_setschedpolicy");

      /* Set thread priority attribute */
      param.sched_priority = (int_T)1.0;
      ret = pthread_attr_setschedparam(&attr, &param);
      CHECK_STATUS(ret, "pthread_attr_setschedpolicy");

      /* Create the thread */
      ret = pthread_create(&thread, &attr, (void *) Task0_fcn, NULL);
      CHECK_STATUS(ret, "pthread_create");
      pthread_attr_destroy(&attr);
    }

    /* Start for S-Function (sdspFromNetwork): '<Root>/UDP Receive' */
    sErr = GetErrorBuffer(&Target_DW.UDPReceive_NetworkLib[0U]);
    CreateUDPInterface(&Target_DW.UDPReceive_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&Target_DW.UDPReceive_NetworkLib[0U], 0, "0.0.0.0",
                        25001, "0.0.0.0", -1, 8192, 8, 700);
    }

    if (*sErr == 0) {
      LibStart(&Target_DW.UDPReceive_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&Target_DW.UDPReceive_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(Target_M, sErr);
        rtmSetStopRequested(Target_M, 1);
      }
    }

    /* End of Start for S-Function (sdspFromNetwork): '<Root>/UDP Receive' */

    /* InitializeConditions for Iterator SubSystem: '<Root>/fkine' */
    /* InitializeConditions for Memory: '<S5>/Memory' */
    memcpy(&Target_DW.Memory_PreviousInput[0], &Target_P.Memory_X0[0], sizeof
           (real_T) << 4U);

    /* End of InitializeConditions for SubSystem: '<Root>/fkine' */

    /* Start for S-Function (sdspToNetwork): '<Root>/UDP Send' */
    sErr = GetErrorBuffer(&Target_DW.UDPSend_NetworkLib[0U]);
    CreateUDPInterface(&Target_DW.UDPSend_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&Target_DW.UDPSend_NetworkLib[0U], 1, "255.255.255.255",
                        -1, "10.218.99.202", 25000, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&Target_DW.UDPSend_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&Target_DW.UDPSend_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(Target_M, sErr);
        rtmSetStopRequested(Target_M, 1);
      }
    }

    /* End of Start for S-Function (sdspToNetwork): '<Root>/UDP Send' */
  }

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  Target_DW.RateTransition_1_Buffer[0] = Target_P.RateTransition_1_X0;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  Target_DW.RateTransition_2_Buffer[0] = Target_P.RateTransition_2_X0;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  Target_DW.RateTransition_3_Buffer[0] = Target_P.RateTransition_3_X0;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  Target_DW.RateTransition_4_Buffer[0] = Target_P.RateTransition_4_X0;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  Target_DW.RateTransition_5_Buffer[0] = Target_P.RateTransition_5_X0;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  Target_DW.RateTransition_6_Buffer[0] = Target_P.RateTransition_6_X0;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  Target_DW.RateTransition_7_Buffer[0] = Target_P.RateTransition_7_X0;
}

/* Model terminate function */
void Target_terminate(void)
{
  char_T *sErr;

  /* Terminate for S-Function (sdspFromNetwork): '<Root>/UDP Receive' */
  sErr = GetErrorBuffer(&Target_DW.UDPReceive_NetworkLib[0U]);
  LibTerminate(&Target_DW.UDPReceive_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(Target_M, sErr);
    rtmSetStopRequested(Target_M, 1);
  }

  LibDestroy(&Target_DW.UDPReceive_NetworkLib[0U], 0);
  DestroyUDPInterface(&Target_DW.UDPReceive_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspFromNetwork): '<Root>/UDP Receive' */

  /* Terminate for S-Function (sdspToNetwork): '<Root>/UDP Send' */
  sErr = GetErrorBuffer(&Target_DW.UDPSend_NetworkLib[0U]);
  LibTerminate(&Target_DW.UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(Target_M, sErr);
    rtmSetStopRequested(Target_M, 1);
  }

  LibDestroy(&Target_DW.UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&Target_DW.UDPSend_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspToNetwork): '<Root>/UDP Send' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
