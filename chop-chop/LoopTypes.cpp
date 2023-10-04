#include <iostream>

int main () {
    //While loop - allows you to repeatedly execute a block of code as long as a specified condition remains true. It provides a way to automate tasks that need to be repeated until a certain condition is no longer met. 
        std::string nameagain;

        while(nameagain.empty()) {
            std::cout << "Enter your name: ";
            std::getline (std::cin, nameagain);
        }

        std::cout <<"Hello " << nameagain;



    //Do while loop - babasahin muna yung code bago ideclare kung yung condition ay true
        int numberpa;

        do {
            std::cout << "Enter a positive number: ";
            std::cin >> numberpa;
        }
        while (numberpa < 0);

        std::cout << "The number is: " << numberpa;



    //For loop - Execute a sequence of statements multiple times and abbreviates the code that manages the loop variable.
        for (int i = 1; i <= 10; i++) { // may tatlong statements siya na pede i-add. una index, then stopping condition, lastly increment or decrement our index
            std::cout << i << '\n';
        }
        
            std::cout << "HAPPY NEW YEAR";



    //Nested loop -  is a loop that is placed inside another loop. This means that you have one loop (the outer loop) that contains another loop (the inner loop).
        int rows;
        int columns;
        char symbol;

        std::cout << "How many rows?: ";
        std::cin >> rows;

        std::cout << "How many columns?: ";
        std::cin >> columns;

        std::cout << "Enter a symbol to use: ";
        std::cin >> symbol;

        for (int i = 1; i <= rows; i++){
            for(int j = 1; j <= columns; j++){
                std::cout << symbol;
            }
            std::cout << '\n';
        }

    // Loop Control Statements
        // break - break out of a loop
        // continue statement - Cskip current iteration

            for (int i = 1; 1 <= 20; i++) {
                if (i == 13) {
                    break/continue; // pili nalang ehehehe
                }
                std::cout << i << '\n';
            }
return 0;    
}