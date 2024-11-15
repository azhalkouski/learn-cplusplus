#include <iostream> // standard library

using namespace std;

int main() {
  // int intNumber;
  // double floatingPointNumber;

  // cout << "Enter a value: ";
  // // `>>` is called the stream extraction operator
  // cin >> intNumber;
  // cout << intNumber << endl;

  // cout << "Enter a decimal value: ";
  // cin >> floatingPointNumber;
  // cout << floatingPointNumber << endl;

  double temperatureInFahrenheit;

  cout << "Enter temperature in fahrenheit: ";
  cin >> temperatureInFahrenheit;
  cout << endl;

  cout << "Converted to celsius: " << (temperatureInFahrenheit - 32) / 1.8;


  return 0;
}