#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double x, y;
    for (int i = 0; i < 5; i++) {
        cout << "������ �������� x ";
        cin >> x;
        y = pow(sin(x), 5) + abs(5 * x - 1.5);
        cout << "�������� � ��� x ������� " << x << " ������� " << y << endl;
    }



    return 0;
    //y=pow(sin(x),5)+abs(5*x-1.5)
}