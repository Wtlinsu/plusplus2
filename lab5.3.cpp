#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a, b, h;
    cout << "������ ������� ��������� � ";
    cin >> a;
    cout << "������ ������� ��������� b ";
    cin >> b;
    cout << "������ ������� ��������� h ";
    cin >> h;
    cout << "-------------------" << endl;
    cout << " : X: Y:" << endl;
    cout << "-------------------" << endl;
    double x = a;
    while (x <= b) {
        if (cos(x) >= 0) {
            double y = sqrt(cos(x)) + sin(x);
            cout << "|   " << x << "   |" << y << "   |" << endl;
        }
        else {
            cout << "���� ���" << endl;
        }
        x += h;
    }
    cout << "-------------------" << endl;

    return 0;