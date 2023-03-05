#include "stdio.h"

typedef const char *String;

typedef struct Str {
    int age;

    char *name;
} Student;

int main() {

    String str = "卢本伟牛皮";

    printf("%s\n", str);

    //关键字可以省略
    Student s = {1, "小红"};

    printf("%s", s.name);
}

