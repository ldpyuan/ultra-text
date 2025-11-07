//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

/**
 * @brief 将一个整型数组的元素在原数组上进行反转
 * @param arr 指向数组首元素的指针（数组名）
 * @param length 数组的长度
 */
void reverseArray(int arr[], int length) {
    // 只需要循环数组的前半部分
    for (int i = 0; i < length / 2; i++) {
        // 计算当前元素需要交换的对应位置
        int mirrorIndex = length - 1 - i;

        // 交换 arr[i] 和 arr[mirrorIndex] 的值
        int temp = arr[i];
        arr[i] = arr[mirrorIndex];
        arr[mirrorIndex] = temp;
    }
}

/**
 * @brief 打印一个整型数组的内容
 * @param arr 指向数组首元素的指针（数组名）
 * @param length 数组的长度
 */
// 为了代码整洁，我们额外编写一个打印数组的函数
void printArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\
");
}

int main() {
    // 1. 定义并初始化数组
    int arr[5] = {1, 2, 3, 4, 5};
    int length = 5;

    // 2. 打印原始数组
    printf("原始数组: ");
    printArray(arr, length);

    // 3. 调用反转函数
    reverseArray(arr, length);

    // 4. 打印反转后的数组
    printf("反转后数组: ");
    printArray(arr, length);

    return 0;
}
