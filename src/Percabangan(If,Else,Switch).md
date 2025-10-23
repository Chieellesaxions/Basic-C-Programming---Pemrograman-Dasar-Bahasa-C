
#  ⚖️ 4. Percabangan (If, Else, Switch) — Logika Keputusan dalam Program

```c
// Filename: percabangan.c
// Description: Contoh penggunaan struktur percabangan if, else, dan switch
// Author: Farhan Arbi Utomo
// Date: 23 Oct 2025

#include <stdio.h>

int main() {
    int nilai;

    printf("Masukkan nilai kamu (0-100): ");
    scanf("%d", &nilai);

    // Percabangan if - else if - else
    if (nilai >= 90) {
        printf("Nilai kamu A (Hebat banget!)\n");
    } else if (nilai >= 80) {
        printf("Nilai kamu B (Bagus, pertahankan!)\n");
    } else if (nilai >= 70) {
        printf("Nilai kamu C (Cukup, tapi bisa lebih baik)\n");
    } else if (nilai >= 60) {
        printf("Nilai kamu D (Perlu belajar lebih giat)\n");
    } else {
        printf("Nilai kamu E (Jangan menyerah, coba lagi!)\n");
    }

    // Percabangan switch
    char grade;
    printf("\nMasukkan huruf nilai kamu (A-E): ");
    scanf(" %c", &grade);

    switch (grade) {
        case 'A':
            printf("Luar biasa! Kamu sangat menguasai materi.\n");
            break;
        case 'B':
            printf("Kerja bagus! Masih ada ruang untuk berkembang.\n");
            break;
        case 'C':
            printf("Cukup, tapi perlu lebih fokus.\n");
            break;
        case 'D':
            printf("Harus lebih semangat belajar!\n");
            break;
        case 'E':
            printf("Jangan putus asa, terus belajar!\n");
            break;
        default:
            printf("Nilai tidak valid. Masukkan antara A sampai E.\n");
            break;
    }

    return 0;
}
```

---

## 🧠 Penjelasan Singkat

Percabangan memungkinkan program **mengambil keputusan** berdasarkan kondisi tertentu.

Kalau kondisinya **benar (true)** → blok kode tertentu dijalankan.

Kalau **salah (false)** → bisa lanjut ke kondisi lain atau ke bagian `else`.

---

## 📊 Struktur If-Else

Format umum:

```c
if (kondisi) {
    // blok kode jika kondisi benar
} else {
    // blok kode jika kondisi salah
}
```

Kondisi bisa berupa perbandingan:

| Operator | Arti                    | Contoh   |
| :------: | :---------------------- | :------- |
|   `==`   | sama dengan             | `x == 5` |
|   `!=`   | tidak sama dengan       | `x != 5` |
|    `>`   | lebih besar             | `x > 5`  |
|    `<`   | lebih kecil             | `x < 5`  |
|   `>=`   | lebih besar/sama dengan | `x >= 5` |
|   `<=`   | lebih kecil/sama dengan | `x <= 5` |

---

## 🧩 Struktur Switch-Case

Digunakan kalau ada **banyak kemungkinan nilai tunggal**, kayak `grade`, `menu`, atau `angka tertentu`.

Format:

```c
switch (variabel) {
    case nilai1:
        // aksi kalau variabel == nilai1
        break;
    case nilai2:
        // aksi kalau variabel == nilai2
        break;
    default:
        // aksi kalau tidak ada yang cocok
}
```

> ⚠️ Jangan lupa pakai `break;` di setiap `case`, biar program gak lanjut ke case berikutnya tanpa sengaja.

---

## ✅ Output Contoh

```yaml
Masukkan nilai kamu (0-100): 85
Nilai kamu B (Bagus, pertahankan!)

Masukkan huruf nilai kamu (A-E): B
Kerja bagus! Masih ada ruang untuk berkembang.
```

---

## 💡 Tips & Catatan

* Gunakan **if-else** kalau kamu butuh *range kondisi* (contoh: nilai 70–90).
* Gunakan **switch** kalau kamu tahu pasti semua nilai yang mungkin muncul (contoh: huruf A–E).
* Kondisi di C **harus menghasilkan nilai boolean** (true/false).
* Di C, nilai **0 dianggap false**, dan **selain 0 dianggap true**.

---

## 🚀 Kesimpulan

Di bab ini lo udah belajar:

* Konsep dasar percabangan (*decision making*)
* Struktur `if`, `else if`, `else`
* Struktur `switch-case`
* Kapan sebaiknya pakai yang mana


---

Mau aku lanjutin sekalian ke bab **Perulangan (For, While, Do-While)** biar buku lo lanjut next step?
