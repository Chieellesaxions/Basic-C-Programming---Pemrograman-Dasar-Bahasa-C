#  🧩 3. Variabel dan Tipe Data — Pondasi Logika Pemrograman

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

    // Output nilai variabel ke layar
    printf("Nama: %s\n", nama);
    printf("Inisial: %c\n", inisial);
    printf("Umur: %d tahun\n", umur);
    printf("Tinggi badan: %.1f cm\n", tinggi);

    return 0; // Mengakhiri program
}
```

---

## 🧠 Penjelasan Program

Program ini ngenalin **cara menyimpan data di memori** pakai variabel dengan tipe data yang berbeda-beda.

Tiap tipe data punya fungsi dan format sendiri waktu ditampilkan ke layar.

---

## 📖 Penjabaran Baris Demi Baris

| **Baris** | **Kode**                    | **Penjelasan**                                              |
| :-------: | :-------------------------- | :---------------------------------------------------------- |
|     5     | `#include <stdio.h>`        | Mengimpor library standar input/output.                     |
|     8     | `int umur = 19;`            | Menyimpan angka bulat (integer) ke variabel `umur`.         |
|     9     | `float tinggi = 170.5;`     | Menyimpan angka desimal ke variabel `tinggi`.               |
|     10    | `char inisial = 'F';`       | Menyimpan satu karakter (huruf, angka, simbol).             |
|     11    | `char nama[50] = "Farhan";` | Menyimpan string (teks) ke dalam array karakter.            |
|   14–17   | `printf(...)`               | Menampilkan isi variabel dengan format sesuai tipe datanya. |
|     19    | `return 0;`                 | Mengakhiri fungsi utama `main()`.                           |

---

## ⚙️ Tipe Data Umum dalam Bahasa C

| **Tipe Data** | **Format Specifier** | **Contoh Nilai**    | **Keterangan**                               |
| :------------ | :------------------- | :------------------ | :------------------------------------------- |
| `int`         | `%d`                 | `10`, `-5`          | Menyimpan bilangan bulat                     |
| `float`       | `%f`                 | `3.14`, `-2.5`      | Menyimpan bilangan desimal (presisi tunggal) |
| `double`      | `%lf`                | `3.141592`          | Bilangan desimal presisi ganda               |
| `char`        | `%c`                 | `'A'`, `'9'`, `'#'` | Menyimpan satu karakter                      |
| `char[]`      | `%s`                 | `"Farhan"`          | String (kumpulan karakter)                   |

---

## 💡 Catatan Penting

🔹 Variabel harus **dideklarasikan sebelum digunakan**.

🔹 Nama variabel **tidak boleh mengandung spasi**, diawali huruf, dan *case-sensitive*.

🔹 Gunakan format specifier yang sesuai saat menampilkan data dengan `printf()`.

🔹 Untuk angka desimal, lo bisa atur jumlah digit setelah koma, misalnya:

```c
printf("%.2f", tinggi); // tampilkan dua angka di belakang koma
```

---

✅ **Output Program**

```yaml
Nama         : Farhan
Inisial      : F
Umur         : 19 tahun
Tinggi badan : 170.5 cm
```

---

## 🚀 Kesimpulan

Dari bab ini lo udah paham dasar banget:

* Cara **mendeklarasikan variabel**
* Perbedaan **tipe data**
* Cara **menampilkan nilai variabel ke layar**


---
