#include "stdio.h"


struct People {
    int id;

    int age;

    char *name;
};

void test(struct People people) {
    people.age = 999;
}

void testPoint(struct People *people) {
    people->age = 999;
}

/**
 * 数组结构体和指针
 * @return
 */
int main() {
    //数组结构体
    struct People arr[] = {{1, 20, "小红"},
                           {2, 16, "小王"}};

    printf("%s\n", arr[1].name);


    //结构体指针
    struct People point = {3, 20, "小王"};
    struct People *p = &point;

    printf("%s\n", (*p).name);
    printf("%s\n", p->name);

    test(point);
    printf("%d\n", p->age);

    testPoint(&point);
    printf("%d\n", p->age);
}


