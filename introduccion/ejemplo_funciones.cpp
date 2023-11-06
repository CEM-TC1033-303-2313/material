#include <iostream>

int factorial(int n) {
    int res = n;
    while (n-- > 1)
        res *= n;
    return res;
}

/*
*
**
***
****
*****
*/
void asteriscos(int n) {
    int i = 1;
    std::string ast = "*";
    while (i <= n) {
        std::cout << ast << std::endl;
        ast = ast + "*";
        i++;
    }
}

int main() {
    int ejemplo = factorial(5);
    std::cout << "El factorial de 5 es: " << ejemplo << std::endl;
    asteriscos(5);
    return 0;
}