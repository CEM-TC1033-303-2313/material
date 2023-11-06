#include <iostream>
#include <fstream>

int main() {
    std::ofstream archivo_salida;
    archivo_salida.open("archivo_ejemplo.txt");
    if (archivo_salida.is_open()) {
        archivo_salida << "Hola" << std::endl << "Mundo";
    }
    archivo_salida.close();
    std::ifstream archivo_entrada;
    archivo_entrada.open("archivo_ejemplo.txt");
    if (archivo_entrada.is_open()) {
        std::string contenido;
        while (archivo_entrada.good()) {
            std::getline(archivo_entrada, contenido);
            std::cout << "Contenido: " << contenido << std::endl;
        }
    }
    archivo_entrada.close();
    return 0;
}