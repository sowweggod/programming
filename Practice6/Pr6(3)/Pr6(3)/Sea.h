#include <iostream>
#include <string>
#include "Ocean.h"
using namespace std;
class Sea : public Ocean {
protected:
    string type;
public:
    Sea() : Ocean(), type("") {}
    Sea(string _name, string _location, double _size, double _depth, string _type) :
        Ocean(_name, _location, _size, _depth), type(_type) {}

    void print() override {
        cout << "Name: " << name << ", Location: " << location
            << ", Size: " << size << ", Depth: " << depth << ", Type: " << type << endl;
    }
};