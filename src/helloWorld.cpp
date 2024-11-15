#include <iostream> // iostream is a file in the c++ standard library
// ! comments don't get compiled

// main function is the entry point of our program
int main() {
  /**
   * `std` is short for `standard library`. std is like a bucket or a container of
   * features that are currently available for us, the features we have imported on
   * the top `::` gives access to those features
   * `cout` is short for `character out`. some people think it is short for
   * `console out` but isn't not correct
   */
  std::cout << "Hello World"; // in c++ this line is called a statement because it the operating system what to do
  // whenever we type a statement we should terminate it with semicolon `;`


  // variables
  int file_size = 100;
  double sales = 9.99;

  std::cout << file_size;

  /**
   * zero tells operating system that our program is going to terminate correctly
   * any other number (positive or negative) that tell the operating system that our
   * program encountered an error
   */
  return 0;
}