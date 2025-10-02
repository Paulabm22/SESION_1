#include "Persona.hpp"
#include <cstdlib>

// Constructor: asigna edad, género y un dni sencillo
Persona::Persona(int e) {
    edad = e;
    genero = rand() % 2;  // aleatorio: 0 hombre, 1 mujer
    std::strcpy(dni, "12345678A"); // siempre el mismo para simplificar
}

// Destructor vacío
Persona::~Persona() {}

int Persona::getEdad() const {
    return edad;
}

bool Persona::esMujer() const {
    return genero;
}

void Persona::setEdad(int e) {
    edad = e;
}

void Persona::mostrar() const {
    std::cout << "DNI: " << dni
              << ", Edad: " << edad
              << ", Género: " << (genero ? "Mujer" : "Hombre")
              << std::endl;
}