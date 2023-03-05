#include "stdio.h"
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {  //参数为两个待比较的元素，返回值负数表示a比b小，正数表示a比b大，0表示相等
    //这里因为判断的是int所以需要先强制类型转换为int *指针
    int *x = (int *) a, *y = (int *) b;
    //其实直接返回a - b就完事了，因为如果a比b大的话算出来一定是正数，反之同理
    return *x - *y;
}

int main() {

    //现在有两个字符串，但是我们希望把他们拼接到一起，导入<string.h>
    char arr[20] = "Hello", *b = " World!";
    strcat(arr, b);
    printf("%s\n", arr);

    //使用cpy会直接将后面的字符串拷贝到前面的字符串数组中（同样需要前面装得下才行）
    char str[10], *c = "Hello";
    strcpy(str, c);
    printf("%s\n", str);

    //strcmp会比较两个字符串，并返回结果
    char *d = "AAA", *e = "AAB";
    int value = strcmp(d, e);
    printf("%d\n", value);

    //使用sqrt可以求出非负数的算术平方根（底层采用牛顿逼近法计算）
    int a = 2;
    double f = sqrt(a);
    printf("%lf\n", f);

    //使用pow可以快速计算乘方，这里求的是a的3次方
    double g = pow(a, 3);
    printf("%lf\n", g);

    //工具库已经为我们提供好了快速排序的实现函数，直接用
    int arrSort[] = {5, 2, 4, 0, 7, 3, 8, 1, 9, 6};
    //参数有点多，第一个是待排序数组，第二个是待排序的数量（一开始就是数组长度），第三个是元素大小，第四个是排序规则（我们提供函数实现）
    qsort(arrSort, 10, sizeof(int), compare);
    for (int i = 0; i < 10; ++i) {
        printf("%d ", arrSort[i]);
    }
}

