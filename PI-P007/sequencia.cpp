#include <iostream>

void printFibonacci(int limit) {
    int a = 0, b = 1, next;
    std::cout << a << " " << b << " ";
    next = a + b;
    while (next <= limit) {
        std::cout << next << " ";
        a = b;
        b = next;
        next = a + b;
    }
    std::cout << std::endl;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    printFibonacci(number);
    return 0;
}
