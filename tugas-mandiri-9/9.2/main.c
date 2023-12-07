#include <stdio.h>

int main() {
  // Deklarasikan array
  char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A','L','A'};

  // Deklarasikan variabel
  char cari;
  int i, j, jumlah = 0;

  // Input karakter yang akan dicari
  printf("Masukkan karakter yang akan dicari: ");
  scanf("%c", &cari);

  // Perulangan untuk memeriksa isi array
  for (i = 0; A[i] != '\0'; i++) {
    // Jika karakter ditemukan, tambahkan jumlah
    if (A[i] == cari) {
      jumlah++;
    }
  }

  // Cetak hasil
  if (jumlah > 0) {
    printf("Karakter %c ada di array sebanyak %d kali\n", cari, jumlah);
  } else {
    printf("Karakter %c tidak ada di array\n", cari);
  }

  return 0;
}
