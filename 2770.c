#include <stdbool.h>

int convertStringToSignedInteger(char *myString, int strLen) {

  bool isNegative = false;
  int i = 0;
  if (myString[0] == '-') {
    i = 1;
    isNegative = true;
  }

  int result = 0;
  while (i < strLen) {
    result *= 10;
    result += myString[i++] - '0';
  }

  if (isNegative) {
    result *= -1;
  }
  return result;
}

int ZZconvertStringToSignedInteger(char *myString, int strLen) {
  int intValue = 0;
  int i;
  for (i = 0; i < strLen; i++) {
    switch(myString[i]) {
      case '-':
        intValue *= -1;
        break;
      case '0':
        if (i != strLen - 1) {
          intValue += 1 * 10^i;
        }
        break;
      case '1':
        intValue += 1 * 10^i;
        break;
      case '2':
        intValue += 2 * 10^i;
        break;
      case '3':
        intValue += 3 * 10^i;
        break;
      case '4':
        intValue += 4 * 10^i;
        break;
      case '5':
        intValue += 5 * 10^i;
        break;
      case '6':
        intValue += 6 * 10^i;
        break;
      case '7':
        intValue += 7 * 10^i;
        break;
      case '8':
        intValue += 8 * 10^i;
        break;
      case '9':
        intValue += 9 * 10^i;
        break;
    }
  }
  return intValue;
}

