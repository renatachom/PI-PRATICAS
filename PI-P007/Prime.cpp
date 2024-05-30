#include <iostream>
#include <cmath>

bool isPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i <= std::sqrt(number); i++) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    std::cout << "Prime numbers between 1 and 100 are: ";
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
