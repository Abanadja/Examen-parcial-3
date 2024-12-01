//
// Created by alexa on 01/12/2024.
//

#include "Tarea.h"
#include <iostream>
#include <string>

// Constructor
Tarea::Tarea(std::string id, std::string descripcion, int duracion) {
    this->id = id;
    this->descripcion = descripcion;
    this->duracion = duracion;
}

std::string Tarea::getId() {
    return id;
}

std::string Tarea::getDesc() {
    return descripcion;
}

int Tarea::getDuracion() {
    return duracion;
}

std::string Tarea::toString() {
    return "Tarea: " + descripcion + " Duracion: " + std::to_string(duracion);
}

