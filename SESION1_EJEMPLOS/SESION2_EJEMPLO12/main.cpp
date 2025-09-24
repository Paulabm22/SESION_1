#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct persona {
    char nombre[30];
    int edad;
    long telefono;
};

void Escribir(persona p) // paso por valor
{
    cout << p.nombre << " tiene " << p.edad << " anyos y su telefono es " << p.telefono;
    cout << endl;
}

void EscribirPuntero(persona* p) // mediante puntero
{
    cout << p->nombre << " tiene " << p->edad << " anyos y su telefono es " << p->telefono;
    cout << endl;
}

persona CrearPersona(char n[30], int e, long t)
{
    persona aux;
    strcpy(aux.nombre, n);  // la cadena n se copia en aux.nombre
    aux.edad = e;
    aux.telefono = t;
    return aux;
}

int main()
{
    // Creamos una persona con la función
    persona ejemplo = CrearPersona((char*)"Juan", 25, 654321987);

    cout << "Mostrando con paso por valor:" << endl;
    Escribir(ejemplo);

    cout << "Mostrando con puntero:" << endl;
    EscribirPuntero(&ejemplo);

    return 0;
}