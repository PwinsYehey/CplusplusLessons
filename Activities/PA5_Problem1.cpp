#include <iostream>

int main () {
    int x = 57;

    std::cout << "********** ACTIVITY 5, PROBLEM 1 **********\n";

    std::cout << "The number is: " << x << '\n';

    x ++;
    std::cout << "After post increment by 1 the number is: " << x << '\n';

    ++ x;
    std::cout << "After pre increment by 1 the number is: " << x << '\n';

    x +=1;
    std::cout << "after increasing by 1 the number is: " << x << '\n';

    x --;
    std::cout << "After post decrement by 1 the number is: " << x << '\n';

    -- x;
    std::cout << "After pre decrement by 1 the number is: " << x << '\n';

    x -=1;
    std::cout << "After decreasing by 1 the number is: " << x << '\n';

    std::cout << "******************************************** \n";

return 0;
}