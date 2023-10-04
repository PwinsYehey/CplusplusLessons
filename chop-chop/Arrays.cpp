#include <iostream> // header files that contains function for basic input and output operation
#include <ctime>
#include <iomanip>

// Sort an array
void sort (int array [], int size) {
    int tempt;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array [j + 1]) {
                tempt = array[j];
                array [j] = array [j + 1];
                array [j + 1] = tempt;
            }
    }
    }
}

// Search an array for an element
/*
    int linearSearch(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found
}
*/

// Pass array to a function
/*
void printArray (int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}
*/

int main () { // where the program begins
/*
    // Array - A data stucture that can hold multiple values
    //         values are acessed by an index number
    //         "kind of like a variable that holds ultiple values"
        std::string cars[] = {"toyota", "tesla", "lamborghini"};

        std::cout << cars[0] << '\n';
        std::cout << cars[1] << '\n';
        std::cout << cars[2] << '\n';
    // another way kapag wala ka pa naiisip na iassign sa values
        std::string cars [3];

        cars[0] = "camaro";
        cars[1] = "mustang";
        cars[2] = "camry";

        std::cout << cars[0] << '\n';
        std::cout << cars[1] << '\n';
        std::cout << cars[2] << '\n';



    // Iterate over an array
        std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

        for (int i = 0; i < sizeof(students)/sizeof(std::string); i++) { // sa index natin nag simula tayo sa 0 dahil doon lagi nag sisimula basahin ni computer. sizeof nilagay natin para hindi nanatin kailangan baguhin yung number of elements kapag mag dagdag tayo
            std::cout << students [i] << '\n';
        }



    // Foreach loop - loop that eases the travel over an iterable data set
        std::string students [] = {"Spongebo", "Patrick", "Squidward"};

        for (std::string student : students) { //kaya may student kasi kailangan ng pangalan sa current element na ginagawa
            std::cout << student << '\n';
        }



    // Pass array to a function
        int number[] = {1, 2, 3, 4, 5};
        int size = sizeof(number) / sizeof(number[0]);
        printArray(number, size);
*/


/*
    // Search an array for an element
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Prompt the user to enter a target value
    std::cout << "Enter a number to search for: ";
    int target;
    std::cin >> target; // Read the target value from the user

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }
*/


    // Sort an array
    int array[] = {10, 1, 5, 4, 7, 8, 2, 3, 9, 6};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    for (int element : array) {
        std::cout << element << " ";
    }

    

return 0;
}
