#include <stdio.h>

/**
 * 99乘法表
 * @return
 */
int main() {

    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < 10; ++j) {
            if (i < j) {
                break;
            }
            printf("%d x %d = %d ", i, j, i * j);
        }
        printf("\n");
    }


}