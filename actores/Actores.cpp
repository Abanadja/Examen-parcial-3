//
// Created by alexa on 01/12/2024.
//

#include "Actores.h"
#include <iostream>

// Constructor
Actor::Actor(std::string id, std::string descripcion) {
    this->id = id;
    this->descripcion = descripcion;
    this->tiempoTotal = 0;
    this->numTareas = 0;
}

// Métodos getter
std::string Actor::getId() {
    return id;
}

std::string Actor::getDesc() {
    return descripcion;
}

int Actor::getNumTareas() {
    return numTareas;
}

int Actor::addTarea(Tarea t) {
    if (numTareas < 20) {  // Límite de 20 tareas
        listaTareas.push_back(t);
        numTareas++;
        tiempoTotal += t.getDuracion();
    }
    return numTareas;
}

std::string Actor::toString() {
    std::string resul;
    int duracionTotal = 0;

    for (size_t i = 0; i < listaTareas.size(); i++) {
        resul += "Tarea " + std::to_string(i + 1) + ": " + listaTareas[i].toString() + "\n";
        duracionTotal += listaTareas[i].getDuracion();
    }

    return resul + "Duración total: " + std::to_string(duracionTotal);
}
