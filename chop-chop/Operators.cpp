#include <iostream>

int main () {
    // Arithmetic operators - return the result of a specific aritmetic operation (+ - * /) (% remainder)
        int students = 20;
        double estudyante = 6 - 5 + 4 * 3 / 2; // pag madami operators, pemdas yung ginagamit na pag solve

        students = students + 1; // pede baguhin yung number
        students+=1; //shortway
        students++; //ginagamit pag +1 lang ang kailangan 
        
        std::cout << estudyante << '\n'; // para sa arithmetic



    // Logical operator - used to perform logical operations on Boolean values (true or false). These operators are used to combine or manipulate Boolean expressions and make decisions in your code based on the truth or falsehood of these expressions.
        // && (AND) = check if two conditions are true
        // || (OR) = check if at least one of two conditions is true
        // ! (NOT) = reverses two logical state of its operand
            int age;
            char student;

            std::cout << "Enter your age: ";
            std::cin >> age;

            std::cout << "Are you a student? (Y for Yes, N for No): ";
            std::cin >> student;

            if ((age >= 18 && age <= 30) || (student == 'Y' || student == 'y')) {
                std::cout << "You are eligible for a student discount or are in the 18-30 age group." << '\n';
            } else {
                std::cout << "You are not eligible for a student discount and are not in the 18-30 age group." << '\n';
            }



    // Relational operator - used to compare two values and determine the relationship between them.
        // Equal to (==): Checks if two values are equal.
            int a = 5;
            int b = 5;
            bool isEqual = (a == b); // true

        // Not equal to (!=): Checks if two values are not equal.
            int x = 10;
            int y = 20;
            bool isNotEqual = (x != y); // true

        // Greater than (>): Checks if the left operand is greater than the right operand.
            int p = 15;
            int q = 10;
            bool isGreater = (p > q); // true

        // Less than (<): Checks if the left operand is less than the right operand.
            int m = 5;
            int n = 8;
            bool isLess = (m < n); // true
        // Greater than or equal to (>=): Checks if the left operand is greater than or equal to the right operand.
            int p = 15;
            int q = 10;
            bool isGreaterOrEqual = (p >= q); // true

        // Less than or equal to (<=): Checks if the left operand is less than or equal to the right operand.
            int m = 5;
            int n = 5;
            bool isLessOrEqual = (m <= n); // true

    // Ternary Operator - also known as the conditional operator, is a shorthand way of writing an if-else statement. It allows you to make a decision between two values or expressions based on a condition.
    // Syntax: condition ? expression_if_true : expression_if_false
        std::cout << "********** ACTIVITY 5, PROBLEM 3 **********\n";
        
        std::cout << "AND OPERATOR " << '\n';
        std::cout << "T && T = " << (true && true ? "T" : "F") << '\n';
        std::cout << "T && F = " << (true && false ? "T" : "F") << '\n';
        std::cout << "F && T = " << (false && true ? "T" : "F") << '\n';
        std::cout << "F && F = " << (false && false ? "T" : "F") << '\n';
        std::cout << '\n';

        
        std::cout << "OR OPERATOR" << '\n';
        std::cout << "T || T = " << (true || true ? "T" : "F") << '\n';
        std::cout << "T || F = " << (true || false ? "T" : "F") << '\n';
        std::cout << "F || T = " << (false || true ? "T" : "F") << '\n';
        std::cout << "F || F = " << (false || false ? "T" : "F") << '\n';
        std::cout << '\n';

        
        std::cout << "NOT OPERATOR" << '\n';
        std::cout << "!TRUE = " << (!true ? "T" : "F") << '\n';
        std::cout << "!FALSE = " << (!false ? "T" : "F") << '\n';

        std::cout << "******************************************** \n";

    // Sizeof() operator - determines the size in bytes of a: variable, data type, class, objects, and etc.
        std::string name = "Prince";
        double gpa = 2.5;
        char grade = 'F';
        bool student = true;
        char grades[] = {'A', 'B', 'C', 'D', 'E', 'F' };
        std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

        std::cout <<sizeof(std::string) << " bytes\n";
        std::cout <<sizeof(double) << " bytes\n";
        std::cout <<sizeof(char) << " bytes\n";
        std::cout <<sizeof(bool) << " bytes\n";
        std::cout <<sizeof(grades)/sizeof(char) << " elements\n";
        std::cout <<sizeof(students)/sizeof(std::string) << " elements\n";
return 0;
}
