#include "stdio.h"

/**
 * 指针与数组
 * @return
 */
int main() {

    char str[] = "Hello World";

    char *p = str;

    printf("%c\n", *(p + 1));
    printf("%c\n", *(str + 1));
    printf("%c\n", p[1]);
    printf("%c\n", str[1]);


    //二维数组
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}};
    int * p = arr[0];  //因为是二维数组，注意这里要指向第一个元素，来降一个维度才能正确给到指针
    //同理如果这里是arr[1]的话那么就表示指向二维数组中第二个数组的首元素
    printf("%d = %d", *(p + 4), arr[1][1]);   //实际上这两种访问形式都是一样的
}

