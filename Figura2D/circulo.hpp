//
//  circulo.hpp
//  Figura2D
//
//  Created by Cocoa on 22/02/17.
//  Copyright © 2017 Sergio Ballen COD: 1629770 - 2711. All rights reserved.
//

#ifndef circulo_hpp
#define circulo_hpp

#include <stdio.h>
#include <iostream> 

#include "figura2D.hpp"

using namespace std;

class Circulo : public Figura2D {
    
private:
    double radio;
public:
    Circulo(double radio);
    ~Circulo();
    
    double getRadio();
    void setRadio(double radio);
    
    void calcularArea();
    void calcularPerimetro();
    
};

#endif /* circulo_hpp */
