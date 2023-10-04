#include <iostream>

int main() {
    std::string name = "Computer";
    int left = 0;
    int right = name.length() - 1;

    std::cout << "********** PROBLEM 2 **********\n";
        std::cout << "Original Name: " << name <<'\n';

    do {
        std::swap(name[left], name[right]);
        left++;
        right--;
    }
    while (left < right);
        std::cout << "Reversed Name: " << name <<'\n';
    std::cout << "*******************************\n";
    
return 0;
}