//
// Created by alexa on 01/12/2024.
//
#ifndef ACTOR_H
#define ACTOR_H

#include <vector>
#include <string>
#include "../Tarea/Tarea.h"

class Actor {
private:
    std::string id;
    std::string descripcion;
    std::vector<Tarea> listaTareas;
    int tiempoTotal;
    int numTareas;

public:
    // Constructor
    Actor(std::string id, std::string descripcion);

    // Métodos getter
    std::string getId();
    std::string getDesc();
    int getNumTareas();

    // Métodos adicionales
    int addTarea(Tarea t);
    std::string toString();
};

#endif // ACTOR_H
