//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

int main()
 {
    int arr[5];  // 长度为5的数组，存储提交记录
    int i;

    // 输入当前记录的前4位学号
    printf("请输入前4位学生学号：");
    i = 0;
    while (i < 4) {
        scanf("%d", &arr[i]);
        i++;
    }

    // 数组元素整体后移一位（原第1位→第2位，直到原第4位→第5位）
    i = 4;  // 从最后一位开始处理
    while (i > 0) {
        arr[i] = arr[i - 1];  // 后一位赋值为前一位的值
        i--;
    }

    // 在首位（第1位）补0
    arr[0] = 0;

    // 输出更新后的完整数组
    printf("更新后的提交记录：");
    i = 0;
    while (i < 5) {
        printf("%d", arr[i]);
        if (i < 4) {  // 除最后最后一位，后面加空格
            printf(" ");
        }
        i++;
    }
    printf("\n");

    return 0;
}
