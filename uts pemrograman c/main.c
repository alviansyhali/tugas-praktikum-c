#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Fungsi untuk menggerakkan motor utama dengan kecepatan tertentu
void putarMotorUtama(int kecepatan) {
    // Implementasikan kode untuk menggerakkan motor utama
    printf("Motor utama berputar dengan kecepatan %d rpm\n", kecepatan);
}

// Fungsi untuk menggerakkan motor pembuka atau penutup klep air
void kontrolKlepAir(int waktu) {
    // Implementasikan kode untuk mengontrol klep air
    printf("Klep air terbuka selama %d menit\n", waktu);
    sleep(waktu * 60); // Menggunakan sleep untuk simulasi waktu
}

int main() {
    int levelKekeruhan[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};
    int kecepatanMotor[] = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 2000};
    int waktuCuci[] = {60, 60, 60, 60, 60, 60, 60, 60, 3};

    // Step 1
    printf("Tombol Start ditekan\n");

    // Step 2
    kontrolKlepAir(2); // Motor pembuka klep pengisian air aktif selama 2 menit sampai air penuh

    // Step 3
    // Deteksi level kekeruhan air menggunakan sensor turbidimeter
    int levelTerdeteksi; // Dapatkan nilai dari sensor turbidimeter
    // Misalnya, kita asumsikan levelTerdeteksi adalah 18
    int i;
    for (i = 0; i < sizeof(levelKekeruhan) / sizeof(levelKekeruhan[0]); ++i) {
        if (levelTerdeteksi <= levelKekeruhan[i]) {
            putarMotorUtama(kecepatanMotor[i]);
            break;
        }
    }

    // Step 4
    printf("Motor utama berhenti pada pertengahan waktu\n");
    sleep(2); // Jeda selama 2 menit untuk membuang air kotor

    // Step 5
    kontrolKlepAir(2); // Motor pembuka klep pembuangan air kotor aktif selama 2 menit sampai air kotor habis

    // Step 6
    putarMotorUtama(2000); // Motor utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    printf("Motor utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit\n");
    sleep(3); // Jeda selama 3 menit untuk mengeringkan cucian

    // Step 7
    kontrolKlepAir(2); // Motor pembuka klep pengisian air aktif selama 2 menit sampai air penuh

    // Step 8
    // Lanjutkan putaran motor utama untuk sisa waktu mencuci
    printf("Motor utama berputar selama sisa waktu mencuci\n");

    // Step 9
    kontrolKlepAir(2); // Motor pembuka klep pembuangan air kotor aktif selama 2 menit sampai air habis

    // Step 10
    putarMotorUtama(2000); // Motor utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    printf("Motor utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit\n");

    return 0;
}
