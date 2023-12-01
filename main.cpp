//composición triangulo
// main.cpp
//Perla Sofía Reyes Bretado

#include <iostream>
#include "triangle.h"
#include <string>
#include<stdlib.h>

using namespace std;

//desplegar el contenido del arrgelo
void desplegarArregloTriangle(triangle arrTriangulos[], int iS){

    for(int indice = 0; indice < iS; indice++){
        cout << indice << "."<< arrTriangulos[indice].str() << endl;
    }
}

void leerArregloTriangle(triangle arrTriangulos[], int iS){
    double x1,y1,x2,y2,x3,y3;

    for(int indice = 0; indice< iS; indice++){
        cout << "Ingresa las 3 coordenas (x,y) de los vertices del Triangulo 1: ";
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        point p1{ x1, y1 };
        point p2{ x2, y2 };
        point p3{ x3, y3 };

        arrTriangulos[indice].setVertice1(p1);
        arrTriangulos[indice].setVertice2(p2);
        arrTriangulos[indice].setVertice3(p3);
    }
}
void calculaPerimetroArea(triangle arrTriangulos[], int iS){
    for(int indice = 0; indice< iS; indice++){
        cout << "Triangulo " << 1 << ".\nPerimetro =" <<
        arrTriangulos[indice].perimetro()<<
        "\nArea = " <<
        arrTriangulos[indice].area()<<endl;
    }
}

int main()
{
    point p1{-5, -5}, p2{1, 3}, p3{4, 6};
    point p4{-2, -3}, p5{5, -4}, p6{-1, 3};
    point p7{-2, -3}, p8{5, -4}, p9{-1,3};
    triangle tri1{ p4,p5,p6 }, tri2{ p1,p2,p3 }, tri3{ p7,p8,p9 };

    //declaración del arreglo de triangulos
    triangle arrT[100];

    //llamar a la función desplegarArregloTriangulo
    leerArregloTriangle(arrT, 1);
    calculaPerimetroArea(arrT, 1);


    return 0;
}
