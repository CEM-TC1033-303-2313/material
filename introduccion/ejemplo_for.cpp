#include <iostream>

int main() {
    for (int i=0; i<=10; i--)
        std::cout << "i: " << i << std::endl;
    int arreglo[5] = {64,22, 12, 45, 193};
    for (int i=0; i<sizeof(arreglo)/sizeof(int); i++) {
        std::cout << "arreglo[" << i << "]: " << arreglo[i] << std::endl;
    }
    for (int i : arreglo) {
        std::cout << "i: " << i << std::endl;
    }
}