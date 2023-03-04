#include "stdio.h"


/**
 * 多级指针，可以套娃
 * @return
 */
int main() {
    int a = 10;

    //指向普通变量的指针
    int *p = &a;

    /**
     * 因为现在要指向一个int *类型的变量，所以类型为int* 再加一个*
     * 指向指针的指针（二级指针）
     */
    int **pp = &p;

    //指向指针的指针的指针（三级指针）
    int ***ppp = &pp;

    //使用一次*表示二级指针指向的指针变量，继续使用一次*会继续解析成指针变量所指的普通变量
    printf("p = %p, a = %d\n", *pp, **pp);

}