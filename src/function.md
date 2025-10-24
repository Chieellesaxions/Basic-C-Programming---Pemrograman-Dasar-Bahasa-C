
#  ⚙️ 7. Fungsi (Function) — Bikin Kode Lebih Rapi & Teratur

```c
// Filename: fungsi.c
// Description: Contoh penggunaan fungsi dalam bahasa C
// Author: Farhan Arbi Utomo
// Date: 23 Oct 2025

#include <stdio.h> // Header standar input-output

// ======== DEKLARASI FUNGSI ========
// Format umum:
// tipe_data nama_fungsi(parameter1, parameter2, ...);
int tambah(int a, int b);   // Deklarasi fungsi penjumlahan
void tampilkanHalo();       // Deklarasi fungsi tanpa nilai balik (void)

// ======== FUNGSI UTAMA ========
int main() {
    int x, y, hasil;

    tampilkanHalo(); // Panggil fungsi yang tidak mengembalikan nilai

    printf("\nMasukkan dua angka: ");
    scanf("%d %d", &x, &y); // Input dua angka dari user

    hasil = tambah(x, y);   // Panggil fungsi tambah dan simpan hasilnya

    printf("Hasil penjumlahan: %d + %d = %d\n", x, y, hasil);

    return 0; // Program selesai
}

// ======== DEFINISI FUNGSI ========

// Fungsi yang mengembalikan nilai integer
int tambah(int a, int b) {
    int c = a + b; // Hitung jumlah
    return c;      // Kembalikan hasil ke pemanggil
}

// Fungsi tanpa nilai balik
void tampilkanHalo() {
    printf("Halo! 👋 Selamat datang di program fungsi C.\n");
}
```

---

## 🧠 Penjelasan Program

Fungsi di C itu kayak **mini program** di dalam program utama.
Tujuannya: biar kode lo **lebih terstruktur, reusable**, dan gampang dibaca.
Misalnya lo punya tugas berulang (kayak menghitung sesuatu), tinggal panggil fungsinya aja!

---

## 📖 Penjabaran Baris Demi Baris

| **Baris** | **Kode**                                              | **Penjelasan**                                             |
| :-------: | :---------------------------------------------------- | :--------------------------------------------------------- |
|    1–5    | `// ...`                                              | Komentar pembuka file                                      |
|     7     | `#include <stdio.h>`                                  | Import library standar                                     |
|   10–12   | `int tambah(int a, int b);` / `void tampilkanHalo();` | Deklarasi fungsi sebelum `main()`                          |
|   15–26   | `int main() { ... }`                                  | Fungsi utama tempat program dieksekusi                     |
|     18    | `tampilkanHalo();`                                    | Panggil fungsi tanpa nilai balik                           |
|     21    | `hasil = tambah(x, y);`                               | Panggil fungsi `tambah` dengan dua argumen                 |
|   31–34   | `int tambah(int a, int b)`                            | Definisi fungsi, melakukan operasi dan mengembalikan hasil |
|   37–39   | `void tampilkanHalo()`                                | Fungsi `void` untuk menampilkan teks tanpa return value    |

---

## ✅ Contoh Output Program

```yaml
Halo! 👋 Selamat datang di program fungsi C.

Masukkan dua angka: 10 25
Hasil penjumlahan: 10 + 25 = 35
```

---

## ⚙️ Struktur Umum Fungsi di C

```c
tipe_data nama_fungsi(parameter1, parameter2, ...) {
    // kode di dalam fungsi
    return nilai; // opsional (kalau bukan void)
}
```

Contoh sederhana:

```c
int kali(int x, int y) {
    return x * y;
}
```

---

## 💡 Kenapa Fungsi Itu Penting?

✅ **Lebih Rapi:** Kode nggak berantakan di satu tempat
✅ **Reusable:** Bisa dipanggil berkali-kali
✅ **Modular:** Bisa dibagi per bagian logika
✅ **Mudah Debug:** Kalau error, tinggal cek fungsi terkait

---

## 🚀 Kesimpulan

Dari bab ini lo udah ngerti gimana:

* Ngebuat dan manggil fungsi sendiri
* Bedain fungsi dengan dan tanpa *return value*
* Gunain parameter buat kirim data antar fungsi

Dengan konsep ini, lo udah bisa bikin program C yang **lebih profesional dan efisien** 💪
Langkah berikutnya lo bisa lanjut ke:

* Fungsi rekursif
* Fungsi dengan array atau pointer
* Pembagian file `.h` dan `.c` (modular programming level lanjut)

---
