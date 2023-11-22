//
// Created by L03041202 on 22-Nov-23.
//

#ifndef EJERCICIO_UNIFILA_UNIFILA_H
#define EJERCICIO_UNIFILA_UNIFILA_H


#include <string>
#include <vector>
#include "Cliente.h"

class Unifila {
private:
    std::vector<Cliente> clientes;
public:
    void formarCliente(std::string nombre, std::string asunto);
    void pasarSiguienteCliente();
    void revisarFila();
};


#endif //EJERCICIO_UNIFILA_UNIFILA_H
