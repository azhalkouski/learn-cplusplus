/**
 * 1) Buil-in types
 * 2) Numbers
 * 3) Boolean values
 * 4) Characters and strings
 * 5) Arrays
 */


#include <iostream>

using namespace std;

int main() {
  double price = 99.99;
  /**
   * ! important `F`
   * float numbers MUST contain the letter `F`, otherwise the compiler will
   * consider the number as double and try to store a double value in a float variable
   * which can potentially lead to a data lose
   * ! it can be uppercase of lowercase - it doesn't really matter
   */
  float interestRate = 3.67F;
  // `L` otherwise the compiler will treat the number as int
  long fileSize = 90000L;
  char letter = 'a';
  bool isValid = false;


  /**
   * Brace Initializer
   * 
   * this will result in a compilation failure with a warning. 1.2 is not int
   * if we assign 1.2 to int then the decimal part will be silently lost.
   * 
   * The code will not compile.
   */
  // int number = {1.2};
  // cout << number << endl;


  // Decimal (Base 10) && Binary (Base 2) && Hexadecimal (Base 16)
  int decimalNumber = 255;
  // 255 as binary
  int binaryNumber = 0b11111111;
  // 255 as hexadecimal
  int hexadecimalNumber = 0xFF;
  cout << decimalNumber << " " << binaryNumber << " " << hexadecimalNumber << endl;

  return 0;
}