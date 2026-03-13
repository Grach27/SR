#include <iostream>
using namespace std;

int main() {

    int num;
    int count = 0;
    int sum = 0;

    while (true) {

        cin >> num;

        if (num == 0)
            break;

        sum += num;
        count++;
    }

    cout << "Количество: " << count << endl;
    cout << "Сумма: " << sum;

}
