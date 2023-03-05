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
 * _ _ DATE _ _ 当前的日期，格式为类似 Jun 27 2023 的字符串
 * _ _ TIME _ _	当前的时间，格式为类似 10:23:12 的字符串
 * _ _ FILE _ _	当前源代码文件的名称（含路径）的字符串
 * _ _ LINE _ _	当前所处的行号是多少就替换为多少，整数
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

