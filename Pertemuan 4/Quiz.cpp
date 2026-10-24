#include <iostream>
#include <string>
using namespace std;
    
int main() {
    double NR;
    int N1, N2, N3;
    string Nama;
    
    cout<<"Masukkan Nama Siswa : ";
    getline(cin, Nama);
    cout<<"Masukkan Nilai 1 : ";
    cin>>N1;
    cout<<"Masukkan Nilai 2 : ";
    cin>>N2;
    cout<<"Masukkan Nilai 3 : ";
    cin>>N3;

    NR=(N1+N2+N3)/3;

    if (NR>=85) {
    cout<< "Siswa yang bernama : "<<Nama<<endl;
    cout<< "Memperoleh Nilai Rata-Rata "<<NR<<endl;
    cout<< "Hadiah yang didapat adalah Komputer Core i5";
    }
    else if (NR>=70) {
        cout<< "Siswa yang bernama : "<<Nama<<endl;
        cout<< "Memperoleh nilai rata rata "<<NR<<endl;
        cout<< "Hadiah yang didapat adalah uang sebesar 2500000";
    }

    else {
        cout<< "Siswa yang bernama : "<<Nama<<endl;
        cout<< "Memperoleh nilai rata rata "<<NR<<endl;
        cout<< "Hadiah yang didapat adalah hiburan";
    }
}
