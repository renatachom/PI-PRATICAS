#include <iostream>
#include <cstring>

int main() {
    char data[11];
    std::cout << "Digite uma data (dd/mm/aaaa): ";
    std::cin >> data;

    char *dia = strtok(data, "/");
    char *mes = strtok(NULL, "/");
    char *ano = strtok(NULL, "/");

    std::cout << "Dia: " << dia << "\nMês: " << mes << "\nAno: " << ano << std::endl;

    return 0;
}
