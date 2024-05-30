#include <iostream>
#include <cstdlib>
#include <ctime>

void generateRandomString(char* str, int length) {
    for (int i = 0; i < length; ++i) {
        str[i] = 'a' + rand() % ('z' - 'a' + 1);
    }
    str[length] = '\0';
}

int main() {
    const int length = 10;
    char str1[length + 1];
    char str2[length + 1];

    std::srand(std::time(0));

    generateRandomString(str1, length);
    generateRandomString(str2, length);

    std::cout << "String 1: " << str1 << std::endl;
    std::cout << "String 2: " << str2 << std::endl;

    return 0;
}
