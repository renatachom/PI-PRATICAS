#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int size = 100;
    const int range = 20;
    int arr[size];
    int counts[range] = {0};

    std::srand(std::time(0));

    for (int i = 0; i < size; ++i) {
        arr[i] = 1 + std::rand() % 20;
        counts[arr[i] - 1]++;
    }

    // Imprimir quantas vezes cada valor aparece
    for (int i = 0; i < range; ++i) {
        std::cout << (i + 1) << ": " << counts[i] << " vezes" << std::endl;
    }

    return 0;
}
