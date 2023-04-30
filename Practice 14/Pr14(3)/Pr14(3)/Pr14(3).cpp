#include <iostream>
#include <set>
#include <stdexcept>
using namespace std;


int main() {
    set<int> my_set;
  //  my_set.insert(42);
    try {
        // Попытка найти элемент в пустом множестве
        auto it = my_set.find(42);

        // Если элемент не найден, выбросить исключение
        if (it == my_set.end()) {
            throw out_of_range("Element not found");
        }

        // Иначе, выполнить необходимые действия с элементом
        cout << "Element found: " << *it << endl;
    }
    catch (const out_of_range& e) {
        // Обработка исключения
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}