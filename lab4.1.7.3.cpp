#include <iostream>
#include <Windows.h>
using namespace std;
int main(void) {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	/*x.x.x.x
	x>=1,x<=255*/
	int a, b, c, d;

	cout << "������ 4 ����� ��� �� ������(�� 1 �� 255)" << endl;
	cin >> a >> b >> c >> d;
	if ((a >= 1 && a <= 255) && (b >= 1 && b <= 255) && (c >= 1 && c <= 255) &&
		(d >= 1 && d <= 255)) {
		cout << a << "." << b << "." << c << "." << d;
	}
	else {
		cout << "����������� ������ ���";

	}
	return 0;
}