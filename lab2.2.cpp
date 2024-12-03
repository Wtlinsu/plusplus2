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
    cout << "Введіть координати x та y\n";

    cin >> x >> y;
    //int result = (x>=0 && x<=3) && (y>=0 && y<=1);

    if (fabs(x) + fabs(y) <= 1) {
        inside = true;
        cout << "Точка потрапляє в область";
    }
    else {
        inside = false;
        cout << "Точка не потрапляє в область";
    }
    inside = false;
cout << "Точка не потрапляє в область";
  }
