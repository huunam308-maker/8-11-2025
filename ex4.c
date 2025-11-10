#include <stdio.h>

int laSoNguyenTo(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int a[100];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    printf("\n1. Max = %d", max);

    int min = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < min)
            min = a[i];
    printf("\n2. Min = %d", min);

    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    printf("\n3. Trung binh cong = %.2f", sum / n);

    printf("\n4. Cac so nguyen to trong mang: ");
    int demNT = 0;
    for (int i = 0; i < n; i++)
    {
        if (laSoNguyenTo(a[i]))
        {
            printf("%d ", a[i]);
            demNT++;
        }
    }
    if (demNT == 0)
        printf("Khong co so nguyen to nao.");
    else
        printf("\nTong cong co %d so nguyen to.", demNT);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("\n5. Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    int V, k;
    printf("\n\nNhap gia tri V va vi tri k muon chen: ");
    scanf("%d%d", &V, &k);
    if (k < 0 || k > n)
    {
        printf("Vi tri k khong hop le!\n");
    }
    else
    {
        for (int i = n; i > k; i--)
            a[i] = a[i - 1];
        a[k] = V;
        n++;
    }
    printf("Mang sau khi chen: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n\nNhap vi tri k muon xoa: ");
    scanf("%d", &k);
    if (k < 0 || k >= n)
    {
        printf("Vi tri k khong hop le!\n");
    }
    else
    {
        for (int i = k; i < n - 1; i++)
            a[i] = a[i + 1];
        n--;
    }
    printf("Mang sau khi xoa: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}
