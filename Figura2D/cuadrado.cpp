//
//  cuadrado.cpp
//  Figura2D
//
//  Created by Cocoa on 21/02/17.
//  Copyright © 2017 Sergio Ballen COD: 1629770 - 2711. All rights reserved.
//

#include "cuadrado.hpp"

using namespace std;

Cuadrado::Cuadrado(double lado) : Figura2D() {
    setLado(lado);
}

Cuadrado::~Cuadrado(){}

double Cuadrado::getLado(){ return this -> lado; }
void Cuadrado::setLado(double lado){ this -> lado = lado; }

void Cuadrado::calcularArea(){
    double ladoCuadrado = getLado();
    double areaCuadrado = ladoCuadrado * ladoCuadrado;
    
    Cuadrado::setArea(areaCuadrado);
}

void Cuadrado::calcularPerimetro(){
    double ladoCuadrado = getLado();
    double perimetroCuadrado = ladoCuadrado * 4;
    
    Cuadrado::setPerimetro(perimetroCuadrado);
}
