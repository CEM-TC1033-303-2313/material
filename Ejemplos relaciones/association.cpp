#include <iostream>

class Empleado {
private:
    double salario;
public:
    Empleado(double salario): salario{salario} {}
    double calculoSalario() {
        return salario * 0.72;
    }
};

class Auditor {
public:
    static void auditar(Empleado empleado) {
        std::cout << "El sueldo es " << empleado.calculoSalario() << std::endl;
    }
};

int main() {
    Empleado empleado{10000};
    Auditor auditor{};
    auditor.auditar(empleado);
}

