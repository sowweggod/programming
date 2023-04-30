#include <iostream>
#include <string>
#include "Ocean.h"
using namespace std;

class Gulf : public Ocean {
protected:
    string location;
public:
    Gulf() : Ocean(), location("") {}
    Gulf(string _name, string _parentLocation, double _size, double _depth, string _location) :
        Ocean(_name, _parentLocation, _size, _depth), location(_location) {}

    void print() override {
        cout << "Name: " << name << ", Location: " << location
            << ", Parent Location: " << Ocean::location << ", Size: " << size
            << ", Depth: " << depth << endl;
    }
};
