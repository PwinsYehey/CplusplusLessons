#include <iostream>
#include <ctime> // to access time function

int main () {
    // Random number generator - maganda gamitin to sa mga games na kailangan iroll yung dice.
    // pseudo random numbers - pseudo-random numbers are not truly random; they are deterministic and predictable given the same seed value and algorithm. Therefore, they are not suitable for cryptographic purposes where true randomness and unpredictability are crucial.

    srand(time(NULL)); // ito yung nag gegenerate ng random numbers // yung time, current calendar time lang yan

    int num11 = (rand () % 6) + 1; // kaya kailangan ng + 1 dahil pag wala yan mag sisimula yung number simula 0 to 5
    int num22 = (rand () % 6) + 1;
    int num33 = (rand () % 6) + 1;

    std::cout << num11 << '\n';
    std::cout << num22 << '\n';
    std::cout << num33 << '\n';

return 0;
}