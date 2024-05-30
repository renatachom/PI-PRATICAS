#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int main() {
    const int size = 100;
    const int range = 20;
    int arr[size];
    int counts[range] = {0};

    std::srand(std::time(0));

    for (int i = 0; i < size; ++i) {
        arr[i] = 1 + std::rand() % 20;
        counts[arr[i] - 1]++;
    }

    // Determinar o(s) número(s) que mais aparecem
    int maxCount = 0;
    std::vector<int> mostFrequent;

    for (int i = 0; i < range; ++i) {
        if (counts[i] > maxCount) {
            maxCount = counts[i];
            mostFrequent.clear();
            mostFrequent.push_back(i + 1);
        } else if (counts[i] == maxCount) {
            mostFrequent.push_back(i + 1);
        }
    }

    // Imprimir os números que mais aparecem
    std::cout << "O(s) número(s) que mais aparecem: ";
    for (int num : mostFrequent) {
        std::cout << num << " ";
    }
    std::cout << "com " << maxCount << " vezes." << std::endl;

    return 0;
}
