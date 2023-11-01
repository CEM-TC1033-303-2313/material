#include <iostream>
#include <cmath>

int main() {
    int a;
    int b;
    int c;
    a = 10;
    b = 3;
    c = a + b;
    std::cout << a << " + " << b << " = " << c << std::endl;
    c = a - b;
    std::cout << a << " - " << b << " = " << c << std::endl;
    c = a * b;
    std::cout << a << " * " << b << " = " << c << std::endl;
    c = a / b;
    std::cout << a << " / " << b << " = " << c << std::endl;
    std::cout << a << " / " << b << " = " << a / 3.0 << std::endl;
    c = a % b;
    std::cout << a << " % " << b << " = " << c << std::endl;
    c = pow(a,b);
    std::cout << "pow(" << a << ", " << b << ") = " << c << std::endl;
    a = 1;
    // a++ incrementa a en 1 y devuelve el valor original de a
    std::cout << "a++: " << a++ << std::endl
              << "a: " << a << std::endl;
    a = 1;
    // ++a incrementa a en 1 y devuelve el valor actualizado de a
    std::cout << "++a: " << ++a << std::endl
              << "a: " << a << std::endl;
}

