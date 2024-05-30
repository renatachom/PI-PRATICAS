#include <iostream>
#include <vector>

struct Student {
    int matricula;
    float nota1;
    float nota2;
    float nota3;
    float media;
};

int main() {
    std::vector<Student> students;
    char proceed;

    do {
        Student student;
        std::cout << "Enter matricula: ";
        std::cin >> student.matricula;
        std::cout << "Enter nota1: ";
        std::cin >> student.nota1;
        std::cout << "Enter nota2: ";
        std::cin >> student.nota2;
        std::cout << "Enter nota3: ";
        std::cin >> student.nota3;

        student.media = (student.nota1 + student.nota2 + student.nota3) / 3;
        students.push_back(student);

        std::cout << "Do you want to proceed with another student? (y/n): ";
        std::cin >> proceed;

    } while (proceed == 'y' || proceed == 'Y');

    std::cout << "MATRICULA\tNOTA1\tNOTA2\tNOTA3\tMEDIA" << std::endl;
    std::cout << "========================================" << std::endl;
    for (const auto& student : students) {
        std::cout << student.matricula << "\t\t" << student.nota1 << "\t" << student.nota2 << "\t" << student.nota3 << "\t" << student.media << std::endl;
    }

    return 0;
}
