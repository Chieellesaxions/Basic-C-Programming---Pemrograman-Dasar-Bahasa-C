

# 🧩 3. Variabel dan Tipe Data — Pondasi Logika Pemrograman

```c
// Filename: variabel_tipedata.c
// Description: Contoh dasar penggunaan variabel dan tipe data dalam bahasa C
// Author: Farhan Arbi Utomo
// Date: 23 Oct 2025

#include <stdio.h>  // Header file standar input/output

int main() {
    // Deklarasi variabel dengan berbagai tipe data
    int umur = 19;                 // Bilangan bulat (integer)
    float tinggi = 170.5;          // Bilangan desimal (floating point)
    char inisial = 'F';            // Karakter tunggal (char)
    char nama[50] = "Farhan";      // String (array karakter)

    // Menampilkan nilai variabel ke layar
    printf("Nama: %s\n", nama);
    printf("Inisial: %c\n", inisial);
    printf("Umur: %d tahun\n", umur);
    printf("Tinggi badan: %.1f cm\n", tinggi);

    return 0; // Mengakhiri program
}
```

---

## 🧠 Penjelasan Program

Program di atas memperkenalkan konsep dasar **variabel** dan **tipe data** dalam bahasa C.
Variabel berfungsi sebagai **wadah penyimpanan data di memori komputer**, sementara tipe data menentukan **jenis nilai** yang dapat disimpan dan **cara penggunaannya**.

Setiap tipe data memiliki karakteristik dan format yang berbeda saat digunakan di dalam program, terutama ketika ditampilkan dengan fungsi `printf()`.

---

## 📖 Penjabaran Baris Demi Baris

| **Baris** | **Kode**                    | **Penjelasan**                                                                      |
| :-------: | :-------------------------- | :---------------------------------------------------------------------------------- |
|     5     | `#include <stdio.h>`        | Mengimpor *header file* standar untuk fungsi input dan output seperti `printf()`.   |
|     8     | `int umur = 19;`            | Mendeklarasikan variabel `umur` bertipe *integer* untuk menyimpan bilangan bulat.   |
|     9     | `float tinggi = 170.5;`     | Mendeklarasikan variabel `tinggi` bertipe *float* untuk menyimpan bilangan desimal. |
|     10    | `char inisial = 'F';`       | Menyimpan satu karakter dalam variabel `inisial`.                                   |
|     11    | `char nama[50] = "Farhan";` | Menyimpan string atau teks dalam *array* karakter sepanjang 50 elemen.              |
|   14–17   | `printf(...)`               | Menampilkan nilai setiap variabel ke layar dengan format yang sesuai.               |
|     19    | `return 0;`                 | Menandakan program selesai dijalankan dengan sukses.                                |

---

## ⚙️ Jenis-Jenis Tipe Data dalam Bahasa C

| **Tipe Data** | **Format Specifier** | **Contoh Nilai** | **Keterangan**                                     |
| :------------ | :------------------- | :--------------- | :------------------------------------------------- |
| `int`         | `%d`                 | `10`, `-5`       | Menyimpan bilangan bulat positif atau negatif.     |
| `float`       | `%f`                 | `3.14`, `-2.5`   | Menyimpan bilangan desimal dengan presisi tunggal. |
| `double`      | `%lf`                | `3.141592`       | Menyimpan bilangan desimal dengan presisi ganda.   |
| `char`        | `%c`                 | `'A'`, `'9'`     | Menyimpan satu karakter saja.                      |
| `char[]`      | `%s`                 | `"Farhan"`       | Menyimpan kumpulan karakter (string).              |

---

## 💡 Catatan Penting

🔹 Variabel **harus dideklarasikan sebelum digunakan**.
🔹 Nama variabel **tidak boleh mengandung spasi**, harus diawali huruf, dan bersifat **case-sensitive** (misalnya `Nama` dan `nama` dianggap berbeda).
🔹 Gunakan **specifier format yang sesuai** ketika mencetak nilai menggunakan `printf()`.
🔹 Jumlah angka di belakang koma pada tipe `float` atau `double` dapat diatur dengan format seperti berikut:

```c
printf("%.2f", tinggi); // Menampilkan dua angka di belakang koma
```

---

## ✅ Output Program

```yaml
Nama         : Farhan
Inisial      : F
Umur         : 19 tahun
Tinggi badan : 170.5 cm
```

---

## 📚 Kesimpulan

Dari pembahasan ini, dapat disimpulkan bahwa:

1. Variabel berfungsi sebagai tempat penyimpanan nilai yang digunakan program.
2. Tipe data menentukan jenis nilai dan cara pemrosesannya.
3. Bahasa C menggunakan *format specifier* pada fungsi `printf()` untuk menampilkan data dengan benar.
4. Pemahaman tentang variabel dan tipe data adalah fondasi untuk memahami logika dan alur program yang lebih kompleks.

---

← [Bab 2 : Input & Output — Interaksi Dasar dengan Pengguna](input_output.md) | [Bab Selanjutnya](Percabangan(If,Else,Switch).md) →
