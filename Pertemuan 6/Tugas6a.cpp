#include <iostream>
using namespace std;

int main() {
    int a;
    char lagi;

ulang:
    cout << "Masukkan Bilangan: ";
    cin >> a;

    cout << "Sisa pembagian: " << a % 2 << endl;

    cout << "Ulangi lagi? (Y/T): ";
    cin >> lagi;

    if (lagi == 'Y' || lagi == 'y') {
        goto ulang;
    }

    cout << "Program selesai." << endl;

    return 0;
}