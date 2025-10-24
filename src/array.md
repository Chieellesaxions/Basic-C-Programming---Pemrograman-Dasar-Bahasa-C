
# 📦 6. Array — Kumpulan Data dalam Satu Variabel

```c
// Filename: array.c
// Description: Contoh penggunaan array 1 dimensi dalam bahasa C
// Author: Farhan Arbi Utomo
// Date: 23 Oct 2025

#include <stdio.h>  // Header standar untuk input/output

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
        scanf("%d", &angka[i]);  // Simpan input user ke posisi ke-i
    }

    // ===============================
    // ======== OUTPUT DATA ==========
    // ===============================

    printf("\nData yang kamu masukkan:\n");
    for (int i = 0; i < 5; i++) {
        printf("Indeks %d = %d\n", i, angka[i]);  // Tampilkan isi array
    }

    // ===============================
    // ======== PROSES TAMBAHAN ======
    // ===============================

    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += angka[i];  // Menjumlahkan semua elemen array
    }

    float rata = total / 5.0;  // Hitung rata-rata (pakai float biar hasil desimal)

    printf("\nTotal: %d\n", total);
    printf("Rata-rata: %.2f\n", rata);  // %.2f = tampilkan 2 angka di belakang koma

    return 0;  // Selesai
}
```

---

## 🧠 Penjelasan Program

Program ini mengenalkan **array 1 dimensi**, yaitu variabel yang bisa menyimpan **banyak nilai dengan tipe data yang sama**.
Daripada bikin banyak variabel (`a1, a2, a3, ...`), cukup pakai satu nama aja (`angka[]`) dan bedakan lewat **indeks**.

---

## 📖 Penjabaran Baris Demi Baris

| **Baris** | **Kode**                              | **Penjelasan**                                            |
| :-------: | :------------------------------------ | :-------------------------------------------------------- |
|    1–5    | `// ...`                              | Komentar pembuka yang berisi info file                    |
|     7     | `#include <stdio.h>`                  | Mengimpor header standar input/output                     |
|     10    | `int angka[5];`                       | Deklarasi array berisi 5 elemen bertipe integer           |
|   15–19   | `for (int i = 0; i < 5; i++) { ... }` | Perulangan untuk menerima input 5 kali                    |
|     17    | `scanf("%d", &angka[i]);`             | Menyimpan nilai yang dimasukkan user ke elemen array ke-i |
|   23–27   | `for (int i = 0; i < 5; i++)`         | Menampilkan kembali nilai yang sudah disimpan             |
|   31–33   | `total += angka[i];`                  | Menjumlahkan seluruh nilai dalam array                    |
|     35    | `float rata = total / 5.0;`           | Menghitung rata-rata dengan hasil desimal                 |
|   38–39   | `printf...`                           | Menampilkan total dan rata-rata ke layar                  |

---

## ✅ Contoh Output Program

```yaml
Masukkan 5 angka:
Angka ke-1: 10
Angka ke-2: 20
Angka ke-3: 30
Angka ke-4: 40
Angka ke-5: 50

Data yang kamu masukkan:
Indeks 0 = 10
Indeks 1 = 20
Indeks 2 = 30
Indeks 3 = 40
Indeks 4 = 50

Total: 150
Rata-rata: 30.00
```

---

## ⚙️ Struktur Umum Array di C

```c
tipe_data nama_array[jumlah_elemen];
```

Contoh:

```c
int nilai[3];      // Array berisi 3 integer
float suhu[10];    // Array berisi 10 bilangan desimal
char huruf[5];     // Array berisi 5 karakter
```

---

## 💡 Tips

* Indeks array **selalu mulai dari 0**, bukan 1!
* Hati-hati jangan akses `angka[5]` kalau array cuma punya 5 elemen — bakal error.
* Kalau mau langsung isi tanpa input:

  ```c
  int angka[5] = {10, 20, 30, 40, 50};
  ```

---

## 🚀 Kesimpulan

Dari bab ini kamu sudah belajar:

* Konsep **array 1 dimensi**
* Cara **input dan output** data dari array
* Cara **menghitung total dan rata-rata**
* Kenapa array penting buat nyimpen data banyak secara efisien


