#include <iostream>

using namespace std;

int main() {
    double temperature_in_celcius = 0;
    double temperature_in_fahrenheit = 0;
    cout << "Enter temperature in Celcius: ";
    cin >> temperature_in_celcius;
    temperature_in_fahrenheit = temperature_in_celcius * 9/5 + 32;
    cout << temperature_in_celcius << " is " << temperature_in_fahrenheit << " in Fahrenheit.";
    return 0;
}