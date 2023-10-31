#include <iostream>

int main() {
    // Acentos en minúsculas
    std::cout << "a -> \xA0" << std::endl;
    std::cout << "e -> \x82" << std::endl;
    std::cout << "i -> \xA1" << std::endl;
    std::cout << "o -> \xA2" << std::endl;
    std::cout << "u -> \xA3" << std::endl;
    // Acentos en mayúsculas
    std::cout << "A -> \xB5" << std::endl;
    std::cout << "E -> \x90" << std::endl;
    std::cout << "I -> \xD6" << std::endl;
    std::cout << "O -> \xE0" << std::endl;
    std::cout << "U -> \xE9" << std::endl;
    // Diéresis
    std::cout << "u -> \x81" << std::endl;
    std::cout << "U -> \x9A" << std::endl;
    // ñ y Ñ
    std::cout << "n -> \xA4" << std::endl;
    std::cout << "N -> \xA5" << std::endl;
    // Signos de puntuación
    std::cout << "? -> \xA8" << std::endl;
    std::cout << "! -> \xAD" << std::endl;
}