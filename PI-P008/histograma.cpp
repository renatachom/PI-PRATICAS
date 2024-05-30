#include <iostream>
#include <cstdlib>
#include <ctime>

const int WIDTH = 640;
const int HEIGHT = 480;
const int INTENSITY_RANGE = 256;

int main() {
    int image[HEIGHT][WIDTH];
    int histogram[INTENSITY_RANGE] = {0};

    std::srand(std::time(0));

    for (int i = 0; i < HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j) {
            image[i][j] = std::rand() % 256;
            histogram[image[i][j]]++;
        }
    }

    // Imprimir o histograma
    for (int i = 0; i < INTENSITY_RANGE; ++i) {
        std::cout << "Intensidade " << i << ": " << histogram[i] << std::endl;
    }

    return 0;
}
