#include <iostream> // header files that contains function for basic input and output operation

int main () { // where the program begins
    // Variable - a represenation of some number or value (in programming you can store more than numbers like characters/whole sentences and etc)
    // When you declare a variable, you give it a name, specify its data type, and allocate memory for it.

        // Here's how you declare and use variables in C++:
            // Variable declaration: data_type variable_name;
                int xx;

            // Variable initialization: variable_name = value;
                xx = 24;


            // Combining declaration and initialization: data_type variable_name = value;
                int x = 24; // assignment na tawag niya kapag binago natin value niya after initialize
                int y = 25;
                int sum = x + y;

                std::cout <<"The answer is = "<< sum << '\n';



    // Data types - define the kind of data that a variable can hold
        // Boolean:
            // bool (keyword) (true or false)
                bool student = true;
        
        // Charaters:
            // char (single character/letter)
                char grade = 'A';
            // wchar_t (to handle different languages, symbols and emojis)
                wchar_t wideChar = L'😊';
            // string (objects that represents a sequence of text)
                std::string name = "Prince";
            // wstring (to handle different language or symbols)
                std::wstring wideString = L"世界!";

        // Integers:
            // integers (whole number)
                int age = 21;

        // Floating-point: 
            // float (includes with decimal numbers, single-precision)
                float age = 21.123;
            // double (icludes with decima numbers, double-precision)
                double age = 21.123;
            


        // Modifiers - provide additional information about the data types and variables
            // signed (default of int)
                signed int age = -42;
            // unsigned integers (cannot hold negative numbers or values)
                unsigned int age = 42;
            // short (same as int but can only hold smaller numbers)
                short int price = 2000;
            // long (same as int but can hold larger numbers)
                long int price = 200000;
            // constant - refers to a value that cannot be altered or changed during the execution of a program (remember to uppercase the variable to make it work)
                const int LIGHT_SPEED = 299792458; // uses in local variable
                #define LIGHT_SPEED = 299792458; // uses in global variable


                
                
return 0; // if it reach here, it means there are no problems in the code
}