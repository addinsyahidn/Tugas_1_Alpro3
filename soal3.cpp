// Soal ini dijawab menggunakan bahasa CPP

/*
    Buatlah program yang menerima input satu bilangan bulat (detik) 
    dan menampilkan output dalam format: X detik = H jam M menit S detik
*/

#include <iostream>
using namespace std;

int main() {
    int X, H, M, S;
    // Karena yang dibutuhkan bilangan Bulat
    cout << "Masukkan detik\t= "; cin >> X;
    // Input detik awal hasil
    
    H = X / 3600;
    // Hitung jumlah hari (1 Jam = 3600 detik)
    
    M = (X % 3600) / 60;
    // Hitung sisa detik setelah dikurangi jam yang bulat, lalu bagi 60 untuk mendapat jam
    
    S = X % 60;
    // Hitung sisa detik setelah dikurangi mnt yang bulat

    cout << X << " detik\t= " << H << " jam " << M << " menit " << S << " detik";
    // Output hasil dengan format yang sesuai
    
    return 0;
}
