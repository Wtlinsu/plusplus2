#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int main(void) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int c0;
    int steps = 0;

    cout << "Введіть натуральне число: ";
    cin >> c0;

    if (c0 <= 0) {
        cout << "Помилка: число повинно бути натуральним (більше 0)." << endl;
        return 1;
    }

    while (c0 != 1) {
        cout << c0 << endl;

        if (c0 % 2 == 0) {

            c0 /= 2;
        }
        else {
            c0 = 3 * c0 + 1;
        }

        steps++;
    }

    cout << c0 << endl;
    cout << "steps = " << steps;

    return 0;
}