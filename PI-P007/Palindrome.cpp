#include <iostream>
#include <string>

bool isPalindrome(int number) {
    std::string numStr = std::to_string(number);
    std::string reversedStr = std::string(numStr.rbegin(), numStr.rend());
    return numStr == reversedStr;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    if (isPalindrome(number)) {
        std::cout << number << " is a palindrome." << std::endl;
    } else {
        std::cout << number << " is not a palindrome." << std::endl;
    }
    return 0;
}
