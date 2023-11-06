#include <iostream>
#include <limits>

int main() {
    std::string alumnos[3];
    int matriculas[3];
    for (int i=0; i<3; i++) {
        std::cout << "Ingresa tu nombre completo:";
        std::getline(std::cin, alumnos[i]);
        std::cout << "Ingresa tu matricula:";
        std::cin >> matriculas[i];
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    for (int i=0; i<3; i++)
        std::cout << "Hola " << alumnos[i]
                  << " con matricula " << matriculas[i] << std::endl;
}