#include <iostream>

using namespace std;

int main() {
  int a = 1;
  int b = 2;

  cout << a;
  cout << b;
  cout << " ";

  int previous_a = a;
  a = b;
  b = previous_a;

  cout << a;
  cout << b;

  return 0;
}