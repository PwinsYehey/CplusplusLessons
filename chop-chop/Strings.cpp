#include <iostream>
#include <string>

int main () {
       //String - provides a wide range of methods and functions to manipulate and work with strings (parang placeholder)
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std:: cin, name);

    if (name.length () > 12) { //ginagamit kapag may gusto ilimit yung letra
        std::cout << "Your name can't be over 12 characters";
    }
    else {
        std::cout << "Welcome " << name;
    }

// close

    if (name.empty()) { // ginagamit kapag blanko tapos nag ENTER or LOGIN agad
        std::cout << "You didn't enter your name";
    }
    else {
        std::cout <<"Hello " << name;
    }

// close

    name.append ("@gmail.com"); //ginagamit kapag may gusto idagdag pagtapos itype yung name

    std::cout << "Your username is now " << name;

// close

    name.insert(0, "pogi si "); // ung 0 kung saan magsisimula idisplay yung "pogi si"

    std::cout << name;

    std::cout << name.find ("c");
}