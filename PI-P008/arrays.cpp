#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int size = 100;
    int arr[size];

    std::srand(std::time(0));

    for (int i = 0; i < size; ++i) {
        arr[i] = 1 + std::rand() % 20;
    }

    // Imprimir o array
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
