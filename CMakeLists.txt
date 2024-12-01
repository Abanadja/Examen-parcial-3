cmake_minimum_required(VERSION 3.29)
project(Examen_parcial_3)

set(CMAKE_CXX_STANDARD 14)

add_executable(Examen_parcial_3
    main.cpp
    launcher.cpp
    launcher.h
        tarea/Tarea.h
        tarea/Tarea.cpp
        actores/Actores.h
        actores/Actores.cpp
        crud/Crud.cpp
        crud/Crud.h
)
