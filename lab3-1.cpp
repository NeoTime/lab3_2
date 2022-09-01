#include <iostream>
using namespace std;

int main() {
  double pound_weight, kilo_weight;
  cout << "Enter your weight in pounds: ";
  cin >> pound_weight;

  kilo_weight = pound_weight / 2.20462;

  std::cout << "Your weight in kilograms: " << kilo_weight 
            << "\n";

  double fahrenheit_temp, celsius_temp;
  cout << "Degrees in Fahrenheit: ";
  cin >> fahrenheit_temp;

  celsius_temp = 5 * (fahrenheit_temp - 32) / 9;

  cout << "Degrees in Fahrenheit: " << fahrenheit_temp << "\n";

  cout << "Degrees in Celsius: " << celsius_temp << "\n";

  return 0;
}