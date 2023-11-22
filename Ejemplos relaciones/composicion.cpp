#include <iostream>

class Motor {
private:
    int hp;
public:
    Motor(int hp): hp{hp} {}
    void arranca() const {
        std::cout << "Arrancando los " << hp << " caballos de fuerza." << std::endl;
    }
};

class Auto {
private:
    Motor motor;
public:
    Auto(int hp): motor{hp} {}
    void enciende() {
        std::cout << "Encendiendo auto..." << std::endl;
        motor.arranca();
    }
};

int main() {
    Auto coche{150};
    coche.enciende();
}

