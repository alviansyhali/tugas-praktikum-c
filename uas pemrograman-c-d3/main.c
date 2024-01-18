#include <stdio.h>
#include <unistd.h>

void motorPembukaKlep(const char *nama_klep, int waktu) {
    printf("Motor pembuka klep %s aktif selama %d menit.\n", nama_klep, waktu);
    sleep(waktu * 60);
}


void motorListrikUtama(int kecepatan, int waktu) {
    printf("Motor listrik utama berputar dengan kecepatan %d rpm selama %d menit.\n", kecepatan, waktu);
    sleep(waktu * 60);
}


void cuciBerdasarkanKekeruhan(int kekeruhan, int *kecepatan_motor, int *waktu_pembersihan) {
    int level_kekeruhan[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

    for (int i = 0; i < sizeof(level_kekeruhan) / sizeof(level_kekeruhan[0]); i++) {
        if (kekeruhan <= level_kekeruhan[i]) {
            *kecepatan_motor = (i + 1) * 1000;
            *waktu_pembersihan = 60;
            break;
        }
    }
}

int main() {
    int kekeruhan, kecepatan_motor, waktu_pembersihan;

    printf("Start ditekan.\n");

    motorPembukaKlep("pengisian air", 2);

    printf("Masukkan nilai level kekeruhan air: ");
    scanf("%d", &kekeruhan);

    cuciBerdasarkanKekeruhan(kekeruhan, &kecepatan_motor, &waktu_pembersihan);

    motorListrikUtama(kecepatan_motor, waktu_pembersihan);

    motorPembukaKlep("pembuangan air kotor", 2);

    motorListrikUtama(2000, 3);

    motorPembukaKlep("pengisian air", 2);

    motorListrikUtama(kecepatan_motor, waktu_pembersihan);

    motorPembukaKlep("pembuangan air kotor", 2);

    motorListrikUtama(2000, 3);

    printf("Pencucian selesai.\n");

    return 0;
}
