#include <iostream>
#include <cstdlib>
#include <ctime>
#include <numeric>

int main() {
    const int size = 250;
    float temperatures[size];

    std::srand(std::time(0));

    for (int i = 0; i < size; ++i) {
        temperatures[i] = 10 + 30.0 * (std::rand() % 100) / 3000.0;
    }

    float averageTemp = std::accumulate(temperatures, temperatures + size, 0.0) / size;

    std::cout << "Temperatura média: " << averageTemp << std::endl;

    return 0;
}
