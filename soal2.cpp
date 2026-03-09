// Soal ini dijawab menggunakan bahasa C, tapi tidak apa-apa jika menggunakan extension CPP

/*
Buat program yang membaca satu karakter menggunakan getchar(), getche(), dan getch(). 
Tampilkan karakter yang dimasukkan setelah setiap input.
*/
#include <stdio.h>  
#include <conio.h>  

int main() {
    char c;

    // 1. Menggunakan getchar()
    printf("Masukkan karakter (getchar): ");
    c = getchar();  // Membaca karakter dari input standar (keyboard)
    printf("Karakter yang dimasukkan: %c\n", c);

    // Membersihkan buffer untuk input selanjutnya
    while(getchar() != '\n');  

    // 2. Menggunakan getche()
    printf("Masukkan karakter (getche): ");
    c = getche();  // Membaca karakter dan langsung menampilkannya
    printf("\nKarakter yang dimasukkan: %c\n", c);

    // 3. Menggunakan getch()
    printf("Masukkan karakter (getch): ");
    c = getch();   // Membaca karakter tanpa menampilkannya di layar
    printf("\nKarakter yang dimasukkan: %c\n", c);

    return 0;
}
