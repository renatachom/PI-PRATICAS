#include <iostream>
#include <cstring>
#include <cstdlib>

bool isDateValid(int dia, int mes, int ano) {
    if (mes < 1 || mes > 12 || dia < 1) {
        return false;
    }
    if (mes == 2) {
        bool isLeap = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
        if (isLeap && dia > 29) return false;
        if (!isLeap && dia > 28) return false;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia > 30) return false;
    } else {
        if (dia > 31) return false;
    }
    return true;
}

const char* getMonthName(int mes) {
    const char* meses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };
    return meses[mes - 1];
}

int main() {
    char data[11];
    std::cout << "Digite uma data (dd/mm/aaaa): ";
    std::cin >> data;

    int dia = std::atoi(strtok(data, "/"));
    int mes = std::atoi(strtok(NULL, "/"));
    int ano = std::atoi(strtok(NULL, "/"));

    if (isDateValid(dia, mes, ano)) {
        std::cout << dia << " de " << getMonthName(mes) << " de " << ano << std::endl;
    } else {
        std::cout << "Data inválida" << std::endl;
    }

    return 0;
}
