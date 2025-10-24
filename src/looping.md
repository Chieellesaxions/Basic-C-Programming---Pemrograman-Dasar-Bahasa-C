
# 🔁 5. Perulangan (For, While, Do-While) — Mengulang Aksi Secara Efisien

```c
// Filename: perulangan.c
// Description: Contoh penggunaan struktur perulangan for, while, dan do-while dalam bahasa C
// Author: Farhan Arbi Utomo
// Date: 23 October 2025

#include <stdio.h>  // Header standar untuk fungsi input-output seperti printf() dan scanf()

int main() {
    int i = 0;  // Variabel penghitung umum yang digunakan pada semua contoh

    // ==================================================
    // =============== PERULANGAN FOR ===================
    // ==================================================

    printf("=== Perulangan FOR ===\n");

    /*
        Struktur dasar perulangan for:
        for (inisialisasi; kondisi; perubahan) {
            // blok kode yang akan dijalankan
        }

        ➤ Inisialisasi: dilakukan sekali di awal sebelum loop dimulai.
        ➤ Kondisi: diperiksa setiap kali loop akan dijalankan.
        ➤ Perubahan: dieksekusi setiap akhir iterasi untuk memperbarui nilai variabel.
    */
    for (i = 1; i <= 5; i++) {
        printf("Iterasi ke-%d\n", i);  // Menampilkan urutan iterasi
    }

    // ==================================================
    // =============== PERULANGAN WHILE =================
    // ==================================================

    printf("\n=== Perulangan WHILE ===\n");
    i = 1;  // Mengatur ulang nilai i

    /*
        Perulangan while digunakan ketika jumlah pengulangan tidak pasti,
        namun terdapat kondisi yang menentukan kapan perulangan harus berhenti.

        Bentuk umum:
        while (kondisi) {
            // blok kode
        }
    */
    while (i <= 5) {
        printf("Iterasi ke-%d\n", i);
        i++;  // Nilai i harus diperbarui agar loop dapat berhenti
    }

    // ==================================================
    // ============= PERULANGAN DO-WHILE ================
    // ==================================================

    printf("\n=== Perulangan DO-WHILE ===\n");
    i = 1;  // Mengatur ulang kembali nilai i

    /*
        Perulangan do-while hampir sama dengan while,
        namun blok kode selalu dijalankan minimal satu kali,
        baru setelah itu kondisi diperiksa.

        Bentuk umum:
        do {
            // blok kode
        } while (kondisi);
    */
    do {
        printf("Iterasi ke-%d\n", i);
        i++;
    } while (i <= 5);

    // ==================================================
    // =============== AKHIR PROGRAM ====================
    // ==================================================

    return 0;  // Mengembalikan nilai 0 menandakan program selesai dengan sukses
}
```

---

## 🧠 Konsep Dasar Perulangan

**Perulangan (loop)** digunakan untuk menjalankan satu atau beberapa baris kode **berulang kali**, selama kondisi tertentu masih terpenuhi.

Tanpa perulangan, programmer harus menulis perintah yang sama berkali-kali secara manual. Dengan perulangan, pekerjaan tersebut menjadi jauh lebih efisien dan rapi.

---

## 📖 Penjelasan Kode

| **Baris** | **Kode**                                     | **Penjelasan**                                                  |
| :-------: | :------------------------------------------- | :-------------------------------------------------------------- |
|    1–5    | `// ...`                                     | Komentar pembuka berisi informasi file dan penulis.             |
|     7     | `#include <stdio.h>`                         | Mengimpor *library* standar untuk fungsi input dan output.      |
|     9     | `int i = 0;`                                 | Variabel penghitung utama yang digunakan pada semua perulangan. |
|     13    | `printf("=== Perulangan FOR ===\n");`        | Menampilkan judul bagian perulangan pertama.                    |
|     22    | `for (i = 1; i <= 5; i++)`                   | Struktur perulangan `for` dari 1 sampai 5.                      |
|     23    | `printf("Iterasi ke-%d\n", i);`              | Menampilkan nomor iterasi di layar.                             |
|     31    | `printf("\n=== Perulangan WHILE ===\n");`    | Menampilkan judul bagian perulangan kedua.                      |
|     36    | `while (i <= 5)`                             | Mengecek apakah kondisi `i <= 5` masih benar sebelum mengulang. |
|   37–38   | `printf... i++;`                             | Menampilkan teks dan menaikkan nilai `i`.                       |
|     46    | `printf("\n=== Perulangan DO-WHILE ===\n");` | Menampilkan judul bagian ketiga.                                |
|   49–53   | `do { ... } while (i <= 5);`                 | Melakukan iterasi minimal satu kali sebelum memeriksa kondisi.  |
|     58    | `return 0;`                                  | Mengakhiri program dengan sukses.                               |

---

## 📊 1. Perulangan `for`

Perulangan `for` digunakan ketika **jumlah pengulangan sudah diketahui** sejak awal.

**Struktur Umum:**

```c
for (inisialisasi; kondisi; perubahan) {
    // blok kode
}
```

**Contoh:**

```c
for (int i = 1; i <= 5; i++) {
    printf("Iterasi ke-%d\n", i);
}
```

Penjelasan:

* `int i = 1` → nilai awal variabel penghitung.
* `i <= 5` → loop akan berjalan selama kondisi ini benar.
* `i++` → nilai i bertambah 1 setiap kali iterasi selesai.

---

## 📈 2. Perulangan `while`

Perulangan `while` cocok digunakan ketika **jumlah pengulangan belum pasti**, namun terdapat **syarat tertentu** yang harus dipenuhi.

**Struktur Umum:**

```c
while (kondisi) {
    // blok kode
}
```

**Contoh:**

```c
int i = 1;
while (i <= 5) {
    printf("Iterasi ke-%d\n", i);
    i++;
}
```

> ⚠️ Catatan: Jika Anda lupa menaikkan nilai variabel penghitung (`i++`), program akan mengalami *infinite loop* (perulangan tanpa akhir).

---

## 🔄 3. Perulangan `do-while`

Perulangan `do-while` memiliki perbedaan utama: **blok kode selalu dijalankan minimal satu kali**, bahkan jika kondisi salah dari awal.

**Struktur Umum:**

```c
do {
    // blok kode
} while (kondisi);
```

**Contoh:**

```c
int i = 6;
do {
    printf("Iterasi ke-%d\n", i);
    i++;
} while (i <= 5);
```

**Output:**

```nginx
Iterasi ke-6
```

Walaupun kondisi `i <= 5` salah, perintah tetap dijalankan satu kali terlebih dahulu.

---

## ✅ Hasil Output Program Lengkap

```yaml
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

## ⚙️ Tabel Perbandingan Jenis Perulangan

| **Jenis Perulangan** | **Pemeriksaan Kondisi** | **Minimal Dijalankan** | **Cocok Untuk**                                   |
| :------------------- | :---------------------- | :--------------------- | :------------------------------------------------ |
| `for`                | Sebelum iterasi         | 0 kali                 | Loop dengan jumlah pengulangan yang pasti         |
| `while`              | Sebelum iterasi         | 0 kali                 | Loop dengan kondisi dinamis                       |
| `do-while`           | Setelah iterasi         | Minimal 1 kali         | Loop yang wajib dijalankan sekali terlebih dahulu |

---

## 💡 Tips dan Catatan

* Gunakan **`for`** ketika jumlah pengulangan diketahui dengan pasti.
* Gunakan **`while`** ketika pengulangan bergantung pada kondisi tertentu.
* Gunakan **`do-while`** jika blok kode harus dijalankan minimal satu kali.
* Hindari **loop tanpa batas (infinite loop)** dengan memastikan kondisi akan menjadi salah suatu saat.

---

## 🚀 Kesimpulan

Pada bab ini, Anda telah mempelajari:

* Tiga jenis struktur perulangan utama dalam bahasa C: `for`, `while`, dan `do-while`.
* Cara menentukan kondisi dan menghentikan perulangan dengan benar.
* Kapan masing-masing jenis loop sebaiknya digunakan.

Dengan memahami konsep ini, Anda dapat membuat program yang lebih **efisien**, **dinamis**, dan **mudah dikembangkan** — mulai dari pengulangan sederhana hingga simulasi dan perhitungan otomatis.

---
← [Bab 4 : Percabangan (If, Else, Switch) — Logika Keputusan dalam Program](Percabangan(If,Else,Switch).md) | [Bab 6 : Array — Kumpulan Data dalam Satu Variabel](array.md) →

