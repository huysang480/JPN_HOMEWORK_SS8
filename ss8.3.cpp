#include <stdio.h>
int main() {
    int n;
    printf("Nhap vào mot so nguyên: ");
    scanf("%d", &n);
    int mang[n][n];
    printf("Nhap các phan tu cho mang %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }
    printf("\nMa tran vuông %dx%d là:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}

