#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    int n = strlen(s);
    if (s[n-1] == '\n') s[n-1] = '\0'; 

    printf("Chuoi dao nguoc: ");
    for (int i = strlen(s)-1; i >= 0; i--)
        putchar(s[i]);

    return 0;
}
