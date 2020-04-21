#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>

#define DllExport __declspec(dllexport)

/*
  asciiBinaryToInt
  @param s String to convert to int.
  @return Integer conversion from binary string.
*/
DllExport int asciiBinaryToInt(const char* s);

/*
  asciiHexToInt
  @param s String to convert to int.
  @return Integer conversion from hex string.
*/
DllExport int asciiHexToInt(const char* s);

/*
  asciiToDouble
  @param s String to convert to double.
  @return Double conversion from string.
*/
DllExport double asciiToDouble(const char* s);