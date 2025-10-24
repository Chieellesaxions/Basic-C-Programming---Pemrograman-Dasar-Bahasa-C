
# 🧩 1. Hello World — Program Pertama

```c
// Program: hello_world.c
// Deskripsi: Menampilkan teks "Hello World!" pada layar
// Pembuat: Farhan Arbi Utomo
// Tanggal: 23 Oktober 2025

#include <stdio.h> // Header file yang berisi fungsi input dan output standar

int main() {
    printf("Hello World!\n"); // Menampilkan teks ke layar dan berpindah ke baris baru
    return 0; // Mengembalikan nilai 0 (menandakan program selesai tanpa kesalahan)
}

// Filename: hello_world.c
// Description: Basic example of displaying "Hello World!" on the screen in C
// Author: Farhan Arbi Utomo
// Date: October 23, 2025
```

---

## 🧠 Penjelasan Umum

Program ini merupakan **program pertama yang biasanya dipelajari** ketika seseorang mulai belajar bahasa pemrograman C.

Tujuannya sederhana, yaitu **menampilkan teks “Hello World!” pada layar**.
Namun, meskipun terlihat sederhana, program ini membantu memahami **struktur dasar program C**, seperti:

* Bagaimana program dimulai (`main()`),
* Bagaimana menampilkan teks (`printf()`), dan
* Bagaimana program diakhiri (`return 0;`).

---

## 📖 Penjabaran Baris Demi Baris

| **Baris** | **Kode**                    | **Penjelasan**                                                                                                                                                                                            |
| :-------: | :-------------------------- | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|    1–3    | `// ...`                    | Baris komentar. Tidak dijalankan oleh komputer, tetapi digunakan untuk memberikan keterangan atau dokumentasi dalam kode.                                                                                 |
|     5     | `#include <stdio.h>`        | Mengimpor *header file* standar bernama **stdio.h** (Standard Input Output Header). File ini berisi deklarasi fungsi seperti `printf()` dan `scanf()` yang digunakan untuk menampilkan dan menerima data. |
|     7     | `int main()`                | Mendefinisikan fungsi utama tempat program mulai dieksekusi. Semua program C **harus memiliki** fungsi `main()`.                                                                                          |
|     8     | `printf("Hello World!\n");` | Menampilkan teks *Hello World!* ke layar. Simbol `\n` digunakan untuk menambahkan baris baru setelah teks ditampilkan.                                                                                    |
|     9     | `return 0;`                 | Mengakhiri fungsi `main()` dan mengembalikan nilai 0, yang menandakan bahwa program berakhir tanpa kesalahan.                                                                                             |

---

## ⚙️ Struktur Dasar Program C

Setiap program dalam bahasa C memiliki **pola struktur yang mirip**, seperti berikut:

```c
#include <stdio.h>   // Header file (berisi fungsi input/output)

int main() {         // Fungsi utama
    // Kode program ditulis di sini
    return 0;        // Menandakan program selesai dengan sukses
}
```

### Penjelasan Struktur:

1. **Header File (`#include <stdio.h>`)**
   Digunakan untuk mengimpor pustaka standar agar fungsi-fungsi seperti `printf()` dapat digunakan.

2. **Fungsi Utama (`int main()`)**
   Tempat seluruh instruksi utama dijalankan. Program akan selalu memulai dari fungsi ini.

3. **Tubuh Fungsi (`{ ... }`)**
   Semua perintah program ditulis di antara tanda kurung kurawal `{}`.

4. **Pernyataan (`statement`)**
   Setiap instruksi diakhiri dengan titik koma `;`.

5. **`return 0;`**
   Digunakan untuk menandakan bahwa program telah berjalan dengan benar dan selesai.

---

## 🧩 Fungsi `printf()`

Fungsi `printf()` digunakan untuk menampilkan teks atau data ke layar.

**Bentuk umum:**

```c
printf("teks yang ingin ditampilkan");
```

**Contoh penggunaan:**

```c
printf("Selamat datang di dunia C!\n");
```

Hasil di layar:

```mathematica
Selamat datang di dunia C!
```

---

## 💡 Fun Fact

🔹 Kalimat **“Hello, World!”** pertama kali digunakan oleh **Brian Kernighan** pada tahun **1972**,
ketika ia menulis contoh program di buku *The C Programming Language*.

🔹 Hingga kini, hampir semua bahasa pemrograman di dunia menggunakan contoh serupa sebagai **tradisi pembuka**
bagi para pemula untuk mengenal struktur dasar pemrograman.

---

## ✅ Hasil Eksekusi Program

```nginx
Hello World!
```

---

## ⚠️ Kesalahan Umum Pemula

1. **Lupa menambahkan titik koma `;`** di akhir perintah `printf()`.
   ➤ Akibatnya: program akan menampilkan pesan *syntax error*.

2. **Tidak menulis tanda kurung `{}` dengan benar.**
   ➤ Setiap blok kode harus dibuka dengan `{` dan ditutup dengan `}`.

3. **Tidak menggunakan tanda petik ganda `"` dengan benar.**
   ➤ String pada C harus berada di dalam tanda petik ganda, misalnya `"Hello"`.

---

## 🚀 Kesimpulan

Melalui program **Hello World**, kita telah mempelajari:

* Struktur dasar program dalam bahasa C (`#include`, `main()`, `return`),
* Penggunaan fungsi `printf()` untuk menampilkan teks,
* Serta pentingnya tanda kurung, titik koma, dan komentar.

Meski terlihat sederhana, konsep ini merupakan **pondasi utama** dari seluruh program yang akan dibuat selanjutnya.

---

← [Pendahuluan](readme.md) | [Bab 2: Input dan Output](input_output.md) →

---

Apakah kamu mau aku lanjutkan bab **3 (Variabel dan Tipe Data)** nanti dengan format **lengkap seperti ini** juga (lengkap, rapi, baku, dan mudah dipahami)?
