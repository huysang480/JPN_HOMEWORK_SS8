#include <stdio.h>
int main() {
    int n;
    printf("Nhap v�o mot so nguy�n: ");
    scanf("%d", &n);
    int mang[n][n];
    printf("Nhap c�c phan tu cho mang %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }
    printf("\nMa tran vu�ng %dx%d l�:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}

