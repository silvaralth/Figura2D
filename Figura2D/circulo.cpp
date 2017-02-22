//
//  circulo.cpp
//  Figura2D
//
//  Created by Cocoa on 22/02/17.
//  Copyright © 2017 Sergio Ballen COD: 1629770 - 2711. All rights reserved.
//

#include "circulo.hpp"

using namespace std;

Circulo::Circulo (double radio) : Figura2D() {
    setRadio(radio);
}

Circulo::~Circulo (){}

double Circulo::getRadio(){ return this -> radio; }
void Circulo::setRadio(double radio){ this -> radio = radio; }

const double miPi = 3.14;

void Circulo::calcularArea() {
    double radioCirculo = getRadio();
    double areaCirculo = miPi * ( radioCirculo * radioCirculo );
    
    Circulo::setArea(areaCirculo);
}

void Circulo::calcularPerimetro(){
    double radioCirculo = getRadio();
    double perimetroCirculo = 2 * miPi * radioCirculo ;
    
    Circulo::setPerimetro(perimetroCirculo);
}
