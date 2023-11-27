//
// Created by L03041202 on 22-Nov-23.
//

#include "Unifila.h"
#include <iostream>
#include <vector>

void Unifila::formarCliente(std::string nombre, std::string asunto) {
    std::cout << "Formando al cliente: " << nombre << std::endl;
    // clientes.push_back(Cliente{nombre, asunto});
    clientes.emplace_back(nombre, asunto);
}

void Unifila::pasarSiguienteCliente() {
    // if (clientes.size() == 0)
    if (clientes.empty()) {
        std::cout << "No hay clientes en la fila." << std::endl;
    } else {
        std::cout << "Pasando al cliente " << clientes[0].getNombre()
                  << " con asunto " << clientes[0].getAsunto() << std::endl;
        clientes.erase(clientes.begin());
        /*
        for (std::vector<Cliente>::iterator it = clientes.begin(); it != clientes.end(); it++) {
            if (it->getNombre() == "Juan") {
                clientes.erase(it);
            }
        }
        for (Cliente &cliente : clientes)
         */
    }
}

void Unifila::revisarFila() {
    if (clientes.empty()) {
        std::cout << "No hay clientes en la fila." << std::endl;
    } else {
        std::cout << "Clientes formados:" << std::endl;
        for (Cliente cliente : clientes) {
            std::cout << "Cliente: " << cliente.getNombre()
                      << " - Asunto: " << cliente.getAsunto() << std::endl;
        }
    }
}