#include <stdio.h>
int main() {
    int mang[4][4] = {
        {1, 2, 3, 4},
        {12, 13, 14, 5},
        {11, 16, 15, 6},
        {10, 9, 8, 7}
    };
    int n = 4;
    int tong = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                tong += mang[i][j];
            }
        }
    }
    printf("Tong các phan tu trên ðuong biên cua ma tran là: %d\n", tong);

    return 0;
}

