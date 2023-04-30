#pragma once
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

const double pi = 3.14159265;

class Cone {
    double x, y, z;
    double radius;     
    double height;

public:
    Cone() { x = y = z = radius = height = 0; }
    
    Cone(double r, double h) {
        x = y = z = 0.0;
        radius = r;
        height = h;
    }
    
    Cone(double a, double b, double c, double r, double h) {
        x = a;
        y = b;
        z = c;
        radius = r;
        height = h;
    }

    void setCoordinate(double a, double b, double c) { x = a; y = b; z = c; }
    void setRadius(double r) { radius = r; }
    void setHeight(double h) { height = h; }
    double getRadius() { return radius; }
    double getHeight() { return height; }

    double area() {
        double l = sqrt(height * height + radius * radius);
        return pi * radius * (radius + l);
    }

    double volume() {
        return pi * radius * radius * height / 3;
    }

    friend ostream& operator<<(ostream& stream, Cone obj);

};
