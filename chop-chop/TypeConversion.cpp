#include <iostream>

int main () {
     // type converion - value of one data type to another
        // Implicit = automatic
        // explicit = precede value with new data type (int)
    double x = (int) 3.14; //cinonvert natin yung double to int

    std:: cout << x << '\n';

// close

    char x = 100;

    std::cout << x; // naging d yung output dahil cinonvert siya sa ascii table


    std::cout << (char) 100; //explicit, same lang output niya sa taas

// close

    // online exam
        int correct = 8; // 8 correct answer
        int questions = 10; // 10 questions
        double score = correct/(double) questions * 100;

        std::cout << score << "%" <<'\n';

}