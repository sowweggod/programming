#include <iostream>
#include <string>
#ifndef OCEAN_H
#define OCEAN_H
using namespace std;
class Ocean {
protected:
    string name;
    string location;
    double size;
    double depth;
public:
    Ocean() : name(""), location(""), size(0), depth(0) {}
    Ocean(string _name, string _location, double _size, double _depth) :
        name(_name), location(_location), size(_size), depth(_depth) {}

    virtual void print() {
        cout << "Name: " << name << ", Location: " << location
            << ", Size: " << size << ", Depth: " << depth << endl;
    }
}; 
#endif 