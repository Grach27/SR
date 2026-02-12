#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;

    cout << "[ + ] Введите число: ";
    cin >> number;

    if (number < 0) {
        cout << "[ + ] Ошибка! Число меньше 0.";
    }
    else if (number > 100) {
        cout << "[ + ] Ошибка! Число больше 100.";
    }
    else if (number <= 10) {
        cout << "[ + ] Цифра в диапазоне: 0 - 10";
    }
    else if (number <= 20) {
        cout << "[ + ] Цифра в диапазоне: 11 - 20";
    }
    else if (number <= 30) {
        cout << "[ + ] Цифра в диапазоне: 21 - 30";
    }
    else if (number <= 40) {
        cout << "[ + ] Цифра в диапазоне: 31 - 40";
    }
    else if (number <= 50) {
        cout << "[ + ] Цифра в диапазоне: 41 - 50";
    }
    else if (number <= 60) {
        cout << "[ + ] Цифра в диапазоне: 51 - 60";
    }
    else if (number <= 70) {
        cout << "[ + ] Цифра в диапазоне: 61 - 70";
    }
    else if (number <= 80) {
        cout << "[ + ] Цифра в диапазоне: 71 - 80";
    }
    else if (number <= 90) {
        cout << "[ + ] Цифра в диапазоне: 81 - 90";
    }
    else {
        cout << "[ + ] Цифра в диапазоне: 91 - 100";
    }

    return 0;
}
