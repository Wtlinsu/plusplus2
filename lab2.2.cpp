#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int main(void) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double x = 0;
    double y = 0;
    bool inside = false;
    cout << "������ ���������� x �� y\n";

    cin >> x >> y;
    //int result = (x>=0 && x<=3) && (y>=0 && y<=1);

    if (fabs(x) + fabs(y) <= 1) {
        inside = true;
        cout << "����� ��������� � �������";
    }
    else {
        inside = false;
        cout << "����� �� ��������� � �������";
    }
    inside = false;
cout << "����� �� ��������� � �������";
  }
