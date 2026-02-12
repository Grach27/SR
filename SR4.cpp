#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int userNumber;
    int answer;

    cout << "[ + ] Введите число: ";
    cin >> userNumber;

    int multiplier = 1;

    while (multiplier <= 9) {

        cout << "[ + ] Решите пример: " << userNumber << " x " << multiplier << endl;
        cout << "[ + ] Ответ: ";
        cin >> answer;

        if (answer == userNumber * multiplier) {
            cout << "[ + ] Пример решен правильно!\n\n";
            multiplier++; // увеличиваем множитель
        }
        else {
            cout << "[ - ] Ошибка, пример решен неверно!";
            return 0; // завершение программы при ошибке
        }
    }

    cout << "[ + ] Примеры решены, поздравляем!";

    return 0;
}
