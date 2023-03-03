#include <stdio.h>
#include <string.h>

int main() {

    char str[30];
    gets(str);
    int length = strlen(str), left = 0, right = length - 1;

    _Bool flag = 1;

    while (left < right) {
        if (str[left] != str[right]) {
            flag = 0;
            break;
        }
        left++;
        right--;
    }

    puts(flag ? "是回文串" : "不是回文串");

}

