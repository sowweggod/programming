
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

const double pi = 3.14159265;

// Класс конуса.
class Cone {
    double x, y, z;
    double radius_bt;
    double height;
    double radius_tp;

public:
    // Конструктор по умолчанию
    Cone() { x = y = z = radius_bt = height = radius_tp = 0; }
    // Конструктор с центром в начале координат
    Cone(double r_b, double r_t, double h) {
        x = y = z = 0.0;
        radius_bt = r_b;
        height = h;
        radius_tp = r_t;

    }
    // Конструктор для Cone
    Cone(double a, double b, double c, double r_b, double r_t, double h) {
        x = a;
        y = b;
        z = c;
        radius_bt = r_b;
        height = h;
        radius_tp = r_t;
    }

    // Функции доступа
    void setCoordinate(double a, double b, double c) { x = a; y = b; z = c; }
    void setRadius(double r_b, double r_t) {
        radius_bt = r_b;
        radius_tp = r_t;
    }
    void setHeight(double h) { height = h; }
    double getRadiusBt() { return radius_bt; }
    double getRadiusTp() { return radius_bt; }
    double getHeight() { return height; }

    // Площадь полной поверхности
    double area() {
        double l = sqrt(height * height + pow((radius_bt - radius_tp), 2));
        return pi * (radius_bt + radius_tp) * l;
    }
    // Объем
    double volume() {
        return (pi * height * (pow(radius_bt, 2) + radius_bt * radius_tp + pow(radius_tp, 2))) / 3;
    }

    // Перегрузка оператора вывода
    friend ostream& operator<<(ostream& stream, Cone obj);
};

// Вывод данных конуса
ostream& operator<<(ostream& stream, Cone obj) {
    stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z << ") ";
    stream << "r_bottom=" << obj.radius_bt << " ";
    stream << "r_top=" << obj.radius_tp << " ";
    stream << "h=" << obj.height << "\n";
    return stream;
}


