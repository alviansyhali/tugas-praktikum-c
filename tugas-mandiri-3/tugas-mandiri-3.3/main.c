#include <stdio.h>
#include <math.h>

int main() {
    double sisi_alas, sisi_tinggi, sisi_miring;

    // Input panjang sisi alas dan tinggi
    printf("Masukkan panjang sisi alas segitiga (cm): ");
    scanf("%lf", &sisi_alas);
    printf("Masukkan panjang sisi tinggi segitiga (cm): ");
    scanf("%lf", &sisi_tinggi);

    // Menghitung sisi miring menggunakan rumus Pythagoras
    sisi_miring = sqrt(sisi_alas * sisi_alas + sisi_tinggi * sisi_tinggi);

    // Menampilkan hasil
    printf("Panjang sisi miring segitiga adalah: %.2lf cm\n", sisi_miring);

    return 0;
}
