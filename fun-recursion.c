#include <stdio.h>

/**
 * 递归它看起来就好像先走到底部，然后拿到问题的钥匙后追捕返回的一个过程，
 * 并在返回的途中不断地进行计算最后得到结果
 * @param n
 * @return
 */
int test(int n) {
    if (n == 1) {
        return 1;
    }
    return test(n - 1) * n;
}

/*
 * 递归调用
 */
int main() {
    printf("%d\n", test(5));
}
