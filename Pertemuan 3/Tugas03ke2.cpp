#include <iostream>//File yang digunakan agar program bisa menampilkan output dan menerima input.
using namespace std;//Memudahkan penggunaan perintah C++ tanpa harus menulis std:: terlebih dahulu.

int main(){//Fungsi utama tempat program mulai dijalankan.
    // inisialisasi variabel

int x = 50;//Membuat variabel x bertipe integer dengan nilai awal 50.
int a,b,c,d,e;//Membuat lima variabel bertipe integer, yaitu a, b, c, d, dan e.

// proses
a = x > 5 + 5;//Memeriksa apakah nilai x lebih besar dari 10. Jika benar, a bernilai 1; jika salah, bernilai 0.
b = x > 100;//Memeriksa apakah nilai x lebih besar dari 100. Jika benar, b bernilai 1; jika salah, bernilai 0.
c = a && b;//Memeriksa apakah a dan b sama-sama bernilai benar. Jika keduanya benar, c bernilai 1; jika tidak, bernilai 0.
d = a || b;//Memeriksa apakah salah satu atau kedua variabel a dan b bernilai benar. Jika iya, d bernilai 1; jika tidak, bernilai 0.
e = !(c);//Membalik nilai c. Jika c bernilai 1, e menjadi 0, dan sebaliknya.

// output berupa 1 (benar) dan 0 (salah)
cout << "\nNilai a = x > 5 + 5 = " << a << endl;//Menampilkan hasil pemeriksaan pada variabel a.
cout << "\nNilai b = x > 100 = " << b << endl;//Menampilkan hasil pemeriksaan pada variabel b.
cout << "\nNilai c = a && b = " << c << endl;//Menampilkan hasil pemeriksaan logika AND pada variabel c.
cout << "\nNilai d = a || b = " << d << endl; //Menampilkan hasil pemeriksaan logika OR pada variabel d.
cout << "\nNilai e = !(c) = " << e << endl;// Menampilkan hasil pembalikan nilai c pada variabel e.

getchar(); // Menunggu pengguna menekan tombol sebelum program berakhir, jika input buffer memungkinkan.

} //Menandai akhir dari fungsi utama main().