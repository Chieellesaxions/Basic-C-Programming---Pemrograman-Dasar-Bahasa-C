
// Filename: input_output.c
// Description: Contoh dasar input dan output pada bahasa C
// Author: Farhan Arbi Utomo
// Date: 23 Oct 2025

#include <stdio.h>  // Header file untuk fungsi input dan output

int main() {
    int umur;          // Variabel untuk menyimpan umur (bilangan bulat)
    char nama[50];     // Array karakter untuk menyimpan nama (maksimal 49 huruf + '\0')

    // ======== OUTPUT ========
    printf("Masukkan nama kamu: ");   // Menampilkan teks ke layar (tanpa newline)

    // ======== INPUT (string) ========
    scanf("%49s", nama);  // Menerima input string dari user, disimpan ke variabel 'nama'
                          // %49s berarti maksimal 49 karakter agar tidak kelebihan kapasitas

    // ======== OUTPUT ========
    printf("Masukkan umur kamu: ");   // Menampilkan teks baru

    // ======== INPUT (integer) ========
    scanf("%d", &umur);   // Menerima input integer, disimpan ke variabel 'umur'
                          // Gunakan & (alamat) karena scanf butuh lokasi memori variabel

    // ======== OUTPUT (gabungan teks + variabel) ========
    printf("\nHalo %s! 👋\n", nama);      // Tampilkan nama yang diinput user
    printf("Umur kamu %d tahun ya!\n", umur); // Tampilkan umur yang diinput user

    return 0;   // Mengembalikan nilai 0 (menandakan program selesai dengan sukses)
}

