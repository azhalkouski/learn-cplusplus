#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double resultFloor = floor(1.2);
  cout << resultFloor << endl;

  double resultPow = pow(2, 3);
  cout << resultPow << endl;


  const double pi = 3.14;
  double radius;
  cout << "Enter circle radius: ";
  cin >> radius;

  double area = pi * pow(radius, 2);
  cout << endl << "Area equals: " << area << endl;

  return 0;
}
