#include "stdio.h"

/**
 * 结构体
 * 比如保存多个学生的信息，包括id、name、age
 * 使用struct关键字
 */
struct Student {
    int id;

    int age;

    char *name;

    //全局初始化
} s = {2, 19, "小红"};


/**
 *
 * @return
 */
int main() {
    //第一种方式，局部初始化
    struct Student student = {1, 18, "小明"};
    //数组
    struct Student arr[] = {{3, 20, "小红"}, {4, 16, "小王"}};

    //结构体变量.数据名称 (这里.也是一种运算符) 就可以访问结构体中存放的对应的数据了
    printf("id = %d, age = %d, name = %s\n", s.id, s.age, s.name);
    printf("id = %d, age = %d, name = %s\n", student.id, student.age, student.name);

    //结构体在内存中占据的计算
    printf("%lu\n", sizeof student.id);
    printf("%lu\n", sizeof(struct Student));
}


