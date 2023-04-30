#include <iostream>
#include <string>
using namespace std;


template <class T> void quickSort(T arr[], int left, int right) {
    int i = left, j = right;
    T pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    if (left < j) {
        quickSort(arr, left, j);
    }
    if (i < right) {
        quickSort(arr, i, right);
    }
}


int main() {
    string arr[] = { "koki", "moki", "msoki", "aoki", "uoki"};
    int n = sizeof(arr) / sizeof(arr[0]);

    int arr1[] = { 9, 7, 5, 11, 12, 2, 14, 3, 10, 6 };
    int n1 = sizeof(arr) / sizeof(arr[0]);

    

    quickSort(arr1, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    

    quickSort(arr, 0, n - 1);
    cout << endl;
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}