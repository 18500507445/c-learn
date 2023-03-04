#include <stdio.h>

/**
 * C语言 指针
 * @return
 */

void swap(int, int);


/**
 * 指针类型需要与变量类型相同，且后面需要添加一个*符号(不是乘法运算)，表示的是类型的指针
 * &代表的是取地址的操作(不是位与运算)，拿到a的地址
 */
void pointer() {
    int a = 10;
    int *p = &a;
    printf("a在内存中的地址为: %p，值为：%d", p, *p);
}

/**
 * ab作用域不同，所以这里打印的还是a = 10，b = 20
 * @return
 */
int main() {
    int a = 10, b = 20;
    swap(a, b);
//    printf("a = %d,b = %d", a, b);

    pointer();
}

/**
 * a和b进行交换
 * @param a
 * @param b
 */
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

