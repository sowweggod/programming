#include <iostream>
#include <set>
#include <stdexcept>
using namespace std;


int main() {
    set<int> my_set;
  //  my_set.insert(42);
    try {
        // ������� ����� ������� � ������ ���������
        auto it = my_set.find(42);

        // ���� ������� �� ������, ��������� ����������
        if (it == my_set.end()) {
            throw out_of_range("Element not found");
        }

        // �����, ��������� ����������� �������� � ���������
        cout << "Element found: " << *it << endl;
    }
    catch (const out_of_range& e) {
        // ��������� ����������
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}