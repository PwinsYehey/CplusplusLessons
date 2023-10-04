#include <iostream>


int main () {
    std::cout << "********** ACTIVITY 5, PROBLEM 3 **********\n";
    
    std::cout << "AND OPERATOR " << '\n';
    std::cout << "T && T = " << (true && true) << '\n';
    std::cout << "T && F = " << (true && false) << '\n';
    std::cout << "F && T = " << (false && true) << '\n';
    std::cout << "F && F = " << (false && false) << '\n';
    std::cout << '\n';

    
    std::cout << "OR OPERATOR" << '\n';
    std::cout << "T || T = " << (true || true) << '\n';
    std::cout << "T || F = " << (true || false) << '\n';
    std::cout << "F || T = " << (false || true) << '\n';
    std::cout << "F || F = " << (false || false) << '\n';
    std::cout << '\n';

    
    std::cout << "NOT OPERATOR" << '\n';
    std::cout << "!TRUE = " << (!true) << '\n';
    std::cout << "!FALSE = " << (!false) << '\n';

    std::cout << "******************************************** \n";
    return 0;
}