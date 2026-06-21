 /*                                      60 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────────┬────────────────────────────╮ ╭─────────────────────────────┬─────────────────────────────╮
  │  0   1   2   3   4   5     │      6   7   8   9  10  11 │ │ LN5 LN4 LN3 LN2 LN1 LN0     │     RN0 RN1 RN2 RN3 RN4 RN5 │
  │ 12  13  14  15  16  17  18 │ 19  20  21  22  23  24  25 │ │ LT5 LT4 LT3 LT2 LT1 LT0 LTE │ RTE RT0 RT1 RT2 RT3 RT4 RT5 │
  │ 26  27  28  29  30  31  32 │ 33  34  35  36  37  38  39 │ │ LM5 LM4 LM3 LM2 LM1 LM0 LME │ RME RM0 RM1 RM2 RM3 RM4 RM5 │
  │ 40  41  42  43  44  45  46 │ 47  48  49  50  51  52  53 │ │ LB5 LB4 LB3 LB2 LB1 LB0 LBE │ RBE RB0 RB1 RB2 RB3 RB4 RB5 │
  ╰───────────────╮ 54  55  56 │ 57  58  59 ╭───────────────╯ ╰───────────────╮ LH2 LH1 LH0 │ RH0 RH1 RH2 ╭───────────────╯
                  ╰────────────┴────────────╯                                 ╰─────────────┴─────────────╯                 */

#pragma once

#define LN0  5  // left-number row
#define LN1  4
#define LN2  3
#define LN3  2
#define LN4  1
#define LN5  0

#define RN0  6  // right-number row
#define RN1  7
#define RN2  8
#define RN3  9
#define RN4 10
#define RN5 11

#define LT0 17  // left-top row
#define LT1 16
#define LT2 15
#define LT3 14
#define LT4 13
#define LT5 12

#define LTE 18  // left-top extra
#define RTE 19  // right-top extra

#define RT0 20  // right-top row
#define RT1 21
#define RT2 22
#define RT3 23
#define RT4 24
#define RT5 25

#define LM0 31  // left-middle row
#define LM1 30
#define LM2 29
#define LM3 28
#define LM4 27
#define LM5 26

#define LME 32  // left-middle extra
#define RME 33  // right-middle extra
                //
#define RM0 34  // right-middle row
#define RM1 35
#define RM2 36
#define RM3 37
#define RM4 38
#define RM5 39

#define LB0 45  // left-bottom row
#define LB1 44
#define LB2 43
#define LB3 42
#define LB4 41
#define LB5 40

#define LBE 46  // left-bottom extra
#define RBE 47  // right-bottom extra

#define RB0 48  // right-bottom row
#define RB1 49
#define RB2 50
#define RB3 51
#define RB4 52
#define RB5 53

#define LH0 56  // left thumb keys
#define LH1 55
#define LH2 54

#define RH0 57  // right thumb keys
#define RH1 58
#define RH2 59

