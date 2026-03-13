#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    int a = rand()%10+1;
    int b = rand()%10+1;
    int c = rand()%10+1;

    int tries = 5;
    int guess;
    int found = 0;

    while (tries > 0) {

        cout << "Попыток: " << tries << endl;
        cin >> guess;

        if (guess == a || guess == b || guess == c) {
            cout << "Угадал!\n";
            found++;
        }
        else
            cout << "Не угадал\n";

        tries--;
    }

}
