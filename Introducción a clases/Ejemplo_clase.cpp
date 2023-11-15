#include <iostream>

class Perro {
private:
    std::string nombre;
    std::string raza;
    int edad;
public:
    //Perro() = default;
    /*
    Perro() {
        std::cout << "Llamando al constructor..." << std::endl;
        nombre = "Firulais";
        raza = "Chihuahua";
        edad = 10;
    }*/
    /*
    Perro(std::string nombre, std::string raza, int edad) {
        this->nombre = nombre;
        this->raza = raza;
        this->edad = edad;
    }*/
    Perro(std::string nombre="Firulais", std::string raza="Chihuaha", int edad=10):
        nombre{nombre}, raza{raza}, edad{edad} {}
    /*
    ~Perro() {
        std::cout << "Llamando al destructor..." << std::endl;
    }*/
    std::string getNombre() {
        return nombre;
    }
    std::string getRaza() {
        return raza;
    }
    int getEdad() {
        return edad;
    }
    void setNombre(std::string nuevo_nombre) {
        if (!nuevo_nombre.empty())
            nombre = nuevo_nombre;
    }
    void setEdad(int edad) {
        if (edad > 0)
            this->edad = edad;
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
    Perro p2{"Fido", "Beagle", 5};
    p2.ladrar();
    Perro p3{"Solovino"};
    p3.ladrar();
    Perro p4{"Sololleva", "Golden"};
    p4.ladrar();
}