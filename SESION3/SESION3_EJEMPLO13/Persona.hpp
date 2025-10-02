#ifndef PERSONA_HPP
#define PERSONA_HPP

class Persona{
    
private:
    bool genero;   // 1 = Mujer, 0 = Hombre
    int edad;      
    char dni[10];  // formato 8 números + 1 letra
    
public:
    Persona(int edad);  // constructor con edad
    ~Persona();         // destructor

    int getEdad() const;
    bool esMujer() const;
    void setEdad(int edad);
    void mostrar() const;
    
};

#endif // PERSONA_HPP
