#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int choice;

    cout << "[ - ] Программа \"Времена года\"\n\n";
    cout << "[ 1 ] Лето\n";
    cout << "[ 2 ] Осень\n";
    cout << "[ 3 ] Зима\n";
    cout << "[ 4 ] Весна\n\n";

    cout << "[ - ] Введите значение: ";
    cin >> choice;

    if (choice == 1) {
        cout << "[ - ] Сейчас лето, можно надеть легкую одежду и наслаждаться солнцем.";
    }
    else if (choice == 2) {
        cout << "[ - ] Сейчас осень, следует одеться тепло и взять с собой зонт.";
    }
    else if (choice == 3) {
        cout << "[ - ] Сейчас зима, одевайтесь тепло и не забудьте шапку и перчатки.";
    }
    else if (choice == 4) {
        cout << "[ - ] Сейчас весна, погода переменчивая, стоит взять легкую куртку.";
    }
    else {
        cout << "[ - ] Такого времени года нет.";
    }

    return 0;
}
