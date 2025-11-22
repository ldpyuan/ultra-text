//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

/**
 * @brief 指针版冒泡排序（从小到大）
 * @param ptr 指向待排序数组首元素的指针
 * @param n 数组长度（此处为 10）
 */
void bubbleSort(int *ptr, int n) {
    int i, j;
    // 外层循环控制排序轮数（n-1 轮）
    for (i = 0; i < n - 1; i++) {
        // 内层循环控制每轮比较次数（每轮减少 i 次，末尾 i 个元素已有序）
        // 用指针遍历：p 从首元素开始，到 n-1-i 位置结束（避免越界）
        int *p = ptr;
        for (j = 0; j < n - 1 - i; j++) {
            // 指针操作：比较当前元素与下一个元素，逆序则交换
            if (*p > *(p + 1)) {
                int temp = *p;
                *p = *(p + 1);
                *(p + 1) = temp;
            }
            p++;  // 指针向后移动，指向当前元素的下一个
        }
    }
}

int main() {
    int arr[10];
    int i;
    const int N = 10;

    // 1. 输入 10 个整数
    printf("请输入 10 个整数，以空格或回车分隔：\n");
    for (i = 0; i < N; i++) {
        scanf("%d", arr + i);  // 指针偏移接收输入（等价于 &arr[i]）
    }

    // 2. 打印排序前的数组
    printf("\n排序前：");
    for (i = 0; i < N; i++) {
        printf("%d ", *(arr + i));  // 指针解引用打印（等价于 arr[i]）
    }
    printf("\n");

    // 3. 调用指针版冒泡排序（传入数组首地址和长度）
    bubbleSort(arr, N);

    // 4. 打印排序后的数组
    printf("排序后（从小到大）：");
    for (i = 0; i < N; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}
