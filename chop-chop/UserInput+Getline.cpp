#include <iostream> // header files that contains function for basic input and output operation

int main () {
       //user input - 
        // cout (character output) << (insertion operator) 
        // cin (console input) >> (extraction operator)
        std::string name_mo;
        int age_mo;

            
            std::cout << "What's your age?: ";
            std::cin >> age_mo;

            std::cout << "What's your name?: ";
            std::getline(std::cin >> std::ws, name_mo) >> name_mo; // yung (get line) para tumanggap siya ng space, kasi yung (string) bawal spaces
             //yung (std::ws,) ginagamit lang pag meron sa taas niya na mga user input
             //pero pag nauna naman itong name user input, hindi na need ng (ws)


                std::cout << "Hello " << name_mo <<" - user input"; 
                std::cout << "You are " << age_mo <<" - user input"; 

return 0;
}