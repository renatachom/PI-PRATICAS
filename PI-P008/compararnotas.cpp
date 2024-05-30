#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int size = 15;
    float notas1[size], notas2[size];

    std::srand(std::time(0));

    for (int i = 0; i < size; ++i) {
        notas1[i] = ((float)std::rand() / RAND_MAX) * 10;
        notas2[i] = ((float)std::rand() / RAND_MAX) * 10;
    }

    // Comparar as notas das duas avaliações
    for (int i = 0; i < size; ++i) {
        if (notas2[i] > notas1[i]) {
            std::cout << "Aluno " << (i + 1) << ": Melhorou" << std::endl;
        } else if (notas2[i] < notas1[i]) {
            std::cout << "Aluno " << (i + 1) << ": Piorou" << std::endl;
        } else {
            std::cout << "Aluno " << (i + 1) << ": Manteve a nota" << std::endl;
        }
    }

    return 0;
}
