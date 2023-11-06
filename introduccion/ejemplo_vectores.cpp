#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> alumnos;
    alumnos.push_back("Emiliano");
    alumnos.push_back("Fernanda");
    alumnos.push_back("Pablo");
    alumnos.pop_back();
    for (int i=0; i<alumnos.size(); i++) {
        std::cout << "Alumno: " << alumnos[i] << std::endl;
    }
    for (std::string alumno : alumnos) {
        std::cout << "Alumno: " << alumno << std::endl;
    }
}