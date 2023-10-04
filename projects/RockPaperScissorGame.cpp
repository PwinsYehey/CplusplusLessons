#include <iostream> // header files that contains function for basic input and output operation
#include <ctime>
#include <iomanip>

void showChoice (int choice) {
    switch (choice) {
        case 1: 
             std::cout << "Rock\n";
            break;
        case 2:
            std::cout << "Paper\n";
             break;
        case 3:
            std::cout << "Scissor\n";
            break;
        default:
            std::cout << "Invalid choice\n";
            break;
    }
}

std::string determineWinner (int playerChoice, int computerChoice) {
    if (playerChoice == computerChoice) {
        return "It's a tie!";
    }
    else if ( 
        (playerChoice == 1 && computerChoice == 3) ||
        (playerChoice == 2 && computerChoice == 1) ||
        (playerChoice == 3 && computerChoice == 2) ) {
        return "You!";
        }
    else {
        return "Computer!";
    }
}

int main () { // where the program begins
    int playerChoice, computerChoice;
    char playAgain;

    do {
    // Starting the game
        std::cout << "********** ROCK PAPER SCISSOR GAME! **********\n";
        std::cout << "Enter your choice (1 for Rock, 2 for Paper, 3 for Scissor): ";
        std::cin >> playerChoice;
        std::cout << '\n';

    // Player turn
        std::cout << "You choose: ";
        showChoice (playerChoice);

    // Computer turn
        std::cout << "Computer choose: ";
        srand(time(0));
        computerChoice = rand() % 3 + 1;
        showChoice (computerChoice);

    // Determine winner
        std::string result = determineWinner (playerChoice, computerChoice);
        std::cout << "The winner is: " << result << '\n';
        std::cout << "**********************************************\n"; 

    // Play again option
    std::cout << "Do you want to play again? (Y/N): ";
    std::cin >> playAgain;
    std::cout << '\n';

    } while (playAgain == 'Y' || playAgain == 'y');

    std::cout << "Thanks for playing!\n";
    


    
return 0;
}
