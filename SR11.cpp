#include <iostream>
using namespace std;

int main() {

    int type, len;
    char sym;

    cout << "1 Горизонтальная\n2 Вертикальная\n";
    cin >> type;

    cout << "Длина: ";
    cin >> len;

    cout << "Символ: ";
    cin >> sym;

    if (type == 1) {

        for (int i = 0; i < len; i++)
            cout << sym;

    }
    else {

        for (int i = 0; i < len; i++)
            cout << sym << endl;

    }

}
