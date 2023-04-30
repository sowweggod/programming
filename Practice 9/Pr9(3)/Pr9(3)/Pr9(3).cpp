#include <iostream>
#include "Set.h"
using namespace std;


int main() {
    Set<int> s(5);
    cout << s.Is_Empty() << endl; // 1
    cout << s.Is_Full() << endl; // 0

    s.Add(1);
    s.Add(2);
    s.Add(3);
    cout << s.In_Set(2) << endl; // 1
    cout << s.In_Set(4) << endl; // 0

    cout << s.Get(2) << endl; // 2

  //  cout << s.In_Set(2) << endl; 
    cout << s.Is_Empty() << endl; // 0
    cout << s.Is_Full() << endl; // 0
    return 0;
}