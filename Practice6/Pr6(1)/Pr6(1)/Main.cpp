#include "Cone.h"
#include <iostream>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    Cone c1(3, 7);              
    Cone c2(1, 2, 3, 5, 10);    

    cout << "����� 1: " << c1;
    cout << "������� �����������: " << c1.area() << "\n";
    cout << "�����: " << c1.volume() << "\n";

    cout << "����� 2: " << c2;
    cout << "������� �����������: " << c2.area() << "\n";
    cout << "�����: " << c2.volume() << "\n";


    return 0;
}