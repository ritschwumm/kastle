#ifndef TR_HH_H_
#define TR_HH_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define TR_HH_NUM_CELLS 629
#define TR_HH_SAMPLERATE 16384
 
const char __attribute__((section(".progmem.data"))) TR_HH_DATA [] = {0, 4, -1,
-15, 18, -4, -6, 15, -9, 6, -16, 3, 0, -1, 0, -3, 16, 0, -4, -18, 13, -7, -5, 4,
3, 10, 2, 15, -7, 33, 7, -10, 18, -27, 2, -3, 16, -5, -31, -5, -17, 8, -22, -6,
-8, -11, 9, -9, 1, -9, -10, -3, 6, 27, 6, -1, -13, -23, 6, -12, 16, 5, 24, 9, 8,
14, -9, 5, -20, 10, -25, -5, -12, 4, -11, -17, 8, -9, 11, -18, 23, -9, 14, 0, 9,
11, 4, 16, -22, 13, -7, 12, -10, 4, -26, -18, 3, -7, 14, -17, 3, -1, 18, -5, 11,
14, 0, 7, -15, 8, -7, -5, -5, -2, -7, -18, -3, -4, 4, -4, -2, 11, 12, 4, 1, 3,
-8, -13, -2, 2, 7, 0, 11, 6, 1, -3, -1, 9, 1, -1, -6, -1, -3, 11, -12, -2, -10,
-4, 2, 4, 4, -3, 12, -6, 4, -23, 4, 8, -4, 7, -6, -2, -1, -4, -11, -10, -10, 6,
-5, -5, 3, -1, 3, 9, -1, 2, 0, 0, 12, -3, 4, -3, -2, -6, 12, 0, 2, 15, -1, 6,
-9, 6, -4, -1, -3, -16, -1, -4, -4, -2, -7, -7, 8, 4, 1, 8, 2, -5, 0, -8, 1, 5,
6, 0, -11, 1, -12, 0, 8, -6, -3, -3, -7, -1, 3, -5, 5, -4, 4, 16, -7, 8, 4, 1,
7, -6, -12, -7, 7, 1, 1, -3, 0, 1, 2, 1, -9, -5, 7, -3, -6, -3, -7, 4, -2, 8, 7,
0, 11, 1, -5, -3, -11, -9, 5, -3, -3, -4, -3, 5, 2, 10, -6, -3, 8, -7, -8, -2,
3, -1, 5, 2, 1, 3, 2, 8, 1, -3, -2, -7, -3, 1, -3, -1, 2, 1, -6, -4, 0, -5, 1,
1, 1, 1, 2, 2, -7, 1, 6, -2, -3, 7, 2, -1, -9, -6, 3, -2, 1, -1, -1, -7, 1, 9,
-1, -3, 3, 6, -5, 4, -3, -1, 3, -13, -3, 2, 5, -5, 2, -8, 3, 1, -4, 2, -6, 8,
-9, 1, 5, -5, -7, -1, 4, -1, -3, 4, 0, -3, -1, -1, 4, -1, -1, 3, 4, 1, 1, -7, 4,
6, -2, -4, -4, 0, 2, -2, -3, 3, -7, 2, -2, -1, -2, 2, 0, -5, -6, -7, 3, -2, 5,
-6, 4, 2, -2, 7, -1, -2, 1, 0, -5, 2, -3, 3, 0, 2, 4, -5, 1, 2, 3, -3, 3, -3,
-2, 3, -4, -1, -2, 1, -4, -6, -1, 4, -3, -3, -2, -5, 1, -3, 6, -2, 0, 2, 1, 0,
-2, 1, -9, 5, -5, 4, 4, -2, 6, -1, 0, -4, 4, 2, -1, -1, 1, -3, -2, -1, -7, 1,
-1, -6, 1, -3, -3, 2, -5, 3, -2, -3, 3, -1, -2, 1, 1, 0, 0, 0, 2, -2, 1, 5, 0,
-2, 3, -2, 0, -2, 0, -1, -7, 0, -1, -1, -5, 2, 0, 2, 0, -2, 1, -3, 0, -2, -4,
-1, 3, 1, -1, -3, -2, -1, -1, 1, -2, 1, 3, 2, 2, 0, 0, -2, 3, -5, -3, 2, -1, -3,
-3, 5, 1, -1, -1, 0, 1, 0, -3, -2, 0, 1, -1, 0, 2, -2, -1, -2, 3, -3, -2, 1, -2,
-1, -1, 3, 1, -2, -2, -1, -1, -1, 0, -1, 0, 1, 0, 0, 4, 3, -2, -1, -2, 0, 0, 0,
-2, -5, 0, 0, 0, 1, -3, -2, -1, -2, -3, 0, -2, -2, 1, -2, 0, 0, 1, -1, 0, 1, 2,
-2, -1, 0, 0, 2, 1, 1, -1, 2, -1, 0, -1, 1, -2, 0, -1, -3, 1, -2, 0, -2, -1, 0,
0, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, };
//const char* sampleTable = TR_HH_DATA;
//const uint16_t sampleLength = TR_HH_NUM_CELLS;
#endif /* 909_HH_H_ */