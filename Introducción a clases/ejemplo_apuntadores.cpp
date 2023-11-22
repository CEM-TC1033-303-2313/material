#include <iostream>

void funcion(int &a) {
    a = 100;
}

int main() {
    int a = 10;
    std::cout << "a: " << a << std::endl
              << "&a: " << &a << std::endl;
    int &b = a; // Referencia -> Asignar un alias a la variable a
    std::cout << "a: " << a << std::endl
              << "&a: " << &a << std::endl
              << "b: " << b << std::endl
              << "&b: " << &b << std::endl;
    b = 30;
    std::cout << "a: " << a << std::endl
              << "&a: " << &a << std::endl
              << "b: " << b << std::endl
              << "&b: " << &b << std::endl;
    int c = 50;
    b = c; // No reasigna el lugar en memoria al que apunta
    c = 25;
    std::cout << "a: " << a << std::endl
              << "&a: " << &a << std::endl
              << "b: " << b << std::endl
              << "&b: " << &b << std::endl
              << "c: " << c << std::endl
              << "&c: " << &c << std::endl;
    funcion(a);
    std::cout << "a: " << a << std::endl
              << "&a: " << &a << std::endl;

    int x = 10;
    int z = 20;
    int *y = &x;
    std::cout << "x: " << x << std::endl
              << "&x: " << &x << std::endl
              << "y: " << y << std::endl
              << "&y: " << &y << std::endl
              << "*y: " << *y << std::endl;
    *y = 3;
    std::cout << "x: " << x << std::endl
              << "&x: " << &x << std::endl
              << "y: " << y << std::endl
              << "&y: " << &y << std::endl
              << "*y: " << *y << std::endl;
    y = &z;



}