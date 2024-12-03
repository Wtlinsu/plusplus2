#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int main(void) {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double pi4 = 0.0;
	long n;
	cout << "Number of iterations? ";
	cin >> n;
	for (long i = 0; i < n; ++i) {
		double D = 2 * i + 1;
		if (i % 2 == 0) {
			pi4 += 1.0 / D;
		}
		else {
			pi4 -= 1.0 / D;
		}
	}
	cout << "Pi = " << (pi4 * 4.) << endl;
	return 0;
}