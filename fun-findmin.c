#include <stdio.h>

int findMin(const int arr[], int);

/**
 * 寻找最小数
 * @return
 */
int main() {
    int arr[] = {1, 4, -9, 2, -4, 7};
    int i = findMin(arr, 6);
    printf("sum = %d\n", i);
}

int findMin(const int arr[], int length) {
    int min = 0;
    for (int i = 0; i < length; ++i) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}
