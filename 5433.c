#include <stdbool.h>

bool isBigEndian() {
  int val = 1;
  int *prt_int = &val;
  char *prt_char = (char *) prt_int;

  if (prt_char[0] == 0) {
    return true;
  } else {
    return false;
  }
}

bool isLittleEndian() {
  int val = 1;
  char *prt_val = (char *) &val;
  return (*prt_val);
}
