//引入标准库头文件
#include <stdio.h>

/**
 * 主函数，程序入口
 * @return
 */
int main() {
    printf("Hello, World!\n");

    int a = 5, b = 10;
    int c = a + b;
    printf("a = %d，b = %d，c = %d\n", a, b, c);

    float d = 0.5f;
    printf("d = %f\n", d);

    char f = 65;
    printf("d = %c\n", f);

    //可以忽略不写，编译器会自动添加
    return 0;
}

