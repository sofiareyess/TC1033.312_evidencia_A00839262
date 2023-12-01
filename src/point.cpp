//Composici�nTriangulo
//
//Perla Sofia Reyes Bretado

#include "point.h"

//m�todos constructores
point::point()
{
    x= 0;
    y= 0;
}

point::point(double _x, double _y)
{
    x= _x;
    y= _y;
}

//m�todos de acceso
double point::getX(){
    return x;
}
double point::getY(){
    return y;
}

//m�todos modificadores
void point::setX(double _x){
    x= _x;
}
void point::setY(double _y){
    y= _y;
}
//otros m�todos
double point::calculaDistancia(point p2){
    return sqrt((p2.x - x) * (p2.x - x) + (p2.y - y ) * (p2.y - y) );
}

std::string point::str(){
    return '(' + std::to_string(x) +'x'+ std::to_string(y) + 'y';
}

