#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int main(void) {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int a, b;
	const float epsilon = 0.000001;
	cout << "������ ��� ����� �����" << endl;
	cin >> a >> b;
	float c = 1.0 / a;
	float d = 1.0 / b;
	if (fabs(c - d) < epsilon) {
		cout << "���������� ���������� (epsilon=0.000001)" << endl;
	}
	else {
		cout << "���������� �� ���������� (epsilon=0.000001)" << endl;
	}

	return 0;
}