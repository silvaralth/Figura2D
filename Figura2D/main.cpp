//
//  main.cpp
//  Figura2D
//
//  Created by Cocoa on 21/02/17.
//  Copyright © 2017 Sergio Ballen COD: 1629770 - 2711. All rights reserved.
//

#include <iostream>

#include "figura2D.hpp"
#include "cuadrado.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Figuras 2D\n" << endl;
    cout << "Calcula el area y el perimetro de una Figura 2D. (en centimetros)" << endl;
    cout << "Seleccione una opción:\n" << endl;
    cout << "1 - Calcular Circulo" << endl;
    cout << "2 - Calcular Cuadrado" << endl;
    cout << "3 - Salir" << endl;
    int seleccion;
    cin >> seleccion;
    bool repetir = true;
    do {
        switch (seleccion) {
            case 1:
                //
                break;
                
            case 2:
                system("clear");
                cout << "Cuadrado - Figuras 2D\n" << endl;
                cout << "Ingrese el valor del lado del cuadrado: ";
                double lado;
                cin >> lado;
                Figura2D * pCuadrado;
                pCuadrado = new Cuadrado(lado);
                pCuadrado -> calcularArea();
                pCuadrado -> calcularPerimetro();
                cout << "\nEl area del cuadrado es " << pCuadrado -> getArea() << "cm y su perimetro es de "<< pCuadrado -> getPerimetro() << "cm.\n"<< endl;
                
                cout << "Seleccione una opcion para continuar: \n" << endl;
                cout << "1 - Calcular Circulo" << endl;
                cout << "2 - Calcular Cuadrado" << endl;
                cout << "3 - Salir" << endl;
                cin >> seleccion;
                
                break;
            
            case 3:
                repetir = false;
                break;
                
            default:
                system("clear");
                cout << "Ingresa una opcion del menu valida... \n" << endl;
                cout << "1 - Calcular Circulo" << endl;
                cout << "2 - Calcular Cuadrado" << endl;
                cout << "3 - Salir" << endl;
                cin >> seleccion;
                
                break;
        }
    } while (repetir == true);
    return 0;
}
