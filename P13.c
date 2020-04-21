#include "P13.h"

int asciiBinaryToInt(const char* s) {
  int n = strlen(s);
  int res = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] == '1') {
      res += pow(2, n - i - 1);
    }
  }

  return res;
}

int asciiHexToInt(const char* s) {
  int n = strlen(s);
  int res = 0;

  for (int i = n - 1; i >= 0; i--) {
    int num = 0;
    if (s[i] >= '0' && s[i] <= '9') {
      num = (int)(s[i] - '0');
    } else if (s[i] >= 'A' && s[i] <= 'F') {
      num = (int)(s[i] - 'A') + 10;
    } else if (s[i] >= 'a' && s[i] <= 'f') {
      num = (int)(s[i] - 'a') + 10;
    } else {
      printf("Hex to Int conversion error! Invalid character!\n");
      break;
    }

    res += num * pow(16, n - i - 1);
  }

  return res;
}

double asciiToDouble(const char* s) {
  int n = strlen(s);
  bool positive = true;
  int i = 0;
  char* str = (char*)malloc(n + 1);
  double res = 0;

  if (isdigit(s[0]) == 0 && s[0] != '+' && s[0] != '-') {
    free(str);
    return 0;
  }

  if (s[0] == '+') {
    i = 1;
  }

  if (s[0] == '-') {
    positive = false;
    i = 1;
  }

  for (; i < n; i++) {
    if (s[i] < '0' && s[i] > '9') {
      break;
    }

    str[i] = s[i];
  }
  str[i] = '\0';

  res = atof(str + 1);
  free(str);
  return positive ? res : res * -1;
}