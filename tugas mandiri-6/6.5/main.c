#include <stdio.h>

int main() {
  float bunga = 0.02;
  float saldo = 1000000;
  float saldoAkhir;

  for (int i = 1; i <= 10; i++) {
    saldoAkhir = saldo * (1 + bunga);
    saldo = saldoAkhir;
  }

  printf("Saldo akhir setelah 10 bulan: %.2f\n", saldoAkhir);

  return 0;
}
