#include <iostream>
#include <ctime> // to access time function

int main () {
    // Random event generator - maganda to sa mga laro na kailangan ng random event to occur like random monsters or weather changes

    srand(time (0) );

    int ranNum = rand () % 5 + 1;

    switch (ranNum) {
        case 1: std::cout << "You win a sticker!\n";
        break;
        case 2: std::cout << "You win a t-shirt!\n";
        break;
        case 3: std::cout << "You win a free lunch!\n";
        break;
        case 4: std::cout << "You win a gift card!\n";
        break;
        case 5: std::cout << "You win a concert ticket!\n";
        break;
    }
    
return 0;
}