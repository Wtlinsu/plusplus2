#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int main(void) {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int N;
	cout << "������ ����� N: ";
	cin >> N;
	int result = 1;
	int digit;
	bool hasNine = false;
	//cout << hasNine;
	if (N <= 0) {
		cout << "�������";
		return 0;
	}
	do {
		digit = N % 10;
		if (digit == 9) {
			result *= digit;
			hasNine = true;
		}
		//cout << hasNine;
		N /= 10;
	} while (N > 0);
	//cout << hasNine;
	if (hasNine) {
		cout << "result:" << result;
	}
	else {
		cout << " 9 ����";
	}

	return 0;
}
