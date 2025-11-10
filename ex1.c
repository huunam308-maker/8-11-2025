#include <stdio.h>

int main()
{
    int a, b;
    int *p;

    printf("Nhap mot gia tri: ");
    scanf("%d", &a);

    p = &a;

    printf("Dia chi cua a: %p\n", &a);
    printf("Gia tri cua a: %d\n", a);
    printf("Gia tri cua p: %p\n", p);
    printf("Gia tri p tro toi: %d\n", *p);

    printf("Nhap gia tri ban muon thay doi: ");
    scanf("%d", &b);
    *p = *p + b;
    printf("\nGia tri tai dia chi p sau khi thay doi = %d\n", a);

    *p = a + b;
    printf("Gia tri cua a sau khi thay doi: %d\n", a);

    return 0;
}
