#include "stdio.h"


/**
 * 联合体，所有变量共用内存空间
 */
union Object {
    int a;

    char b;

    float c;

};


int main() {
    union Object obj = {.a = 65};

    printf("%d\n", obj.b);
    printf("%f\n", obj.c);

    printf("%lu\n", sizeof(union Object));

    union Object *p = &obj;
    printf("%s\n", &p->b);
}
