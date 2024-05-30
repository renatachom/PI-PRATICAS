#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int size = 250;
    float temperatures[size];

    std::srand(std::time(0));

    for (int i = 0; i < size; ++i) {
        temperatures[i] = 10 + 30.0 * (std::rand() % 100) / 3000.0;
    }

    // Imprimir as temperaturas
    for (int i = 0; i < size; ++i) {
        std::cout << temperatures[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
