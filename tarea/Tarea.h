//
// Created by alexa on 01/12/2024.
//
#ifndef TAREA_H
#define TAREA_H

#include <string>

class Tarea {
private:
    std::string id;
    std::string descripcion;
    int duracion;

public:
    // Constructor
    Tarea(std::string id, std::string descripcion, int duracion);

    // Métodos getter
    std::string getId();
    std::string getDesc();
    int getDuracion();

    std::string toString();
};

#endif // TAREA_H


