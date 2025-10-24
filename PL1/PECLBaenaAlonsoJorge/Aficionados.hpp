#ifndef AFICIONADO_HPP
#define AFICIONADO_HPP

class Aficionado
{
private:
    int id;
    int tiempoLlegada; // minutos desde las 18:00 (0-59)
    bool esSocio;

public:
    // Constructor
    Aficionado(int id);

    // Getters
    int getId();
    int getTiempoLlegada();
    bool getEsSocio();

    // Setters
    void setId(int nuevoId);
    void setTiempoLlegada(int tiempo);
    void setEsSocio(bool socio);

    // Método para mostrar información 
    void mostrarInfo() const;
};

#endif