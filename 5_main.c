//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

/**
 * @brief 通过指针将数组所有元素向后移动一位（末尾元素丢弃，首位补 0）
 * @param ptr_arr 指向数组首元素的指针
 * @param len 数组长度（固定为 5，此处保留参数使函数更通用）
 */
void shiftRightDiscard(int *ptr_arr, int len) {
    // 指针指向数组倒数第二个元素（从后往前遍历，避免覆盖未移动的元素）
    int *p = ptr_arr + len - 2;  // len=5 时，指向 arr[3]（倒数第二个元素）
    
    // 从后往前循环：将后一个元素的值赋给前一个元素（指针向前移动）
    for (; p >= ptr_arr; p--) {
        *p = *(p + 1);  // 把当前指针下一个位置的元素值，赋给当前指针指向的位置
    }
    
    // 数组第一个位置（首元素）补 0
    *ptr_arr = 0;
}

int main() {
    int arr[5];
    int i;
    const int LEN = 5;  // 数组长度固定为 5

    // 1. 输入数组元素
    printf("请输入 5 个整数，以空格或回车分隔：\n");
    for (i = 0; i < LEN; i++) {
        scanf("%d", &arr[i]);
    }

    // 2. 打印移动前的数组
    printf("\n移动前的数组：\n");
    for (i = 0; i < LEN; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 3. 调用函数：传入数组首地址和长度
    shiftRightDiscard(arr, LEN);

    // 4. 打印移动后的数组（验证结果）
    printf("向后移动一位后的数组（末尾元素丢弃，首位补 0）：\n");
    for (i = 0; i < LEN; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
