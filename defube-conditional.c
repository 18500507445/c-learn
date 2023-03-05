#include <stdio.h>

//ifdef用于判断是否定义了符号PI，如果没有的话则处理以下的指令
#ifdef PI
    #define M 666
//如果定义了符号PI，那么就处理这个分支的语句
#else
    #define M 777
//最后需要以endif指令结束整个判断
#endif

int main() {
    //打印M
    printf("%d", M);
}