//
// Created by alexa on 01/12/2024.
//
#include <iostream>
#include <fstream>
#include "tarea/Tarea.h"
#include "crud/Crud.h"
#include "actores/Actores.h"
#include <string>
#include <string.h>
#include "launcher.h"
using namespace std;
int main() {
    return 0;
}
int mainf() {
    Tarea ta ("A", "Reserva vuelo", 20);
    Tarea td ("D", "Prepara billete", 10);

    std::cout<<"Hello World" << "\n";
    //cout << ta.getId() << " " << ta.getDesc() << " " << to_string(ta.getDuracion()) << "\n";
    cout << ta.toString();
    cout << td.toString();

    Actor agencia("AG", "Agencia viajes");
    agencia.addTarea(ta);
    agencia.addTarea(td);

    cout << td.toString();

    return 0;
}