#include "stdio.h"

/**
 * 枚举类 enum关键字
 * 如果不给初始值，从0开始，依次+1
 */
enum status {
    low = 1, middle, high
};

int main() {
    enum status s = middle;
    printf("%d\n", s);
}

