#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
    const int size = 250;
    float temperatures[size];

    std::srand(std::time(0));

    for (int i = 0; i < size; ++i) {
        temperatures[i] = 10 + 30.0 * (std::rand() % 100) / 3000.0;
    }

    float maxTemp = *std::max_element(temperatures, temperatures + size);
    float minTemp = *std::min_element(temperatures, temperatures + size);

    std::cout << "Temperatura máxima: " << maxTemp << std::endl;
    std::cout << "Temperatura mínima: " << minTemp << std::endl;

    return 0;
}
