#include <stdio.h>
#include <time.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

unsigned long long permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

unsigned long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int soal5() {
    int n, r;
    time_t t1, t2;
    long int computation_time;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    printf("Masukkan nilai r: ");
    scanf("%d", &r);

    time(&t1);
    unsigned long long perm = permutation(n, r);
    time(&t2);
    computation_time = difftime(t2, t1);
    printf("Permutasi (n P r) dari %d dan %d adalah: %llu\n", n, r, perm);
    printf("Waktu komputasi untuk permutasi: %ld detik\n", computation_time);

    time(&t1);
    unsigned long long comb = combination(n, r);
    time(&t2);
    computation_time = difftime(t2, t1);
    printf("Kombinasi (n C r) dari %d dan %d adalah: %llu\n", n, r, comb);
    printf("Waktu komputasi untuk kombinasi: %ld detik\n", computation_time);

    return 0;
}
