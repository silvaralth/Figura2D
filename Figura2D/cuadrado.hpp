//
//  cuadrado.hpp
//  Figura2D
//
//  Created by Cocoa on 21/02/17.
//  Copyright © 2017 Sergio Ballen COD: 1629770 - 2711. All rights reserved.
//

#ifndef cuadrado_hpp
#define cuadrado_hpp

#include <stdio.h>
#include <iostream>

#include "figura2D.hpp"

using namespace std;

class Cuadrado : public Figura2D {

private:
    double lado;
public:
    Cuadrado(double lado);
    ~Cuadrado();
    
    double getLado();
    void setLado(double lado);
    
    void calcularArea();
    void calcularPerimetro();
};

#endif /* cuadrado_hpp */
