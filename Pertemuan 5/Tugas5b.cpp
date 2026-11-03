#include <iostream>

using namespace std;

int main() {
    int I, J, i;

    cout << "Input Tinggi Segitiga: ";
    cin >> I;

    for (i = 1; i <= I; i++) {
        for (J = 1; J <= i; J++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}