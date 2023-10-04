#include <iostream>

int main () {
    int number = 365;
    int years;
    int months;
    int weeks;
    int days;

    days = number;
    years = days / 365;
    months = days / 30;
    weeks = days / 7;

    std::cout << "********** ACTIVITY 5, PROBLEM 2 **********\n";

    std::cout << "Number: " << number << '\n';
    std::cout << "Years: " << years << '\n';
    std::cout << "Months: " << months << '\n';
    std::cout << "Weeks: " << weeks << '\n';
    std::cout << "Days: " << days << '\n';

    std::cout << "******************************************** \n";

    return 0;

}