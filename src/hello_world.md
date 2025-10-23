# 🧩 1. Hello World — Program Pertama
```c


// Program: hello_world.c
// Description: Display "Hello World!" on the screen
// Created by: Farhan Arbi Utomo

#include <stdio.h> // Header file untuk fungsi input dan output

int main() {
    printf("Hello World!\n"); // Menampilkan teks ke layar (tanpa newline)
    return 0; // Mengembalikan nilai 0 (menandakan program selesai dengan sukses)
}

// Filename: hello_world.c
// Description: Basic example of Display "Hello World!" on the screen in C
// Author: Farhan Arbi Utomo
// Date: October 23, 2025
```
## 🧠 Penjelasan Program

Program ini adalah program pertama dalam bahasa C.

Tujuannya sederhana: menampilkan teks "Hello World!" ke layar — tapi dari sini, lo udah ngerti struktur dasar program C 😎

## 📖 Penjabaran Baris Demi Baris
| **Baris** | **Kode**                    | **Penjelasan**                                                                                              |
| :-------: | :-------------------------- | :---------------------------------------------------------------------------------------------------------- |
|    1–3    | `// ...`                    | Komentar (tidak dijalankan oleh komputer). Fungsinya buat memberi informasi atau dokumentasi di dalam kode. |
|     5     | `#include <stdio.h>`        | Mengimpor *header file* standar input/output. Ini wajib kalau mau pakai fungsi `printf()`.                  |
|     7     | `int main()`                | Fungsi utama — di sinilah program mulai dijalankan pertama kali.                                            |
|     8     | `printf("Hello World!\n");` | Menampilkan teks "Hello World!" di layar, lalu `\n` membuat baris baru.                                     |
|     9     | `return 0;`                 | Mengakhiri fungsi `main` dan memberi tahu sistem bahwa program berjalan sukses.                             |

## ⚙️ Struktur Dasar Program C

Setiap program dalam bahasa C biasanya punya struktur kayak gini:
```c
#include <stdio.h>   // Header file (library)

int main() {         // Fungsi utama
    // kode program di sini
    return 0;        // Akhiri program
}
```
## 💡 Fun Fact

🔸 “Hello, World!” pertama kali digunakan pada tahun 1972 oleh Brian Kernighan, salah satu pencipta bahasa C.
🔸 Sampai sekarang, ini jadi tradisi global setiap orang belajar bahasa baru.

✅ Output Program
Hello World!

## 🚀 Kesimpulan

Dengan cuma beberapa baris, lo udah berhasil bikin program pertama yang:

- Punya struktur lengkap (#include, main, return)

- Menghasilkan output ke layar

- Siap dikembangkan ke tahap berikutnya

