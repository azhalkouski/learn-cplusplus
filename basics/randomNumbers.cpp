#include <iostream>
#include <cstdlib>
#include <ctime>
// for some reason time function works without including ctime

using namespace std;

int main() {
  // time() returns a number of secods ellapsed from Jan 1 1970
  long seconds = time(nullptr);
  srand(seconds);
  int randNumber = rand() % 10;
  cout  << randNumber;

  return 0;
}