#include <iostream>

int main() {
  int x = 10;
  int y = 3;
  int  z = x + y;

  /**
   * this is goint to be int, however, in reality we get a floating point number
   * in C++ if both operands are integers then the result of division will also be
   * an integer. Even if you declare divisionResult var as of type double
   */
  int divisionResult = x / y;
  std::cout << divisionResult;
  std::cout << " ";


  /**
   * So, in order to get a floating point number we need to convert at least one
   * of the operands to double
   */

  double xSecondRound = 10;
  int ySecondRound = 3;
  double zSecondRound = xSecondRound / ySecondRound;

  std::cout << zSecondRound;

  /**
   * modulus operator `%` return remained
   * increment operator `++` as postfix or prefix
   * decrement operator `--` as postfix or prefix
   */

  return 0;
}