#include <iostream> // header files that contains function for basic input and output operation

    //typedef - reserved keyword used to create an additional name (nickname) lagi tandaan na dapat lagi may (_t) para gumana
        //type aliases - tawag sa bagong nickname
            //pero mas gamit na daw ang (using) dahil mas suitable sa template
            typedef std::string text_t;
            //or
            using text = std::string; // (binago ko pangalan ng data type)

int main () {

    text firstName = "Prince"; 
    
    std::cout << firstName;
}