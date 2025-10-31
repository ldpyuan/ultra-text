//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

int main()
{
    int num = 100;  // 从100开始遍历
    int first = 1;  // 标记是否是第一个水仙花数，用于控制输出格式

    while (num <= 999) {  // 循环条件：不超过999
        // 分解百位、十位、个位数字
        int hundreds = num / 100;          // 百位：num除以100的商
        int tens = (num / 10) % 10;        // 十位：num除以10的商再取余10
        int units = num % 10;              // 个位：num取余10

        // 计算各位数字的立方和
        int cube_sum = hundreds * hundreds * hundreds 
                     + tens * tens * tens 
                     + units * units * units;

        // 判断是否为水仙花数（立方和等于自身）
        if (cube_sum == num) {
            // 控制输出格式：第一个数前无空格，后续数前加空格
            if (first) {
                printf("%d", num);
                first = 0;  // 第一个数输出后，标记为非首次
            } else {
                printf(" %d", num);
            }
        }

        num++;  // 数字自增，继续下一个数的判断
    }

    printf("\n");  // 输出结束后换行
    return 0;
}
