#include <stdio.h>
#include <time.h>

int faktorialIterasi(int n);
int faktorialRekursi(int n);
int faktorialTail(int n, int hasil);
void pilihMetode();

int soal4() {
    do {
        pilihMetode();

        char pilihanKeluar;
        printf("Apakah Anda ingin keluar program? (y/n): ");
        scanf(" %c", &pilihanKeluar);

        if (pilihanKeluar == 'y' || pilihanKeluar == 'Y') {
            break;
        }
    } while (1);

    return 0;
}

int faktorialIterasi(int n) {
    if (n == 0) {
        return 1;
    } else {
        int hasil = 1;
        for (int i = 1; i <= n; i++) {
            hasil *= i;
        }
        return hasil;
    }
}

int faktorialRekursi(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorialRekursi(n - 1);
    }
}

int faktorialTail(int n, int hasil) {
    if (n == 0) {
        return hasil;
    } else {
        return faktorialTail(n - 1, n * hasil);
    }
}

void pilihMetode() {
    int pilihan;
    printf("Pilih metode untuk menghitung faktorial:\n");
    printf("1. Iterasi\n");
    printf("2. Rekursi\n");
    printf("3. Rekursi Tail\n");
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &pilihan);

    int n;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    clock_t start, end;
    double waktu;

    switch (pilihan) {
        case 1: {
            start = clock();
            int hasilIterasi = faktorialIterasi(n);
            end = clock();
            waktu = ((double)(end - start)) / CLOCKS_PER_SEC;
            printf("Faktorial %d dengan iterasi: %d (waktu: %lf detik)\n", n, hasilIterasi, waktu);
            break;
        }
        case 2: {
            start = clock();
            int hasilRekursi = faktorialRekursi(n);
            end = clock();
            waktu = ((double)(end - start)) / CLOCKS_PER_SEC;
            printf("Faktorial %d dengan rekursi: %d (waktu: %lf detik)\n", n, hasilRekursi, waktu);
            break;
        }
        case 3: {
            start = clock();
            int hasilTail = faktorialTail(n, 1);
            end = clock();
            waktu = ((double)(end - start)) / CLOCKS_PER_SEC;
            printf("Faktorial %d dengan rekursi tail: %d (waktu: %lf detik)\n", n, hasilTail, waktu);
            break;
        }
        default:
            printf("Pilihan tidak valid!\n");
    }
}
