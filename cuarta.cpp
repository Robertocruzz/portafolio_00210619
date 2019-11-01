/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roberto
 *
 * Created on October 31, 2019, 8:53 PM
 */

#include <iostream>

using namespace std;

struct paises{
    char nombre[30];
    char capital[30];
    int poblacion;
}info_paises[5];

struct continentes{
    char nombre[30];
    struct paises info_paises;
}Continentes[5];

struct global{
    struct continentes nombre;
    struct paises;
}mundo[5];


int main() {

    return 0;
}

