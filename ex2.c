#include <stdio.h>

void tang10(int *p) {
    *p += 10;
}

int main() {
    int a;
    printf("Nhap a: ");
    scanf("%d", &a);

    tang10(&a);

    printf("Gia tri cua a sau khi tang 10: %d\n", a);
    return 0;
}
