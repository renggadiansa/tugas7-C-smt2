#include <stdio.h>
#include <string.h>

void reverseSentence(char sentence[], int start, int end) {
    char temp;
    if (start >= end)
        return;
    else {
        temp = sentence[start];
        sentence[start] = sentence[end];
        sentence[end] = temp;
        reverseSentence(sentence, start + 1, end - 1);
    }
}

int soal3() {
    char sentence[100];
    printf("Masukkan kalimat: ");

    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    int length = strlen(sentence);
    reverseSentence(sentence, 0, length - 1);
    printf("Kalimat setelah dibalik: %s\n", sentence);
    return 0;
}
