//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

int main()
 {
    int arr[5];
    int i = 0;
    
    // 使用while循环输入5个偶数
    while (i < 5) {
        int num;
        scanf("%d", &num);
        
        // 检查是否为偶数，若为奇数则重新输入当前位置
        if (num % 2 != 0) {
            continue; // 跳过本次循环，不递增i，重新输入
        }
        
        // 若为偶数则存入数组，继续下一个位置
        arr[i] = num;
        i++;
    }
    
    // 使用while循环输出数组
    i = 0;
    while (i < 5) {
        printf("%d", arr[i]);
        // 除最后一个元素外，后面加空格
        if (i < 4) {
            printf(" ");
        }
        i++;
    }
    printf("\n");
    
    return 0;
}
