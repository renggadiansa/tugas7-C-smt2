#include <stdio.h>

int fpb(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return fpb(b, a % b);
    }
}

int soal6() {
    int bilangan1, bilangan2;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bilangan1);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bilangan2);

    int hasilFPB = fpb(bilangan1, bilangan2);

    printf("FPB dari %d dan %d adalah: %d\n", bilangan1, bilangan2, hasilFPB);

    return 0;
}
