#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double num1, num2;
    char operation;

    cout << "[ + ] Калькулятор\n\n";
    cout << "Выберите операцию:\n";
    cout << "+  Сложение\n";
    cout << "-  Вычитание\n";
    cout << "*  Умножение\n";
    cout << "/  Деление\n";
    cout << "%  Деление с остатком\n\n";

    cout << "[ + ] Введите операцию: ";
    cin >> operation;

    cout << "[ + ] Введите первое число: ";
    cin >> num1;

    cout << "[ + ] Введите второе число: ";
    cin >> num2;

    if (operation == '+') {
        cout << "[ + ] Результат: " << num1 << " + " << num2
            << " = " << num1 + num2;
    }
    else if (operation == '-') {
        cout << "[ + ] Результат: " << num1 << " - " << num2
            << " = " << num1 - num2;
    }
    else if (operation == '*') {
        cout << "[ + ] Результат: " << num1 << " * " << num2
            << " = " << num1 * num2;
    }
    else if (operation == '/') {

        if (num2 == 0) {
            cout << "[ - ] Ошибка! Деление на 0 запрещено.";
        }
        else {
            cout << "[ + ] Результат: " << num1 << " / " << num2
                << " = " << num1 / num2;
        }
    }
    else if (operation == '%') {

        if (num2 == 0) {
            cout << "[ - ] Ошибка! Деление на 0 запрещено.";
        }
        else {
            // Остаток работает только с целыми числами
            int a = (int)num1;
            int b = (int)num2;

            cout << "[ + ] Результат: " << a << " % " << b
                << " = " << a % b;
        }
    }
    else {
        cout << "[ - ] Неизвестная операция.";
    }

    return 0;
}
