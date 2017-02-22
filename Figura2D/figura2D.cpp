//
//  figura2D.cpp
//  Figura2D
//
//  Created by Cocoa on 21/02/17.
//  Copyright © 2017 Sergio Ballen COD: 1629770 - 2711. All rights reserved.
//

#include "figura2D.hpp"

using namespace std;

Figura2D::Figura2D(){}
Figura2D::~Figura2D(){}

double Figura2D::getArea(){return area;}
void Figura2D::setArea(double pArea){this -> area = pArea;}

double Figura2D::getPerimetro(){return perimetro;}
void Figura2D::setPerimetro(double pPerimetro){this -> perimetro = pPerimetro;}

