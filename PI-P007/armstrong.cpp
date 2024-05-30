#include <iostream>
#include <cmath>

bool isArmstrong(int number) {
    int sum = 0, temp = number, digits = 0;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        sum += std::pow(digit, digits);
        temp /= 10;
    }
    return sum == number;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    if (isArmstrong(number)) {
        std::cout << number << " is an Armstrong number." << std::endl;
    } else {
        std::cout << number << " is not an Armstrong number." << std::endl;
    }
    return 0;
}
