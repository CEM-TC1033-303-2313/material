#include <iostream>

int main() {
    char a;
    std::cout << "Ingrese un valor entero: ";
    std::cin >> a;
    switch (a) {
        case 'a':
            std::cout << "Uno" << std::endl;
            break;
        case 'b':
            std::cout << "Dos" << std::endl;
            break;
        default:
            std::cout << "No es ni uno ni dos..." << std::endl;
    }
}