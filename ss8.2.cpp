#include <stdio.h>
int main() {
    int mang[] = {14, 9, 3, 0, 5};
    int n = sizeof(mang) / sizeof(mang[0]);
    int x, found = 0;
    printf("Nhap v�o mot phan tu: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (mang[i] == x) {
            printf("Vi tr� phan tu trong mang l�: %d\n", i);
            found = 1;
            break; 
        }
    }
    if (!found) {
        printf("Ph?n t? kh�ng t?n t?i trong m?ng.\n");
    }
    return 0;
}

