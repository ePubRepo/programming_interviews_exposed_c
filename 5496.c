int numberOfOneBitsInInteger(int input) {
  int numOneBits = 0;

  int currNum = input;
  while (currNum != 0) {
    if ((currNum & 1) == 1) {
      numOneBits++;
    }
    currNum = currNum >> 1;
  }
  return numOneBits;
}
