#include <stdio.h>

/*
 * 定义函数原型，因为C语言是从上往下的，所以如果要在下面的主函数中书用这个函数，一定要定义在它上面
 */
void test(void);

int main() {
    test();
    printf("我是main函数\n");
}

/**
 * 函数具体定义
 *
 * 原型和定义类似于Java中的接口和实现类
 */
void test(void) {
    printf("我是测试函数\n");
}