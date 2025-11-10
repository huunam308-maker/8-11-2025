#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int freq[256] = {0};

    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++)
        freq[(unsigned char)s[i]]++;

    printf("Tan suat cac ky tu:\n");
    for (int i = 0; i < 256; i++)
        if (freq[i] > 0 && i != '\n')
            printf("%c : %d\n", i, freq[i]);

    return 0;
}
