
# 🧩 2. Input & Output — Interaksi Dasar dengan Pengguna

```c
// Filename: input_output.c
// Description: Contoh dasar input dan output pada bahasa C
// Author: Farhan Arbi Utomo
// Date: 23 Oct 2025

#include <stdio.h>  // Header file untuk fungsi input dan output

int main() {
    int umur;          // Variabel untuk menyimpan umur (bilangan bulat)
    char nama[50];     // Array karakter untuk menyimpan nama (maksimal 49 huruf + '\0')

    // ======== OUTPUT ========
    printf("Masukkan nama Anda: ");   // Menampilkan teks ke layar tanpa berpindah baris

    // ======== INPUT (string) ========
    scanf("%49s", nama);  // Membaca input string dari pengguna dan menyimpannya ke variabel 'nama'
                          // %49s berarti maksimal 49 karakter agar tidak melebihi kapasitas

    // ======== OUTPUT ========
    printf("Masukkan umur Anda: ");   // Menampilkan teks baru di layar

    // ======== INPUT (integer) ========
    scanf("%d", &umur);   // Membaca input integer dan menyimpannya ke variabel 'umur'
                          // Tanda '&' digunakan untuk mengambil alamat memori variabel

    // ======== OUTPUT (gabungan teks + variabel) ========
    printf("\nHalo %s! 👋\n", nama);          // Menampilkan nama yang dimasukkan pengguna
    printf("Umur Anda %d tahun.\n", umur);   // Menampilkan umur yang dimasukkan pengguna

    return 0;   // Menandakan program berakhir dengan sukses
}
```

---

## 🧠 Penjelasan Program

Program di atas memperkenalkan **interaksi dasar antara pengguna dan program** menggunakan dua fungsi utama dalam bahasa C, yaitu:

* `printf()` — digunakan untuk **menampilkan informasi atau teks ke layar.**
* `scanf()` — digunakan untuk **membaca input dari pengguna.**

Pada program ini, pengguna diminta untuk memasukkan **nama** dan **umur**, kemudian program akan menampilkan kembali hasil input tersebut.

---

## 📖 Penjabaran Baris Demi Baris

| **Baris** | **Kode**                           | **Penjelasan**                                                                                     |
| :-------: | :--------------------------------- | :------------------------------------------------------------------------------------------------- |
|     5     | `#include <stdio.h>`               | Mengimpor *header file* standar input/output agar fungsi `printf()` dan `scanf()` dapat digunakan. |
|     8     | `int umur;`                        | Deklarasi variabel bertipe *integer* untuk menyimpan umur.                                         |
|     9     | `char nama[50];`                   | Membuat array karakter untuk menyimpan nama (maksimal 49 karakter + 1 null terminator).            |
|     12    | `printf("Masukkan nama Anda: ");`  | Menampilkan pesan agar pengguna memasukkan nama.                                                   |
|     15    | `scanf("%49s", nama);`             | Membaca input berupa string dari pengguna dan menyimpannya ke variabel `nama`.                     |
|     19    | `printf("Masukkan umur Anda: ");`  | Menampilkan pesan agar pengguna memasukkan umur.                                                   |
|     22    | `scanf("%d", &umur);`              | Membaca input berupa bilangan bulat dan menyimpannya ke variabel `umur`.                           |
|   26–27   | `printf("\nHalo %s! 👋\n", nama);` | Menampilkan kembali nama dan umur yang telah dimasukkan pengguna.                                  |
|     29    | `return 0;`                        | Mengakhiri fungsi `main()` dan menandakan bahwa program berjalan dengan sukses.                    |

---

## ⚙️ Konsep Penting: Format Specifier

Dalam fungsi `scanf()` dan `printf()`, digunakan **format specifier** untuk menyesuaikan tipe data yang diproses.

| **Simbol** | **Tipe Data**                           | **Contoh Nilai** | **Keterangan**                                     |
| :--------: | :-------------------------------------- | :--------------- | :------------------------------------------------- |
|    `%s`    | String (teks)                           | `"Farhan"`       | Untuk membaca atau menampilkan teks.               |
|    `%d`    | Integer (bilangan bulat)                | `19`             | Untuk membaca atau menampilkan bilangan bulat.     |
|     `&`    | Alamat variabel (hanya untuk `scanf()`) | `&umur`          | Menunjukkan lokasi penyimpanan variabel di memori. |
|    `\n`    | Baris baru (*newline*)                  | —                | Memindahkan kursor ke baris berikutnya.            |

---

## 💡 Fakta Menarik

🔹 Nama fungsi `scanf()` berasal dari singkatan *scan formatted*, yang berarti “membaca data dengan format tertentu.”
🔹 Kesalahan umum pemula adalah **lupa menambahkan tanda `&`** pada variabel saat menggunakan `scanf()`. Akibatnya, program tidak dapat menyimpan nilai input dengan benar.

---

## ✅ Output Program

```yaml
Masukkan nama Anda: Farhan
Masukkan umur Anda: 19

Halo Farhan! 👋
Umur Anda 19 tahun.
```

---

## 🚀 Kesimpulan

Pada bab ini, Anda telah mempelajari dasar komunikasi antara program dan pengguna.
Dengan memahami fungsi **input dan output**, Anda dapat mulai membuat program yang bersifat interaktif.

Ringkasan:

* `printf()` digunakan untuk menampilkan data ke layar.
* `scanf()` digunakan untuk membaca data dari pengguna.
* Gunakan **format specifier** yang sesuai agar data terbaca dan tampil dengan benar.

---

← [Bab Sebelumnya](hello_world.md) | [Bab Selanjutnya](Variabel-Tipe-Data.md) →
