
#  🔁 5. Perulangan (For, While, Do-While) — Mengulang Aksi Tanpa Batas 😎

```c
// Filename: perulangan.c
// Description: Contoh penggunaan perulangan for, while, dan do-while dalam bahasa C
// Author: Farhan Arbi Utomo
// Date: 23 Oct 2025

#include <stdio.h>  // Header file standar untuk input-output (fungsi printf dan scanf)

int main() {
    int i = 0;  // Variabel penghitung, digunakan di semua contoh loop

    // ===============================
    // ======== PERULANGAN FOR =======
    // ===============================

    printf("=== Perulangan FOR ===\n"); // Menampilkan judul bagian

    /*
        Bentuk umum perulangan for:
        for (inisialisasi; kondisi; perubahan) {
            // blok kode
        }

        1️⃣ Inisialisasi → dilakukan sekali di awal (misalnya i = 1)
        2️⃣ Kondisi → dicek setiap kali loop (kalau true, lanjut)
        3️⃣ Perubahan → dijalankan tiap akhir iterasi (misalnya i++)
    */
    for (i = 1; i <= 5; i++) {
        printf("Iterasi ke-%d\n", i);  // Menampilkan urutan iterasi
    }

    // ===============================
    // ======== PERULANGAN WHILE =====
    // ===============================

    printf("\n=== Perulangan WHILE ===\n"); // \n = baris baru
    i = 1;  // Reset nilai i ke 1

    /*
        While cocok digunakan saat kita tidak tahu pasti berapa kali perulangan,
        tapi tahu kondisi berhentinya.

        while (kondisi) {
            // blok kode
        }
    */
    while (i <= 5) {
        printf("Iterasi ke-%d\n", i);  // Cetak nilai i
        i++;  // Naikkan i supaya loop berakhir nanti
    }

    // ===============================
    // ===== PERULANGAN DO-WHILE =====
    // ===============================

    printf("\n=== Perulangan DO-WHILE ===\n");
    i = 1;  // Reset lagi ke 1

    /*
        Do-While mirip While, tapi bedanya:
        👉 Blok kode dijalankan minimal sekali, baru setelah itu dicek kondisinya.

        Format:
        do {
            // blok kode
        } while (kondisi);
    */
    do {
        printf("Iterasi ke-%d\n", i);  // Jalankan dulu
        i++;                           // Lalu naikkan nilai i
    } while (i <= 5);  // Cek kondisi setelah satu kali eksekusi

    // ===============================
    // ======== SELESAI ============
    // ===============================
    return 0;  // Mengakhiri program dengan sukses (nilai 0 = OK)
}

```

---

## 🧠 Penjelasan Singkat

Perulangan digunakan untuk **menjalankan kode berulang kali** selama kondisi tertentu masih benar (`true`).

Dengan loop, kamu bisa:

* Nge-print data berkali-kali
* Melakukan perhitungan berulang
* Menyederhanakan kode yang harus diulang

Program ini memperkenalkan tiga jenis loop (perulangan) utama dalam bahasa C:

for, while, dan do-while.

Ketiganya digunakan untuk menjalankan satu blok kode berulang kali — dengan cara kerja yang sedikit berbeda.


### Penjelasan:

| **Baris** | **Kode**                                     | **Penjelasan**                                        |
| :-------: | :------------------------------------------- | :---------------------------------------------------- |
|    1–5    | `// ...`                                     | Komentar pembuka berisi informasi file dan penulis    |
|     7     | `#include <stdio.h>`                         | Mengimpor *header* standar agar bisa pakai `printf()` |
|     9     | `int i = 0;`                                 | Variabel penghitung umum                              |
|     13    | `printf("=== Perulangan FOR ===\n");`        | Cetak judul bagian pertama                            |
|     22    | `for (i = 1; i <= 5; i++)`                   | Loop `for` dengan batas dari 1 sampai 5               |
|     23    | `printf("Iterasi ke-%d\n", i);`              | Cetak nomor iterasi ke layar                          |
|     31    | `printf("\n=== Perulangan WHILE ===\n");`    | Mulai bagian `while`                                  |
|     36    | `while (i <= 5)`                             | Mengecek apakah `i` masih ≤ 5 sebelum mengulang       |
|   37–38   | `printf... i++;`                             | Menjalankan aksi dan menaikkan nilai `i`              |
|     46    | `printf("\n=== Perulangan DO-WHILE ===\n");` | Mulai bagian `do-while`                               |
|   49–53   | `do { ... } while (i <= 5);`                 | Jalankan dulu, baru cek kondisi                       |
|     58    | `return 0;`                                  | Program selesai sukses                                |


---

## 📊 1. Struktur Perulangan `for`

Digunakan kalau **jumlah perulangannya sudah diketahui**.

Format:

```c
for (inisialisasi; kondisi; perubahan) {
    // blok kode yang diulang
}
```

Contoh:

```c
for (int i = 1; i <= 5; i++) {
    printf("Iterasi ke-%d\n", i);
}
```

---

## 📈 2. Struktur Perulangan `while`

Dipakai kalau **kita gak tahu pasti berapa kali harus ngulang**, tapi tahu kondisi berhentinya.

Format:

```c
while (kondisi) {
    // blok kode
}
```

Contoh:

```c
int i = 1;
while (i <= 5) {
    printf("Iterasi ke-%d\n", i);
    i++;
}
```

> ⚠️ Hati-hati: kalau lupa menaikkan nilai `i`, program bisa loop *tanpa henti (infinite loop)* 😭

---

## 🔄 3. Struktur Perulangan `do-while`

Sama kayak `while`, tapi **selalu dijalankan minimal sekali**, bahkan kalau kondisinya salah dari awal.

Format:

```c
do {
    // blok kode
} while (kondisi);
```

Contoh:

```c
int i = 6;
do {
    printf("Iterasi ke-%d\n", i);
    i++;
} while (i <= 5);
```

Output-nya:

```nginx
Iterasi ke-6
```

➡️ Walaupun kondisi `i <= 5` salah, kode tetap dijalankan sekali!

---

## ✅ Output Program Contoh

```diff
=== Perulangan FOR ===
Iterasi ke-1
Iterasi ke-2
Iterasi ke-3
Iterasi ke-4
Iterasi ke-5

=== Perulangan WHILE ===
Iterasi ke-1
Iterasi ke-2
Iterasi ke-3
Iterasi ke-4
Iterasi ke-5

=== Perulangan DO-WHILE ===
Iterasi ke-1
Iterasi ke-2
Iterasi ke-3
Iterasi ke-4
Iterasi ke-5
```

---

## 💡 Tips & Catatan

* `for` = cocok buat jumlah pasti (contoh: 5 kali, 10 kali).
* `while` = cocok kalau belum tahu kapan berhenti, tapi tergantung kondisi.
* `do-while` = cocok buat proses yang harus dijalankan minimal sekali.
* Hati-hati dengan **loop tanpa henti**, biasanya karena kondisi gak pernah salah 😆

### ⚙️ Ringkasan Perbedaan Tiga Jenis Loop

Jenis	Waktu Cek Kondisi	Minimal Dijalankan	Cocok Untuk
for	Sebelum iterasi	Bisa 0 kali	Loop dengan jumlah pasti
while	Sebelum iterasi	Bisa 0 kali	Kondisi dinamis, belum tentu pasti
do-while	Setelah iterasi	Minimal 1 kali	Aksi wajib dijalankan dulu

---

## 🚀 Kesimpulan

Di bab ini lo udah belajar:

* Cara kerja tiga jenis loop (`for`, `while`, `do-while`)
* Kapan harus pakai masing-masing
* Potensi error (infinite loop) dan cara menghindarinya

Dengan perulangan ini, lo bisa mulai bikin:

* Program penghitung otomatis
* Kalkulator berulang
* Simulasi dan game sederhana

