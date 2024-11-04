//
// Created by barba on 04/11/2024.
//

#include "main.h"
#include <iostream>
#include <string>


int variableGlobal = 100; // Variable global

void mostrarVariables() {
    int variableLocal = 50; // Variable local
    std::cout << "Variable local (solo dentro de la función): " << variableLocal << std::endl;
    std::cout << "Variable global (accesible en toda la aplicación): " << variableGlobal << std::endl;
}

int main() {

    std::string nombre;
    int edad;
    std::cout << "Por favor ingresa tu nombre: ";
    std::cin >> nombre;
    std::cout << "Por favor ingresa tu edad: ";
    std::cin >> edad;
    std::cout << "Hola, " << nombre << ". Tienes " << edad << " años." << std::endl;

    mostrarVariables();
    std::cout << "Desde main, la variable global es: " << variableGlobal << std::endl;


    int x = 10; // Variable local a main
    if (x > 5) {
        int y = 15; // Variable local al bloque if
        std::cout << "Dentro del if: x = " << x << ", y = " << y << std::endl;
    }

    for (int i = 0; i < 3; i++) { // i es local al bucle
        std::cout << "Iteración " << i << std::endl;
    }

    std::cout << "Variable global: " << variableGlobal << std::endl;


    int entero = 42;         // Tipo int
    double decimal = 3.14;   // Tipo double
    char caracter = 'C';     // Tipo char
    bool booleano = true;    // Tipo bool

    std::cout << "Entero: " << entero << std::endl;
    std::cout << "Decimal: " << decimal << std::endl;
    std::cout << "Caracter: " << caracter << std::endl;
    std::cout << "Booleano: " << (booleano ? "verdadero" : "falso") << std::endl;

    return 0;
}
