//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

int main() {
    int a, b, c;
    // 输入三个整数（线段长度）
    scanf("%d %d %d", &a, &b, &c);
    
    // 判断任意两边之和是否大于第三边
    if (a + b > c && a + c > b && b + c > a) {
        printf("可以组成三角形\n");
    } else {
        printf("不能组成三角形\n");
    }
    
    return 0;
}
