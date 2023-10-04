#include <iostream>
#include <iomanip>

int main() {
    double balance = 0;
    int choice = 0;

    do {
        std::cout << "*********** BANKING SYSTEM **********\n";
        std::cout << "Enter choice\n";
        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit money\n";
        std::cout << "3. Withdraw money\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

            std::cin.clear();
            fflush(stdin);

    switch (choice) {
        case 1:
            std::cout << "Your balance is: $" << std::fixed << std::setprecision(2) << balance << '\n';
            break;

        case 2:
            double depositAmount;

            std::cout << "Enter amount to be deposited: ";
            std::cin >> depositAmount;

                if (depositAmount > 0) {
                    balance += depositAmount;
                    }
                else {
                    std::cout << "Invalid amount.\n";
                    }
                break;

        case 3:
            double withdrawAmount;

            std::cout << "Enter amount to be withdrawn: ";
            std::cin >> withdrawAmount;

                if (withdrawAmount > balance) {
                    std::cout << "Insufficient funds.\n";
                    } 
                else if (withdrawAmount < 0) {
                    std::cout << "Invalid amount.\n";
                    } 
                else {
                    balance -= withdrawAmount;
                    }
                break;

            case 4:
                std::cout << "Thanks for visiting!\n";
                break;

            default:
                std::cout << "Invalid choice.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}