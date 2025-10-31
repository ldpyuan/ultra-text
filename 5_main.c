//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

int main() {
    int arr[5];  // 定义长度为5的数组
    int i = 0;   // 用于循环输入前四位的索引

    // 使用while循环输入前四位元素
    while (i < 4) {
        scanf("%d", &arr[i]);
        i++;
    }

    // 计算第五位（前四位的和）
    arr[4] = arr[0] + arr[1] + arr[2] + arr[3];

    // 使用while循环输出整个数组
    i = 0;
    while (i < 5) {
        printf("%d", arr[i]);
        // 除最后一位外，每个元素后加空格
        if (i < 4) {
            printf(" ");
        }
        i++;
    }
    printf("\n");

    return 0;
}
