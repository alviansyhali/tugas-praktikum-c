#include <stdio.h>

int main() {
    double celcius, fahrenheit, reamur;

    // Input suhu dalam Celcius
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%lf", &celcius);

    // Menghitung suhu dalam Fahrenheit dan Reamur
    fahrenheit = (celcius * 9/5) + 32;
    reamur = celcius * 4/5;

    // Menampilkan hasil
    printf("Suhu dalam Fahrenheit: %.2lf derajat\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2lf derajat\n", reamur);

    return 0;
}
