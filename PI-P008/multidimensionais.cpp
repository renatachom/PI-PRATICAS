#include <iostream>
#include <cstdlib>
#include <ctime>

const int WIDTH = 640;
const int HEIGHT = 480;

int main() {
    int image[HEIGHT][WIDTH];

    std::srand(std::time(0));

    for (int i = 0; i < HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j) {
            image[i][j] = std::rand() % 256;
        }
    }

    // Imprimir a imagem (opcional)
    for (int i = 0; i < HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j) {
            std::cout << image[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
