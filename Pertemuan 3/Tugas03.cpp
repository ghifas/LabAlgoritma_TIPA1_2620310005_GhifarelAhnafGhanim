#include <iostream>
using namespace std;

int main() {
    float r, t, luas, volume;
    const float phi = 3.14;

    cout << "Masukin be gue itungin" << endl;

    cout << "\nMasukkan jari-jari: ";
    cin >> r;

    cout << "Masukkan tinggi tabung: ";
    cin >> t;

    luas = phi * r * r;
    volume = phi * r * r * t;

    cout << "\nbham sokin" << endl;

    cout << "\nLuas Lingkaran = " << luas << endl;
    cout << "Volume Tabung = " << volume << endl;

    return 0;
}