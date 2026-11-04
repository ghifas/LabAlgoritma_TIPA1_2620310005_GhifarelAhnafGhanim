#include <iostream>
using namespace std;

int main(){
    int pilih, bil, i, prima;

    do {
    cout << "===== Selamat Datang =====\n";
    cout << "1. Tentukan Bilangan Genap/Ganjil\n";
    cout << "2. Tentukan Bilangan Prima\n";
    cout << "0. Hentikan Program\n"<<endl;
    cout << "Pilih Angka \n";
    cin >> pilih;

    if (pilih==1){
        cout << "===== Menu Bilangan Genap/Ganjil=====\n";
        cout << "Masukkan Bilangan : ";
        cin >> bil;

        if (bil%2==0){
            cout << bil << " Bilangan Genap\n" << endl;
        } else {
            cout << bil << " Bilangan Ganjil\n" << endl;
        }
        }else if (pilih==2){
            cout << "===== Menu Bilangan Prima =====" << endl;
            cout << "Masukkan Bilangan : ";
            cin >> bil;

          prima = 1;

         if (bil <= 1) {
          prima = 0;
         } else {
              for (i = 2; i <= bil/ 2; i++) {
                    if (bil % i == 0) {
                        prima = 0;
                        break;
                    }
                }
            } 
            if (prima==1){
                cout << bil << " Bilangan Prima\n" << endl;
            }else {
                cout << bil << " Bukan Bilangan Prima\n" << endl;
            }
        } else if (pilih == 0) {
        } else {
            cout << "Pilihan tidak ada\n" << endl;
        }
    } while (pilih != 0);

    return 0;
}