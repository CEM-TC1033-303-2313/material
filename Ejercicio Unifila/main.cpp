#include <iostream>
#include <limits>
#include "Unifila.h"

int main() {
    Unifila unifila{};
    int choice = 4;
    std::string nombre, asunto;
    while (choice != 0) {
        std::cout << "Opciones: " << std::endl
                  << "1) Formar un cliente." << std::endl
                  << "2) Pasar cliente a caja." << std::endl
                  << "3) Revisar la fila." << std::endl
                  << "0) Salir." << std::endl
                  << "Elija su opcion:";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        switch (choice) {
            case 1:
                std::cout << "Indique el nombre del cliente:";
                std::getline(std::cin, nombre);
                std::cout << "Indique el asunto del cliente:";
                std::getline(std::cin, asunto);
                unifila.formarCliente(nombre, asunto);
                break;
            case 2:
                unifila.pasarSiguienteCliente();
                break;
            case 3:
                unifila.revisarFila();
                break;
            case 0:
                std::cout << "Hasta luego." << std::endl;
                break;
            default:
                std::cout << "Debe elegir una opcion correcta." << std::endl;
        }
    }
    return 0;
}
