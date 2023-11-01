#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese el numero a evaluar: ";
    std::cin >> n;
    // Si el contenido del condicional consta de un solo
    // estatuto (termina en ;), se puede escribir sin
    // usar las llaves.
    if (n % 3 == 0 && n % 5 == 0)
        std::cout << "fizzbuzz" << std::endl;
    else if (n % 3 == 0)
        std::cout << "fizz" << std::endl;
    else if (n % 5 == 0)
        std::cout << "buzz" << std::endl;
    else
        std::cout << n << std::endl;
}