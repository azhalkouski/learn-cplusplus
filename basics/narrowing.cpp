/**
 * Narrowing in numbers is when you initialize a variable of a smaller type
 * using a larger type.
 */

#include <iostream>

using namespace std;

int main() {
  // int number = 1'000'000;
  // NOT GONNA COMPILE
  // short shortNumber = number;
  // short shortNumber {number};
  // cout << shortNumber;

  short number = 100;
  // additional bytes in memory will be filled with zeros
  int intNumber = number;


  return 0;
}