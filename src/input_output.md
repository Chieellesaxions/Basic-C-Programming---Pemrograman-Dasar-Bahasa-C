# 🧩 2. Input & Output — Interaksi Dasar dengan User


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
    printf("Masukkan nama kamu: ");   // Menampilkan teks ke layar (tanpa newline)

    // ======== INPUT (string) ========
    scanf("%49s", nama);  // Menerima input string dari user, disimpan ke variabel 'nama'
                          // %49s berarti maksimal 49 karakter agar tidak kelebihan kapasitas

    // ======== OUTPUT ========
    printf("Masukkan umur kamu: ");   // Menampilkan teks baru

    // ======== INPUT (integer) ========
    scanf("%d", &umur);   // Menerima input integer, disimpan ke variabel 'umur'
                          // Gunakan & (alamat) karena scanf butuh lokasi memori variabel

    // ======== OUTPUT (gabungan teks + variabel) ========
    printf("\nHalo %s! 👋\n", nama);      // Tampilkan nama yang diinput user
    printf("Umur kamu %d tahun ya!\n", umur); // Tampilkan umur yang diinput user

    return 0;   // Mengembalikan nilai 0 (menandakan program selesai dengan sukses)
}
```

## 🧠 Penjelasan Program

Program ini ngajarin dasar **interaksi antara user dan program** lewat dua fungsi penting:

* `printf()` → buat **nampilin teks ke layar**
* `scanf()` → buat **nerima input dari user**

Program bakal minta kamu masukin nama dan umur, lalu nampilin hasilnya lagi di layar.

---

## 📖 Penjabaran Baris Demi Baris

| **Baris** | **Kode**                           | **Penjelasan**                                                                                  |
| :-------: | :--------------------------------- | :---------------------------------------------------------------------------------------------- |
|     5     | `#include <stdio.h>`               | Mengimpor *header file* standar input/output. Diperlukan untuk `printf()` dan `scanf()`.        |
|     8     | `int umur;`                        | Deklarasi variabel bertipe integer untuk menyimpan umur.                                        |
|     9     | `char nama[50];`                   | Membuat array karakter untuk menyimpan nama (maksimal 49 karakter + 1 null terminator).         |
|     12    | `printf("Masukkan nama kamu: ");`  | Menampilkan pesan agar user memasukkan nama.                                                    |
|     15    | `scanf("%49s", nama);`             | Membaca input berupa string dari user dan menyimpannya ke variabel `nama`.                      |
|     19    | `printf("Masukkan umur kamu: ");`  | Menampilkan pesan agar user memasukkan umur.                                                    |
|     22    | `scanf("%d", &umur);`              | Membaca input berupa integer dan menyimpannya ke `umur`. Gunakan `&` untuk ambil alamat memori. |
|   26–27   | `printf("\nHalo %s! 👋\n", nama);` | Menampilkan kembali nama dan umur yang sudah dimasukkan user.                                   |
|     29    | `return 0;`                        | Mengakhiri fungsi `main` dan menandakan program berjalan sukses.                                |

---

## ⚙️ Konsep Penting

Setiap kali pakai `scanf()` atau `printf()`, kita butuh *format specifier* biar data yang ditangani sesuai tipe-nya:

| **Simbol** | **Tipe Data**                    | **Contoh**                 |
| :--------: | :------------------------------- | :------------------------- |
|    `%s`    | String (teks)                    | `"Farhan"`                 |
|    `%d`    | Integer (bilangan bulat)         | `19`                       |
|     `&`    | Alamat variabel (wajib di scanf) | `&umur`                    |
|    `\n`    | Baris baru (newline)             | pindah ke baris berikutnya |

---

## 💡 Fun Fact

🔸 Fungsi `scanf()` berasal dari kata **scan formatted**, artinya membaca input dengan format tertentu.
🔸 Banyak pemula lupa nambah `&` di depan variabel waktu pakai `scanf()`, hasilnya input gak kebaca 😅

---

✅ **Output Program**

```yaml
Masukkan nama kamu: Farhan
Masukkan umur kamu: 19

Halo Farhan! 👋
Umur kamu 19 tahun ya!
```

---

## 🚀 Kesimpulan

Di bab ini lo udah belajar gimana caranya program bisa **berkomunikasi dua arah** sama user.

* Gunakan `printf()` buat output
* Gunakan `scanf()` buat input
* Pahami format data dan simbol `%`

Next : [Variabel dan Tipe Data](/Variabel-Tipe-Data.md)

---

