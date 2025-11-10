#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);

    printf("Chuoi in hoa: ");
    for (int i = 0; s[i] != '\0'; i++)
        putchar(toupper(s[i]));

    printf("\nChuoi in thuong: ");
    for (int i = 0; s[i] != '\0'; i++)
        putchar(tolower(s[i]));

    return 0;
}
