
#  ⚙️ 7. Fungsi (Function) dalam Bahasa C

Fungsi adalah blok kode yang dirancang untuk menjalankan tugas tertentu. Dengan menggunakan fungsi, program menjadi lebih **terstruktur**, **mudah dibaca**, dan **mudah dikelola**.

---

## 📘 Contoh Program: Fungsi Dasar

```c
// Filename: function_example.c
// Description: Contoh penggunaan fungsi dalam bahasa C
// Author: Farhan Arbi Utomo
// Date: October 23, 2025

#include <stdio.h>  // Library standar untuk input dan output

// ====== DEKLARASI FUNGSI ======
int tambah(int a, int b);  // Fungsi untuk menjumlahkan dua angka
void sapa();               // Fungsi tanpa nilai balik (void)

// ====== FUNGSI UTAMA ======
int main() {
    int x = 10, y = 5;           // Variabel yang akan digunakan
    int hasil = tambah(x, y);    // Memanggil fungsi 'tambah' dan menyimpan hasilnya

    sapa();  // Memanggil fungsi void tanpa parameter

    printf("Hasil penjumlahan %d + %d = %d\n", x, y, hasil);
    return 0;  // Program berakhir dengan sukses
}

// ====== DEFINISI FUNGSI ======
int tambah(int a, int b) {
    return a + b;  // Mengembalikan hasil penjumlahan
}

void sapa() {
    printf("Selamat datang di program fungsi!\n");
}
```

---

## 🧠 Penjelasan Program

Program ini menunjukkan cara membuat dan menggunakan fungsi dalam bahasa C.
Fungsi digunakan untuk **memecah program besar menjadi bagian kecil** yang lebih mudah dikelola.

---

## 📖 Penjabaran Baris Demi Baris

| **Baris** | **Kode**                                             | **Penjelasan**                                                          |
| :-------: | :--------------------------------------------------- | :---------------------------------------------------------------------- |
|    1–4    | `// ...`                                             | Komentar untuk menjelaskan identitas program.                           |
|     6     | `#include <stdio.h>`                                 | Mengimpor library standar untuk fungsi input/output seperti `printf()`. |
|    9–10   | `int tambah(int a, int b);`<br>`void sapa();`        | Deklarasi fungsi sebelum digunakan di `main()`.                         |
|   13–19   | `int main() { ... }`                                 | Fungsi utama tempat eksekusi program dimulai.                           |
|   14–15   | `int x = 10, y = 5;` dan `int hasil = tambah(x, y);` | Mendefinisikan dua variabel dan memanggil fungsi `tambah()`.            |
|     17    | `sapa();`                                            | Memanggil fungsi `void` tanpa nilai balik.                              |
|     18    | `printf("Hasil penjumlahan...");`                    | Menampilkan hasil dari fungsi `tambah()`.                               |
|   23–25   | `int tambah(int a, int b) { return a + b; }`         | Definisi fungsi yang mengembalikan nilai penjumlahan dua angka.         |
|   27–29   | `void sapa() { ... }`                                | Definisi fungsi tanpa nilai balik, hanya menampilkan teks.              |

---

## 🧩 Struktur Dasar Fungsi

Struktur umum sebuah fungsi dalam bahasa C adalah sebagai berikut:

```c
tipe_data nama_fungsi(parameter1, parameter2, ...) {
    // isi perintah
    return nilai;  // opsional, tergantung tipe data fungsi
}
```

Contoh:

```c
int kali(int x, int y) {
    return x * y;
}
```

---

## ⚙️ Jenis-Jenis Fungsi

| **Jenis Fungsi**          | **Contoh**                 | **Keterangan**                      |
| :------------------------ | :------------------------- | :---------------------------------- |
| Fungsi dengan nilai balik | `int tambah(int a, int b)` | Mengembalikan nilai ke pemanggil.   |
| Fungsi tanpa nilai balik  | `void tampilkan()`         | Tidak mengembalikan nilai.          |
| Fungsi dengan parameter   | `float luas(float r)`      | Menggunakan input dari luar fungsi. |
| Fungsi tanpa parameter    | `void halo()`              | Tidak memerlukan input apapun.      |

---

## 💡 Tips Penting

* Selalu deklarasikan fungsi **di atas `main()`** atau gunakan **prototipe fungsi** seperti pada contoh.
* Gunakan nama fungsi yang **deskriptif** agar mudah dibaca.
* Jika fungsi tidak perlu mengembalikan nilai, gunakan `void`.
* Fungsi yang mengembalikan nilai **harus memiliki `return`**.

---

## ✅ Output Program

```nginx
Selamat datang di program fungsi!
Hasil penjumlahan 10 + 5 = 15
```

---

## 🚀 Kesimpulan

Dengan memahami fungsi, kita dapat:

* Membuat program lebih **modular dan efisien**
* Menghindari pengulangan kode (*code repetition*)
* Meningkatkan keterbacaan dan kemudahan pemeliharaan program

---
← [Bab 6 : Array — Kumpulan Data dalam Satu Variabel](array.md)
