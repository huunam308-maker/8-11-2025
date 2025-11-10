#include <stdio.h>

void hoanDoi(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    printf("Nhap a, b: ");
    scanf("%d%d", &a, &b);

    hoanDoi(&a, &b);

    printf("Sau khi hoan doi: a = %d, b = %d\n", a, b);
    return 0;
}
