// Soal ini dijawab menggunakan bahasa CPP

/*
    Buatlah program yang menerima input satu bilangan bulat (detik) 
    dan menampilkan output dalam format: X detik = H jam M menit S detik
*/

#include <stdio.h>

int main() {
    int dtk, hri, jam, mnt;
    printf("Masukkan detik\t= "); scanf("%d", &dtk);

    hri = dtk / 86400;
    // Hitung jumlah hari (1 hari = 86400 detik)
    
    jam = (dtk % 86400) / 3600;
    // Hitung sisa detik setelah dikurangi hari yang bulat, lalu bagi 3600 untuk mendapat jam
    
    mnt = (dtk % 3600) / 60;
    // Hitung sisa detik setelah dikurangi jam yang bulat, lalu bagi 60 untuk mendapat menit

    printf("%d detik\t= %d hari %d jam %d menit %d detik", dtk, hri, jam, mnt, (dtk % 60));
    // Sisa bagi 60 memberikan sisa detik murni yang tidak bisa jadi menit
    
    return 0;
}
