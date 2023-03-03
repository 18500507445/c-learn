#include <stdio.h>

/**
 * 水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身。例如：1^3 + 5^3+ 3^3 = 153。”
 * @return
 */
int main() {

    int num = 10;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            for (int k = 0; k < num; k++) {
                int right = i * 100 + j * 10 + k;
                int left = i * i * i + j * j * j + k * k * k;
                if (left < 1000 && right == left && i != 0) {
                    printf("i = %d，j = %d，k = %d\n", i, j, k);
                }
            }
        }
    }

    for (int i = 100; i < 1000; i++) {
        int a = i / 100, b = i / 10 % 10, c = i % 10;
        if (a * a * a + b * b * b + c * c * c == i) {
            printf("a = %d，b = %d，c = %d\n", a, b, c);
        }
    }


}