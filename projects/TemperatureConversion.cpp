#include <iostream>

int main () {

// Temperature conversion program
    double temp;
    char unit;

    std::cout << "********** TEMPERATURE CONVERSION **********\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celcius\n";
    std::cout << "What unit would you like tocovert to: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f') {
        std::cout << "Enter the temperature in Celius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "The Temperature is: " << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c') {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "The Temperature is: " << temp << "C\n";
    }
    std::cout << "*********************************************";

return 0;
}
