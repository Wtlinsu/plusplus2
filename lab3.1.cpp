#include <iostream>
#include <Windows.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main(void) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int month;

    cout << "������ ����� �����: ";
    cin >> month;

    switch (month) {
    case 1:
        cout << "ѳ����" << endl;
        break;
    case 2:
        cout << "�����" << endl;
        break;
    case 3:
        cout << "��������" << endl;
        break;
    case 4:
        cout << "������" << endl;
        break;
    case 5:
        cout << "�������" << endl;
        break;
    case 6:
        cout << "�������" << endl;
        break;
    case 7:
        cout << "������" << endl;
        break;
    case 8:
        cout << "�������" << endl;
        break;
    case 9:
        cout << "��������" << endl;
        break;
    case 10:
        cout << "�������" << endl;
        break;
    case 11:
        cout << "��������" << endl;
        break;
    case 12:
        cout << "�������" << endl;
        break;
    default:
        cout << "�������" << endl;
        break;
    }

    return 0;
}

