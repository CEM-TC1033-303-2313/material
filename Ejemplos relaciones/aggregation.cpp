#include <iostream>

class Profesor {
private:
    std::string nombre;
public:
    Profesor(std::string nombre): nombre{nombre} {}
    std::string getNombre() const { return nombre; }
};

class Clase {
private:
    const Profesor &profesor;
public:
    Clase(const Profesor &profesor): profesor{profesor} {}
    void docente() {
        std::cout << profesor.getNombre() << " imparte la clase." << std::endl;
    }
};

int main() {
    Profesor profesor{"Aram"};
    {
    Clase tc1033 {profesor};
    tc1033.docente();
    }
    std::cout << profesor.getNombre() << " sigue existiendo." << std::endl;
}

