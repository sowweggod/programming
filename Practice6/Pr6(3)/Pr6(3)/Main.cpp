#include <iostream>
#include <string>
#include "Gulf.h"
#include "Ocean.h"
#include "Sea.h"
using namespace std;
int main() {
    // создание объектов каждого типа
    Ocean ocean1("Pacific Ocean", "Pacific Rim", 169.2e6, 4.03e3);
    Ocean ocean2("Atlantic Ocean", "Atlantic Rim", 106.4e6, 3.92e3);
    Sea sea1("Mediterranean Sea", "Mediterranean Basin", 2.5e6, 1.5e3, "Inland Sea");
    Sea sea2("Caspian Sea", "Central Asia", 371e3, 170, "Endorheic Basin");
    Gulf gulf1("Gulf of Mexico", "Atlantic Ocean", 1.6e6, 1.6e3, "North America");
    Gulf gulf2("Persian Gulf", "Arabian Sea", 251e3, 90, "Western Asia");

    // вызов метода print для каждого объекта
    ocean1.print();
    ocean2.print();
    sea1.print();
    sea2.print();
    gulf1.print();
    gulf2.print();

    // производный объект использует методы базового класса
    Ocean* oceanPtr = &gulf1;
    oceanPtr->print();

    return 0;
}