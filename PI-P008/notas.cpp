#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int size = 15;
    float notas1[size];

    std::srand(std::time(0));

    for (int i = 0; i < size; ++i) {
        notas1[i] = ((float)std::rand() / RAND_MAX) * 10;
    }

    // Imprimir as notas da primeira avaliação
    for (int i = 0; i < size; ++i) {
        std::cout << notas1[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
