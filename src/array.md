
# 📦 6. Array — Kumpulan Data dalam Satu Variabel

```c
// Filename: array.c
// Description: Contoh penggunaan array satu dimensi dalam bahasa C
// Author: Farhan Arbi Utomo
// Date: October 23, 2025

#include <stdio.h>  // Header standar untuk input dan output

int main() {
    // ===============================
    // ======== DEKLARASI ARRAY ======
    // ===============================
    int angka[5];  // Membuat array dengan 5 elemen bertipe integer (indeks 0–4)

    // ===============================
    // ======== INPUT DATA ===========
    // ===============================
    printf("Masukkan 5 angka:\n");
    for (int i = 0; i < 5; i++) {
        printf("Angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);  // Menyimpan input pengguna ke elemen array ke-i
    }

    // ===============================
    // ======== OUTPUT DATA ==========
    // ===============================
    printf("\nData yang Anda masukkan:\n");
    for (int i = 0; i < 5; i++) {
        printf("Indeks %d = %d\n", i, angka[i]);  // Menampilkan isi array
    }

    // ===============================
    // ======== PROSES TAMBAHAN ======
    // ===============================
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += angka[i];  // Menjumlahkan seluruh elemen array
    }

    float rata = total / 5.0;  // Menghitung rata-rata (menggunakan float agar hasil desimal)

    printf("\nTotal: %d\n", total);
    printf("Rata-rata: %.2f\n", rata);  // %.2f = menampilkan 2 angka di belakang koma

    return 0;  // Mengembalikan nilai 0 menandakan program selesai dengan sukses
}
```

---

## 🧠 Penjelasan Umum

Program ini menjelaskan cara menggunakan **array satu dimensi** dalam bahasa C.
Array adalah sekumpulan elemen yang **memiliki tipe data yang sama** dan disimpan dalam satu nama variabel.
Setiap elemen di dalam array dapat diakses menggunakan **indeks** (nomor urut mulai dari 0).

Dengan array, kita dapat menyimpan banyak data sekaligus tanpa perlu mendeklarasikan banyak variabel satu per satu.
Misalnya, dibanding menulis:

```c
int a1, a2, a3, a4, a5;
```

lebih efisien menggunakan:

```c
int angka[5];
```

---

## 📖 Penjabaran Baris Demi Baris

| **Baris** | **Kode**                              | **Penjelasan**                                                                              |
| :-------: | :------------------------------------ | :------------------------------------------------------------------------------------------ |
|    1–5    | `// ...`                              | Komentar yang berisi keterangan file, penulis, dan tanggal pembuatan.                       |
|     7     | `#include <stdio.h>`                  | Mengimpor *header* standar untuk fungsi input dan output, seperti `printf()` dan `scanf()`. |
|     11    | `int angka[5];`                       | Mendeklarasikan array berisi 5 elemen bertipe `int` dengan indeks 0–4.                      |
|   16–20   | `for (int i = 0; i < 5; i++) { ... }` | Melakukan pengulangan untuk menerima 5 input angka dari pengguna.                           |
|     18    | `scanf("%d", &angka[i]);`             | Menyimpan nilai yang diinput ke elemen array sesuai urutan indeks.                          |
|   24–28   | `for (int i = 0; i < 5; i++)`         | Menampilkan kembali semua nilai yang telah disimpan dalam array.                            |
|   32–34   | `total += angka[i];`                  | Menjumlahkan seluruh nilai di dalam array untuk mendapatkan total keseluruhan.              |
|     36    | `float rata = total / 5.0;`           | Menghitung rata-rata dengan hasil bertipe desimal menggunakan `float`.                      |
|   39–40   | `printf(...)`                         | Menampilkan hasil total dan rata-rata ke layar.                                             |

---

## ✅ Contoh Hasil Eksekusi Program

```yaml
Masukkan 5 angka:
Angka ke-1: 10
Angka ke-2: 20
Angka ke-3: 30
Angka ke-4: 40
Angka ke-5: 50

Data yang Anda masukkan:
Indeks 0 = 10
Indeks 1 = 20
Indeks 2 = 30
Indeks 3 = 40
Indeks 4 = 50

Total: 150
Rata-rata: 30.00
```

---

## ⚙️ Struktur Umum Array dalam Bahasa C

Format umum deklarasi array adalah sebagai berikut:

```c
tipe_data nama_array[jumlah_elemen];
```

Contoh penggunaan:

```c
int nilai[3];      // Array berisi 3 bilangan bulat
float suhu[10];    // Array berisi 10 bilangan desimal
char huruf[5];     // Array berisi 5 karakter
```

---

## 💡 Tips Penting

* Indeks array **selalu dimulai dari 0**, bukan 1.
  Artinya, elemen pertama terletak pada `array[0]`, bukan `array[1]`.
* Jumlah elemen array **tidak boleh diakses melebihi batas**.
  Misalnya, jika array berisi 5 elemen (`array[0]`–`array[4]`), maka `array[5]` tidak valid.
* Array juga dapat diinisialisasi langsung tanpa perlu input pengguna:

  ```c
  int angka[5] = {10, 20, 30, 40, 50};
  ```

---

## 🚀 Kesimpulan

Melalui contoh ini, Anda telah memahami:

* Konsep dasar **array satu dimensi**
* Cara melakukan **input dan output** data menggunakan array
* Proses **menjumlahkan dan menghitung rata-rata** dari elemen array
* Pentingnya array untuk menyimpan dan mengelola kumpulan data dengan lebih efisien

---

← [Bab Sebelumnya](looping.md) | [Bab Selanjutnya](function.md) →

