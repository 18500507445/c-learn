#include <stdio.h>


/**
 *
 * @param arr 数组
 * @param left 起始下标
 * @param right 结束下标
 */
void quickSort(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }
    int base = arr[left], l = left, r = right;
    while (l < r) {
        while (l < r && arr[r] >= base) {
            r--;
        }
        arr[l] = arr[r];
        while (l < r && arr[l] <= base) {
            l++;
        }
        arr[r] = arr[l];
    }
    arr[r] = base;
    quickSort(arr, left, r - 1);
    quickSort(arr, r + 1, right);
}

/**
 * 快速排序
 * 1.首先将第一元素作为基准
 * 2.两个箭头分别指向左右两端
 * 3.首先从右边开始，不断和基准进行比较，如果右指针数字<基准，将左边指针替换然后移动一格，
 * 然后左指针<基准，右指针替换移动一格，依次交替进行，箭头汇聚的地方就是替换后的基数数字
 * 4.最后，左右两边，左边都比基准小，右边都比基准大，但是并不一定是有序地
 * 5.不断地分割重复2-->3的步骤
 * https://visualgo.net/zh/sorting
 * @return
 */
int main() {
    int arr[] = {4, 3, 8, 2, 1, 7, 5, 6, 9, 0};
    quickSort(arr, 0, 9);
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

}
