#include <iostream>

int main() {
    int height;
    std::cout << "Enter the height of the pattern: ";
    std::cin >> height;

    char currentChar = 'A';
    int rowLength = 1;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < rowLength; j++) {
            std::cout << currentChar++;
            if (currentChar > 'Z') {
                currentChar = 'A';
            }
        }
        std::cout << std::endl;
        rowLength++;
    }
    return 0;
}
