#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int x = 0;
    int result = 1;
    for (int i = 0; i < 10; i++) {
        cout << "¬вед≥ть число " << i++ <<":";
        cin >> x;
        result *= x;

    }
    cout << result;




    return 0;

}