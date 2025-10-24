
#  ⚖️ 4. Percabangan (If, Else, Switch) — Logika Keputusan dalam Program

```c
// Filename: percabangan.c
// Description: Contoh penggunaan struktur percabangan if, else, dan switch
// Author: Farhan Arbi Utomo
// Date: 23 October 2025

#include <stdio.h>  // Header standar untuk fungsi input-output seperti printf dan scanf

int main() {
    int nilai;

    printf("Masukkan nilai kamu (0-100): ");
    scanf("%d", &nilai);

    // ==================================================
    // =============== STRUKTUR IF - ELSE ===============
    // ==================================================
    if (nilai >= 90) {
        printf("Nilai kamu A (Hebat sekali!)\n");
    } else if (nilai >= 80) {
        printf("Nilai kamu B (Bagus, pertahankan!)\n");
    } else if (nilai >= 70) {
        printf("Nilai kamu C (Cukup baik, tingkatkan lagi)\n");
    } else if (nilai >= 60) {
        printf("Nilai kamu D (Perlu lebih giat belajar)\n");
    } else {
        printf("Nilai kamu E (Jangan menyerah, tetap berusaha!)\n");
    }

    // ==================================================
    // =============== STRUKTUR SWITCH ==================
    // ==================================================
    char grade;
    printf("\nMasukkan huruf nilai kamu (A-E): ");
    scanf(" %c", &grade);  // Spasi sebelum %c untuk menghindari karakter newline

    switch (grade) {
        case 'A':
            printf("Luar biasa! Kamu sangat menguasai materi.\n");
            break;
        case 'B':
            printf("Kerja bagus! Masih ada ruang untuk berkembang.\n");
            break;
        case 'C':
            printf("Cukup baik, tapi perlu lebih fokus.\n");
            break;
        case 'D':
            printf("Harus lebih semangat belajar!\n");
            break;
        case 'E':
            printf("Jangan putus asa, teruslah belajar!\n");
            break;
        default:
            printf("Nilai tidak valid. Harap masukkan antara A sampai E.\n");
            break;
    }

    return 0;  // Program berakhir dengan sukses
}
```

---

## 🧠 Konsep Dasar Percabangan

**Percabangan (conditional statement)** digunakan agar program dapat **mengambil keputusan** berdasarkan kondisi tertentu.

Jika kondisi **benar (true)**, maka blok kode di dalam percabangan dijalankan.
Jika kondisi **salah (false)**, program akan menjalankan blok kode lain (misalnya bagian `else`).

Percabangan sangat penting untuk mengatur **alur logika program**, seperti menentukan hasil ujian, validasi input, atau pilihan menu.

---

## 📖 Penjelasan Kode

| **Baris** | **Kode**                | **Penjelasan**                                                   |
| :-------: | :---------------------- | :--------------------------------------------------------------- |
|    1–5    | `// ...`                | Komentar pembuka berisi informasi file, deskripsi, dan penulis.  |
|     7     | `#include <stdio.h>`    | Mengimpor pustaka standar untuk fungsi `printf()` dan `scanf()`. |
|     9     | `int nilai;`            | Mendeklarasikan variabel untuk menyimpan nilai numerik.          |
|   11–12   | `printf` dan `scanf`    | Menampilkan pesan dan membaca input pengguna.                    |
|   16–25   | `if`, `else if`, `else` | Menentukan kategori nilai berdasarkan rentang angka.             |
|   30–53   | `switch (grade)`        | Menentukan hasil berdasarkan huruf nilai yang dimasukkan.        |
|     55    | `return 0;`             | Mengakhiri program dengan kode keberhasilan.                     |

---

## 📊 Struktur `if` dan `else`

Struktur `if` digunakan untuk memeriksa **suatu kondisi logis**.
Jika kondisi bernilai benar, maka blok kode di dalamnya dijalankan.

**Bentuk umum:**

```c
if (kondisi) {
    // Kode dijalankan jika kondisi benar
} else {
    // Kode dijalankan jika kondisi salah
}
```

Jika terdapat beberapa kondisi yang perlu diperiksa, dapat menggunakan bentuk **if–else if–else**:

```c
if (nilai >= 90) {
    printf("A\n");
} else if (nilai >= 80) {
    printf("B\n");
} else {
    printf("C\n");
}
```

---

## ⚙️ Operator Logika dan Perbandingan

Operator ini digunakan untuk membuat ekspresi logika dalam kondisi `if`.

| **Operator** | **Makna**             | **Contoh** | **Hasil Jika x = 5** |
| :----------: | :-------------------- | :--------- | :------------------- |
|     `==`     | Sama dengan           | `x == 5`   | true                 |
|     `!=`     | Tidak sama dengan     | `x != 5`   | false                |
|      `>`     | Lebih besar dari      | `x > 3`    | true                 |
|      `<`     | Lebih kecil dari      | `x < 2`    | false                |
|     `>=`     | Lebih besar atau sama | `x >= 5`   | true                 |
|     `<=`     | Lebih kecil atau sama | `x <= 5`   | true                 |

Selain itu, ada juga **operator logika gabungan**:

| **Operator** | **Arti**              | **Contoh**          | **Makna**                     |          |   |          |                                    |
| :----------: | :-------------------- | :------------------ | :---------------------------- | -------- | - | -------- | ---------------------------------- |
|     `&&`     | DAN (*logical AND*)   | `(x > 0 && x < 10)` | True jika kedua kondisi benar |          |   |          |                                    |
|       `      |                       | `                   | ATAU (*logical OR*)           | `(x == 5 |   | x == 7)` | True jika salah satu kondisi benar |
|      `!`     | TIDAK (*logical NOT*) | `!(x == 5)`         | True jika kondisi salah       |          |   |          |                                    |

---

## 🧩 Struktur `switch-case`

Struktur `switch` digunakan ketika terdapat **beberapa pilihan nilai tetap**.
Daripada menggunakan banyak `if-else`, `switch` membuat kode lebih rapi dan mudah dibaca.

**Bentuk umum:**

```c
switch (variabel) {
    case nilai1:
        // aksi jika variabel == nilai1
        break;
    case nilai2:
        // aksi jika variabel == nilai2
        break;
    default:
        // aksi jika tidak ada yang cocok
}
```

> ⚠️ **Penting:** Gunakan perintah `break;` di akhir setiap `case`.
> Tanpa `break`, program akan melanjutkan eksekusi ke `case` berikutnya (disebut *fall-through*).

---

## ✅ Contoh Hasil Eksekusi Program

```java
Masukkan nilai kamu (0-100): 85
Nilai kamu B (Bagus, pertahankan!)

Masukkan huruf nilai kamu (A-E): B
Kerja bagus! Masih ada ruang untuk berkembang.
```

---

## 💡 Tips dan Catatan

* Gunakan **`if-else`** ketika memeriksa **rentang nilai atau ekspresi logika**.
  Contoh: `if (nilai >= 70 && nilai <= 90)`
* Gunakan **`switch`** ketika memeriksa **nilai tunggal** dari suatu variabel.
  Contoh: huruf, angka menu, atau kode status.
* Dalam bahasa C, **nilai 0 dianggap “false”**, dan **selain 0 dianggap “true”**.
* Hindari penggunaan `if` yang terlalu bersarang (*nested if*), karena akan mengurangi keterbacaan program.

---

## 🧾 Tabel Perbandingan Struktur Percabangan

| **Struktur** | **Kelebihan**                                       | **Kekurangan**                                | **Cocok Untuk**                       |
| :----------- | :-------------------------------------------------- | :-------------------------------------------- | :------------------------------------ |
| `if-else`    | Dapat menangani kondisi kompleks atau rentang nilai | Membutuhkan banyak baris untuk banyak kondisi | Penilaian atau logika dengan ekspresi |
| `switch`     | Lebih rapi dan efisien untuk nilai tunggal          | Tidak bisa menangani kondisi berupa rentang   | Menu pilihan atau pengelompokan nilai |

---

## 🚀 Kesimpulan

Pada bab ini, Anda telah mempelajari:

* Konsep dasar **pengambilan keputusan (decision making)** dalam pemrograman.
* Penggunaan struktur **`if`, `else if`, dan `else`** untuk kondisi bertingkat.
* Penggunaan **`switch-case`** untuk kondisi dengan banyak pilihan nilai tetap.
* Perbandingan, kelebihan, dan kekurangan masing-masing struktur.

Dengan memahami percabangan, Anda dapat membuat program yang **dinamis**, **cerdas**, dan **dapat beradaptasi** terhadap berbagai situasi input.

---

← [Bab Sebelumnya](Variabel-Tipe-Data.md) | [Bab Selanjutnya](looping.md) →
