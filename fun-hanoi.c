#include <stdio.h>


void move(char start, char end, int n) {
    printf("第%d个圆盘：%c --> %c\n", n, start, end);
}

/**
 *
 * @param a 存放圆盘初始柱子
 * @param b 中间柱子
 * @param c 目标柱子
 * @param n 圆盘数量
 */
void hanoi(char a, char b, char c, int n) {
    if (1 == n) {
        move(a, c, 1);
    } else {
        //n-1个圆盘，从a移动到b，c作为中间柱子
        hanoi(a, c, b, n - 1);
        move(a, c, n);
        //n-1个圆盘，从b移动到c，a作为中间柱子
        hanoi(b, a, c, n - 1);
    }
}

/*
 * 汉诺塔
 */
int main() {
    hanoi('A', 'B', 'C', 3);
}
