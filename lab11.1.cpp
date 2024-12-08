#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
struct Date {
    int hours;
    int minutes;
};
bool Valid_time(const Date &time) {
    return (time.hours >= 0 && time.hours < 24 && time.minutes >= 0 && time.minutes < 60);
}
Date Add_minutes(const Date &time, int additional_minutes) {
    Date newTime = time;
    newTime.minutes += additional_minutes;
    newTime.hours += newTime.minutes/60;
    newTime.minutes %= 60;
    newTime.hours %= 24;
    return newTime;
}
int main(void) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int additionalMinutes;
    Date time;
    cout << "������ ������(�� 0 �� 23):";
    cin >> time.hours;
    cout << "������ �������(�� 0 �� 59):";
    cin >> time.minutes;
    if (!Valid_time(time)){
        cout << "������������ ���";
    }
    cout << "������ ���������� ���:";
    cin >> additionalMinutes;
    Date newTime = Add_minutes(time, additionalMinutes);
    cout << "����� ��� " << newTime.hours << ":" << newTime.minutes;
    return 0;
}


