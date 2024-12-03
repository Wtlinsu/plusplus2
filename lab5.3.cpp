#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a, b, h;
    cout << "¬вед≥ть початок ≥нтервалу а ";
    cin >> a;
    cout << "¬вед≥ть початок ≥нтервалу b ";
    cin >> b;
    cout << "¬вед≥ть початок ≥нтервалу h ";
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
            cout << "поза ќƒ«" << endl;
        }
        x += h;
    }
    cout << "-------------------" << endl;

    return 0;