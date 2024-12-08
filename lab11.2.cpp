#include <iostream>
#include <Windows.h>
using namespace std;

struct Date {
    int hours;
    int minutes;
};

// Перевірка коректності введеного часу
bool Valid_time(const Date& time) {
    return (time.hours >= 0 && time.hours < 24 && time.minutes >= 0 && time.minutes < 60);
}

// Функція для обчислення різниці між початковим і кінцевим часом
Date Calculate_duration(const Date& start, const Date& end) {
    Date duration;
    int totalStartMinutes = start.hours * 60 + start.minutes;
    int totalEndMinutes = end.hours * 60 + end.minutes;

    int totalDurationMinutes = totalEndMinutes - totalStartMinutes;

    // Якщо час закінчення менший за час початку, додаємо 24 години (подія тривала через опівніч)
    if (totalDurationMinutes < 0) {
        totalDurationMinutes += 24 * 60; // додаємо 1440 хвилин
    }

    duration.hours = totalDurationMinutes / 60;
    duration.minutes = totalDurationMinutes % 60;

    return duration;
}

int main(void) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Date startTime, endTime;

    // Введення часу початку
    cout << "Введіть час початку (години від 0 до 23): ";
    cin >> startTime.hours;
    cout << "Введіть хвилини початку (від 0 до 59): ";
    cin >> startTime.minutes;

    // Перевірка коректності введеного часу початку
    if (!Valid_time(startTime)) {
        cout << "Неправильний час початку!" << endl;
        return 1;
    }

    // Введення часу завершення
    cout << "Введіть час завершення (години від 0 до 23): ";
    cin >> endTime.hours;
    cout << "Введіть хвилини завершення (від 0 до 59): ";
    cin >> endTime.minutes;

    // Перевірка коректності введеного часу завершення
    if (!Valid_time(endTime)) {
        cout << "Неправильний час завершення!" << endl;
        return 1;
    }

    // Обчислення тривалості події
    Date duration = Calculate_duration(startTime, endTime);

    // Виведення результату
    cout << "Тривалість події: " << duration.hours << " годин " << duration.minutes << " хвилин." << endl;

    return 0;
}
