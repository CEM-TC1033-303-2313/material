//
// Created by L03041202 on 22-Nov-23.
//

#ifndef EJERCICIO_UNIFILA_CLIENTE_H
#define EJERCICIO_UNIFILA_CLIENTE_H

#include <string>

class Cliente {
private:
    std::string nombre;
    std::string asunto;
public:
    Cliente(std::string nombre, std::string asunto);
    std::string getNombre();
    std::string getAsunto();
};


#endif //EJERCICIO_UNIFILA_CLIENTE_H
