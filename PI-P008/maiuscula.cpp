#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cctype>

void generateRandomString(char* str, int length) {
    for (int i = 0; i < length; ++i) {
        str[i] = 'a' + rand() % ('z' - 'a' + 1);
    }
    str[length] = '\0';
}

void capitalizeFirstChar(std::string& str) {
    str[0] = std::toupper(str[0]);
}

int main() {
    const int length = 10;
    const int numStrings = 10;
    std::vector<std::string> strings(numStrings);

    std::srand(std::time(0));

    for (int i = 0; i < numStrings; ++i) {
        char str[length + 1];
        generateRandomString(str, length);
        strings[i] = str;
    }

    for (auto& str : strings) {
        capitalizeFirstChar(str);
    }

    // Imprimir as strings modificadas
    for (const auto& str : strings) {
        std::cout << str << std::endl;
    }

    return 0;
}
