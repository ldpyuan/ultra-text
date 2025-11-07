//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

int main() {
    // 定义一个 3x3 的二维数组
    int matrix[3][3];
    int i, j;

    // 提示用户输入矩阵元素
    printf("请输入一个 3x3 的矩阵，每行 3 个整数，以空格或回车分隔：\
");

    // 循环输入矩阵元素
    for (i = 0; i < 3; i++) {  // 控制行数
        for (j = 0; j < 3; j++) {  // 控制列数
            scanf("%d", &matrix[i][j]);  // 输入每个元素
        }
    }

    // 提示即将输出矩阵
    printf("\
你输入的 3x3 矩阵如下：\
");

    // 循环输出矩阵元素
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);  // 输出每个元素，加空格分隔
        }
        printf("\
");  // 每行结束后换行
    }

    return 0;
}
