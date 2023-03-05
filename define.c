#include "stdio.h"

//编译时，预处理进行宏替换，将PI全部替换成3.14....
#define PI 3.1415926

#define M a + b

#define lbw long

//x替换成 x乘以x
#define MUL(x) x * x

#define bb(i) printf("我是宏替换的：%d\n", i);


/**
 * 宏定义
 * @return
 */
int main() {
    printf("π的值为：%f\n", PI);

    //结果2是10，所以是纯文本替换
    int a = 10, b = 20;
    printf("%d\n", M * a);

    lbw l = 10L;

    printf("%d\n", MUL(9));

    bb(666)
}

