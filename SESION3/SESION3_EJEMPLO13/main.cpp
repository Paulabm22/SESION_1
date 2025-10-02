#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Persona.hpp"

int main() {
    srand(time(nullptr));

    std::vector<Persona> personas;
    // Creamos 10 personas con edades 18..27
    for (int i = 18; i <= 27; i++) {
        personas.emplace_back(i);
    }

    std::cout << "Listado de Personas:" << std::endl;
    for (auto &p : personas) {
        p.mostrar();
    }

    return 0;
}
