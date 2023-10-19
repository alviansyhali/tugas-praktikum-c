#include <stdio.h>

int main() {
    int jam_masuk, jam_keluar, lama_bekerja;

    // Input jam masuk dan jam pulang
    printf("Jam masuk: ");
    scanf("%d", &jam_masuk);
    printf("Jam pulang: ");
    scanf("%d", &jam_keluar);

    // Menghitung lama bekerja
    lama_bekerja = jam_keluar - jam_masuk;

    // Menampilkan lama bekerja
    printf("Lama bekerja %d jam\n", lama_bekerja);

    return 0;
}
