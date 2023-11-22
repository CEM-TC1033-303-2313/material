//
// Created by L03041202 on 22-Nov-23.
//

#include "Cliente.h"
#include <string>

Cliente::Cliente(std::string nombre, std::string asunto):
        nombre{nombre}, asunto{asunto} {}

std::string Cliente::getNombre() {
    return nombre;
}

std::string Cliente::getAsunto() {
    return asunto;
}