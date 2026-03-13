#include <iostream>
using namespace std;

int main() {

    int n;

    while (true) {

        cout << "Введите число: ";
        cin >> n;

        if (n == 0)
            break;

        if (n < 1 || n > 15) {
            cout << "Ошибка\n";
            continue;
        }

        int i = 1;

        while (i <= n) {
            cout << "Круг: " << i << endl;
            i++;
        }
    }

}
