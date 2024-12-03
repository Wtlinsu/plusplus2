#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int main(void) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    const int n = 12;
    int array[n] = { 1,2,5,4,9,-4,34,12,32,4,-6,8 };
    cout << "Початковий масив" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    for (int i = 0; i < n - 1; i++) { //сортування за зростанням
        for (int g = 0; g < n - i - 1; g++) {
            if (array[g] > array[g + 1]) {
                int temp = array[g];
                array[g] = array[g + 1];
                array[g + 1] = temp;
                //cout<
            }
        }
    }
    cout << endl << "Відсортований за зростанням масив" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    for (int i = 0; i < n - 1; i++) { //сортування за cпаданням
        for (int g = 0; g < n - i - 1; g++) {
            if (array[g] < array[g + 1]) {
                int temp = array[g];
                array[g] = array[g + 1];
                array[g + 1] = temp;
                //cout<
            }
        }
    }
    cout << endl << "Відсортований за спаданням масив" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    const int m = 12;
    int ar[m] = { 1,2,5,4,9,-4,34,12,32,4,-6,8 };
    int max_i = 0;
    for (int i = 1; i < m; i++) {
        if (ar[i] > ar[max_i]) {
            max_i = i;
            //cout << endl << "індекс максимального елементу " << max_i;
        }
    }
    cout << endl << "індекс максимального елементу " << max_i;
    return 0;
}

