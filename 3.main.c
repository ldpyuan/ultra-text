//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

// 冒泡排序函数：对数组进行从小到大排序
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    // 外层循环控制排序轮数，共需要 n-1 轮
    for (i = 0; i < n - 1; i++) {
        // 内层循环控制每轮比较次数，每轮减少 1 次比较（最后 i 个元素已排序）
        for (j = 0; j < n - 1 - i; j++) {
            // 如果当前元素大于下一个元素，交换它们
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[10];
    int i;

    // 提示用户输入 10 个整数
    printf("请输入 10 个整数，以空格或回车分隔：\
");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // 调用冒泡排序函数对数组排序
    bubbleSort(arr, 10);

    // 输出排序后的结果
    printf("\
排序后的数组（从小到大）：\
");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\
");

    return 0;
}
