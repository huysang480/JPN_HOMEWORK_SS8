#include <stdio.h>
int main() {
    int mang[1][1] = {1, 5, 9};
    int max = mang[0][0];
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            if (mang[i][j] > max) {
                max = mang[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang là: %d\n", max);

    return 0;
}

