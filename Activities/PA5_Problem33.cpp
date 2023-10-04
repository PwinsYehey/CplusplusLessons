#include <iostream>

int main() {
    char t = 'T';
    char f = 'F';

    std::cout << "********** ACTIVITY 5, PROBLEM 3 **********\n";

    std::cout << "AND OPERATOR " << '\n';
    std::cout << "T && T = " << t << '\n';
    std::cout << "T && F = " << f << '\n';
    std::cout << "F && T = " << f << '\n';
    std::cout << "F && F = " << f << '\n';
    std::cout << '\n';

    std::cout << "OR OPERATOR" << '\n';
    std::cout << "T || T = " << t << '\n';
    std::cout << "T || F = " << t << '\n';
    std::cout << "F || T = " << t << '\n';
    std::cout << "F || F = " << f << '\n';
    std::cout << '\n';

    std::cout << "NOT OPERATOR" << '\n';
    std::cout << "!TRUE = " << f << '\n';
    std::cout << "!FALSE = " << t << '\n';

    std::cout << "******************************************** \n";
    return 0;
}