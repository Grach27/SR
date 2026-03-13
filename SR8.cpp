#include <iostream>
using namespace std;

int main() {
    int menu, word;

    do {
        cout << "\n[+] Переводчик\n";
        cout << "[1] Русские слова\n";
        cout << "[2] Английские слова\n";
        cout << "[3] Выйти\n";
        cout << "Выберите пункт: ";
        cin >> menu;

        switch(menu) {

        case 1:
            cout << "\n[+] Список русских слов\n";
            cout << "[1] Дом\n[2] Дорога\n[3] Книга\n[4] Стол\n[5] Окно\n";
            cout << "[6] Машина\n[7] Школа\n[8] Учитель\n[9] Река\n[10] Город\n";
            cout << "[11] Дерево\n[12] Солнце\n[13] Луна\n[14] Вода\n[15] Хлеб\n";

            cout << "Выберите номер слова: ";
            cin >> word;

            switch(word) {
                case 1: cout << "Перевод: дом -> house\n"; break;
                case 2: cout << "Перевод: дорога -> road\n"; break;
                case 3: cout << "Перевод: книга -> book\n"; break;
                case 4: cout << "Перевод: стол -> table\n"; break;
                case 5: cout << "Перевод: окно -> window\n"; break;
                case 6: cout << "Перевод: машина -> car\n"; break;
                case 7: cout << "Перевод: школа -> school\n"; break;
                case 8: cout << "Перевод: учитель -> teacher\n"; break;
                case 9: cout << "Перевод: река -> river\n"; break;
                case 10: cout << "Перевод: город -> city\n"; break;
                case 11: cout << "Перевод: дерево -> tree\n"; break;
                case 12: cout << "Перевод: солнце -> sun\n"; break;
                case 13: cout << "Перевод: луна -> moon\n"; break;
                case 14: cout << "Перевод: вода -> water\n"; break;
                case 15: cout << "Перевод: хлеб -> bread\n"; break;
                default: cout << "Неверный номер\n";
            }
            break;

        case 2:
            cout << "\n[+] List of English words\n";
            cout << "[1] House\n[2] Road\n[3] Book\n[4] Table\n[5] Window\n";
            cout << "[6] Car\n[7] School\n[8] Teacher\n[9] River\n[10] City\n";
            cout << "[11] Tree\n[12] Sun\n[13] Moon\n[14] Water\n[15] Bread\n";

            cout << "Choose word number: ";
            cin >> word;

            switch(word) {
                case 1: cout << "Translation: house -> дом\n"; break;
                case 2: cout << "Translation: road -> дорога\n"; break;
                case 3: cout << "Translation: book -> книга\n"; break;
                case 4: cout << "Translation: table -> стол\n"; break;
                case 5: cout << "Translation: window -> окно\n"; break;
                case 6: cout << "Translation: car -> машина\n"; break;
                case 7: cout << "Translation: school -> школа\n"; break;
                case 8: cout << "Translation: teacher -> учитель\n"; break;
                case 9: cout << "Translation: river -> река\n"; break;
                case 10: cout << "Translation: city -> город\n"; break;
                case 11: cout << "Translation: tree -> дерево\n"; break;
                case 12: cout << "Translation: sun -> солнце\n"; break;
                case 13: cout << "Translation: moon -> луна\n"; break;
                case 14: cout << "Translation: water -> вода\n"; break;
                case 15: cout << "Translation: bread -> хлеб\n"; break;
                default: cout << "Wrong number\n";
            }
            break;

        case 3:
            cout << "Выход из программы 👋\n";
            break;

        default:
            cout << "Неверный пункт меню\n";
        }

    } while(menu != 3);

    return 0;
}
