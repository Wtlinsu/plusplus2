#include <iostream>
#include <Windows.h>
using namespace std;

struct Date {
    int hours;
    int minutes;
};

// �������� ���������� ��������� ����
bool Valid_time(const Date& time) {
    return (time.hours >= 0 && time.hours < 24 && time.minutes >= 0 && time.minutes < 60);
}

// ������� ��� ���������� ������ �� ���������� � ������� �����
Date Calculate_duration(const Date& start, const Date& end) {
    Date duration;
    int totalStartMinutes = start.hours * 60 + start.minutes;
    int totalEndMinutes = end.hours * 60 + end.minutes;

    int totalDurationMinutes = totalEndMinutes - totalStartMinutes;

    // ���� ��� ��������� ������ �� ��� �������, ������ 24 ������ (���� ������� ����� �����)
    if (totalDurationMinutes < 0) {
        totalDurationMinutes += 24 * 60; // ������ 1440 ������
    }

    duration.hours = totalDurationMinutes / 60;
    duration.minutes = totalDurationMinutes % 60;

    return duration;
}

int main(void) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Date startTime, endTime;

    // �������� ���� �������
    cout << "������ ��� ������� (������ �� 0 �� 23): ";
    cin >> startTime.hours;
    cout << "������ ������� ������� (�� 0 �� 59): ";
    cin >> startTime.minutes;

    // �������� ���������� ��������� ���� �������
    if (!Valid_time(startTime)) {
        cout << "������������ ��� �������!" << endl;
        return 1;
    }

    // �������� ���� ����������
    cout << "������ ��� ���������� (������ �� 0 �� 23): ";
    cin >> endTime.hours;
    cout << "������ ������� ���������� (�� 0 �� 59): ";
    cin >> endTime.minutes;

    // �������� ���������� ��������� ���� ����������
    if (!Valid_time(endTime)) {
        cout << "������������ ��� ����������!" << endl;
        return 1;
    }

    // ���������� ��������� ��䳿
    Date duration = Calculate_duration(startTime, endTime);

    // ��������� ����������
    cout << "��������� ��䳿: " << duration.hours << " ����� " << duration.minutes << " ������." << endl;

    return 0;
}
