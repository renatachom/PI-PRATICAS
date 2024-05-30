#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int size = 15;
    float notas1[size], notas2[size], medias[size];

    std::srand(std::time(0));

    for (int i = 0; i < size; ++i) {
        notas1[i] = ((float)std::rand() / RAND_MAX) * 10;
        notas2[i] = ((float)std::rand() / RAND_MAX) * 10;
        medias[i] = (notas1[i] + notas2[i]) / 2.0;
    }

    // Imprimir as médias
    for (int i = 0; i < size; ++i) {
        std::cout << "Aluno " << (i + 1) << ": Média = " << medias[i] << std::endl;
    }

    return 0;
}
