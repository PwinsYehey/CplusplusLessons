#include <iostream>

int main() {
    int year = 2023;
    int month = 10;
    int day = 4;

    std::cout << "********** PROBLEM 1 **********\n";
        std::cout << "Today is: ";

    switch (day) {
        case 0:
            std::cout << "Saturday\n";
            break;
        case 1:
            std::cout << "Sunday\n";
            break;
        case 2:
            std::cout << "Monday\n";
            break;
        case 3:
            std::cout << "Tuesday\n";
            break;
        case 4:
            std::cout << "Wednesday\n";
            break;
        case 5:
            std::cout << "Thursday\n";
            break;
        case 6:
            std::cout << "Friday\n";
            break;
        default:
            std::cout << "Invalid day\n";
    }
    std::cout << "*******************************\n";
return 0;
}