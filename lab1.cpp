#include <iostream>
#include <Windows.h>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;
int main(void) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double a, b, y;

    cout << "Введіть значення a: ";
    cin >> a;
    cout << "Введіть значення b: ";
    cin >> b;

    double log_a_b = log(a / b);
    double log_b_a = log(b / a);
    double sin_part = pow(sin((a + b) * M_PI / 10), 2);
    double cos_part = pow(cos((a + b) * M_PI / 10), 2);


    y = pow(0.7 * log_a_b * sin_part + 0.8 * log_b_a * cos_part, 1.5);

    cout << "Значення y: " << y;

    return 0;
}



    




