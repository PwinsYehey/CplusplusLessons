#include <iostream>

    // namespace = provides solution for preventing name conflicts in large projets 
        namespace first {
                int x = 1;
        }

        namespace second {
                int x = 2;
        }

        namespace third {
                int x = 3;
        }
        
        namespace fourth {
                int x = 4;
        }

int main () {

    std::cout << first::x <<'\n';
    std::cout << second::x <<'\n';
    std::cout << third::x <<'\n';
    std::cout << fourth::x <<'\n';

}