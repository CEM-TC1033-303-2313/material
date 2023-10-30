#include <iostream>

int main() {
    std::cout << "int size: " << sizeof(int) << std::endl;
    std::cout << "float size: " << sizeof(float) << std::endl;
    std::cout << "double size: " << sizeof(double ) << std::endl;
    std::cout << "bool size: " << sizeof(bool) << std::endl;
    std::cout << "char size: " << sizeof(char) << std::endl;
    std::cout << "string size: " << sizeof(std::string) << std::endl;
    return 0; // 0 -> no hubo errores
}
