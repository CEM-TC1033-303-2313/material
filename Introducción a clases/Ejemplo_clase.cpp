#include <iostream>

class Perro {
private:
    std::string nombre;
    std::string raza;
    int edad;
public:
    Perro() {
        std::cout << "Llamando al constructor..." << std::endl;
        nombre = "Firulais";
        raza = "Chihuahua";
        edad = 10;
    }
    ~Perro() {
        std::cout << "Llamando al destructor..." << std::endl;
    }
    void ladrar() {
        std::cout << nombre
                  << " de raza " << raza
                  << " de edad " << edad
                  << ": woof, woof" << std::endl;
    }
};

int main() {
    Perro p1;
    p1.ladrar();
}