#include <iostream> // header files that contains function for basic input and output operation

std::string concatStrings (std::string string1, std::string string2);

int main () { // where the program begins
    // Function - A block of reusable code
    // Return - return a value back to the spot
        std::string firstName = "Prince";
        std::string lastName = "Herrera";
        std::string fullName = concatStrings(firstName, lastName);

        std::cout << "Hello " << fullName;

    return 0; // if it reach here, it means there are no problems in the code
}

std::string concatStrings (std::string string1, std::string string2) {
    return string1 + " " + string2;
}