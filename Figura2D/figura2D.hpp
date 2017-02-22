//
//  figura2D.hpp
//  Figura2D
//
//  Created by Cocoa on 21/02/17.
//  Copyright © 2017 Sergio Ballen COD: 1629770 - 2711. All rights reserved.
//

#ifndef figura2D_hpp
#define figura2D_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Figura2D{

private:
    //
    double area;
    double perimetro;
    
public:
    
    Figura2D();
    ~Figura2D();
    
    double getArea();
    void setArea(double pArea);
    double getPerimetro();
    void setPerimetro(double pPerimetro);
    
    virtual void calcularArea() = 0;
    virtual void calcularPerimetro() = 0;
};

#endif /* figura2D_hpp */
