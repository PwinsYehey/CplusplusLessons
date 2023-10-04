#include <iostream> 

int main () {
    //if statement - do something if a condition is true. if not, then don't do it.
    int age_moto;

    std::cout << "Enter your age: ";
    std::cin >> age_moto;

        if(age_moto >= 18) { //true
            std::cout << "Welcome to the site!";
        }
        else if (age_moto < 0) { //ginagamit kapag may condition ka pa bago mag false
            std::cout << "You are not born yet!";
        }
        else{ //false 
            std::cout << "You are not old enough to enter!";
        }

    // switch - alternative to using many "else if" statements. compare one value against matching cases.
    int month;

    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch (month){
        case 1:
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is Fabruary";
            break;
        case 3:
            std::cout << "It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;
        case 6:
            std::cout << "It is June";
            break;
        case 7:
            std::cout << "It is July";
            break;
        case 8:
            std::cout << "It is August";
            break;
        case 9:
            std::cout << "It is September";
            break;
        case 10:
            std::cout << "It is October";
            break;
        case 11:
            std::cout << "It is November";
            break;
        case 12:
            std::cout << "It is December";
            break;      
        default:
            std::cout << "Please Enter in only numbers (1-12)"; 
    }

}