#include "stdio.h"

void print_numbers(int n) {
    if (n < 0) {
        return;
    } else {
        print_numbers(n - 1);
        printf("%d ", n);
    }
}

int soal2() {
    int n;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    print_numbers(n);

    return 0;
}
