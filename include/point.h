//point.hpp
//ComposicionTriangulo
//
//Perla Sof�a Reyes Bretado

#ifndef POINT_H
#define POINT_H

#include <string>
#include <math.h>

class point{

    public:
    //m�todos constructores
    point();
    point(double _x,  double _y);

    //m�todos de acceso
    double getX();
    double getY();

    //m�todos modificadores
    void setX(double _x);
    void setY(double _y);

    //otros m�todos
    double calculaDistancia(point p2);
    std::string str();

    private:
        double x, y;
};

#endif // POINT_H
