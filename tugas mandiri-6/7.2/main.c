#include <stdio.h>

int main() {
    int A[11];

    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};

    for (int i = 0; i < 11; i++) {
        A[i] = data[i];
    }

    printf("Data dalam array sesuai kondisi:\n");
    for (int i = 0; i < 11; i++) {
        if (A[i] == 12 || A[i] == 10 || A[i] == 2 || A[i] == 20) {
            printf("%d ", A[i]);
        }
    }

    return 0;
}
