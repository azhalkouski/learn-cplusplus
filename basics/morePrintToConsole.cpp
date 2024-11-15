#include <iostream>

int main() {
  int x = 10;
  int y = 1;


  /**
   * std::cout meand standard output stream
   * `<<` Stream Insertion Operator
   * `std::endl` means end of line
   */
  std::cout << "x = " << x << std::endl // chaining multiple insertion operators
            << "y = " << y;

  return 0;
}