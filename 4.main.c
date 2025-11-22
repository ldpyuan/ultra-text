//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

/**
 * @brief 通过指针使数组中每个元素自增 1
 * @param arr 指向数组首元素的指针（接收数组地址）
 * @param len 数组长度（避免指针越界）
 */
void incrementArray(int *arr, int len) {
    // 定义指针 p，初始指向数组首元素
    int *p = arr;
    // 循环遍历数组：指针从首元素移动到末元素（p < arr + len 表示未越界）
    for (; p < arr + len; p++) {
        (*p)++;  // 解引用指针，对当前指向的元素自增 1（括号避免优先级问题）
    }
}

int main() {
    int arr[5];
    int i;
    int len = 5;

    // 1. 输入数组元素
    printf("请输入 5 个整数，以空格或回车分隔：\n");
    for (i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    // 2. 打印原始数组
    printf("\n自增前的数组：\n");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 3. 调用函数：传入数组首地址（数组名即首地址）和长度
    incrementArray(arr, len);

    // 4. 打印自增后的数组（验证结果）
    printf("自增后的数组：\n");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
