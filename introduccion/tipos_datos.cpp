#include <iostream>

int main() {
    std::cout << "int size: " << sizeof(int) << std::endl
              << "float size: " << sizeof(float) << std::endl
              << "double size: " << sizeof(double ) << std::endl
              << "bool size: " << sizeof(bool) << std::endl
              << "char size: " << sizeof(char) << std::endl
              << "string size: " << sizeof(std::string) << std::endl;
    return 0; // 0 -> no hubo errores
}
