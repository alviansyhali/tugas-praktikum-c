#include <stdio.h>

int main() {
    int bilangan;

    // Input bilangan bulat positif
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Periksa apakah bilangan ganjil atau genap
    if (bilangan > 0) {
        if (bilangan % 2 == 0) {
            printf("GENAP\n");
        } else {
            printf("GANJIL\n");
        }
    } else {
        printf("Masukkan bilangan bulat positif.\n");
    }

    return 0;
}
