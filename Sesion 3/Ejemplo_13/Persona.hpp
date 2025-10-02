#ifndef PERSONA_HPP
#define PERSONA_HPP
using namespace std;

class Persona
{
public:
    Persona();
    int getEdad();
    bool getMujer();
    void setEdad(int Edad);
    void Mostrar();
    ~Persona();

private:
    bool genero; // 1: Mujer, 0: Hombre
    int edad;
    char dni[10];
};

#endif // PERSONA_HPP
