#include <iostream>
#include <Windows.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main(void) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int month;

    cout << "Введіть номер місяця: ";
    cin >> month;

    switch (month) {
    case 1:
        cout << "Січень" << endl;
        break;
    case 2:
        cout << "Лютий" << endl;
        break;
    case 3:
        cout << "Березень" << endl;
        break;
    case 4:
        cout << "Квітень" << endl;
        break;
    case 5:
        cout << "Травень" << endl;
        break;
    case 6:
        cout << "Червень" << endl;
        break;
    case 7:
        cout << "Липень" << endl;
        break;
    case 8:
        cout << "Серпень" << endl;
        break;
    case 9:
        cout << "Вересень" << endl;
        break;
    case 10:
        cout << "Жовтень" << endl;
        break;
    case 11:
        cout << "Листопад" << endl;
        break;
    case 12:
        cout << "Грудень" << endl;
        break;
    default:
        cout << "Помилка" << endl;
        break;
    }

    return 0;
}

