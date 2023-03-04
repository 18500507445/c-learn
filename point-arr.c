#include "stdio.h"

/**
 * 指针与数组
 * @return
 */
int main() {

    char str[] = "Hello World";

    char *p = str;

    printf("*p：%c\n", *p);
    printf("p：%p\n", p);

    printf("*(p + 1)：%c\n", *(p + 1));
    printf("p + 1：%p\n", p + 1);
    printf("*p + 1：%c\n", *p + 1);
    printf("*(str + 1)：%c\n", *(str + 1));

    printf("str：%s\n", str);

    printf("p[1]：%c\n", p[1]);
    printf("str[1]：%c\n", str[1]);

}

