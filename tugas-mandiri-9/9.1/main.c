#include <stdio.h>

int sequentialSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 4, 18, 5, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    int index;

    printf("Masukkan Bilangan Integer = ");
    scanf("%d", &target);

    index = sequentialSearch(arr, size, target);

    if (index != -1) {
        printf("ADA\nLokasi bilangan yang sama: %d\n", index);
    } else {
        printf("\nTIDAK DITEMUKAN");
    }

    return 0;
}\
