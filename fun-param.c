#include <stdio.h>

int sum(int, int);

/**
 * 方法的传参和返回
 * @return
 */
int main() {
    int i = sum(1, 2);
    printf("sum = %d\n",  i);
}

int sum(int a, int b) {
    return a + b;
}
