#include <stdio.h>

/**
 * C语言 指针
 * @return
 */

void swap(int *, int *);


/**
 * 指针类型需要与变量类型相同，且后面需要添加一个*符号(不是乘法运算)，表示的是类型的指针
 * &代表的是取地址的操作(不是位与运算)，拿到a的地址
 */
void pointer() {
    int a = 10;
    int *p = &a;
    printf("a在内存中的地址为: %p，值为：%d\n", p, *p);
    *p = 666;
    printf("修改后的值: %d\n", *p);
}

/**
 * @return
 */
int main() {

    pointer();

    int a = 10, b = 20;
    swap(&a, &b);
    printf("a与b交换后的结果：a = %d,b = %d\n", a, b);

}

/**
 * a和b交换
 * @param a
 * @param b
 */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

