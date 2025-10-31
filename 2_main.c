//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

int main() {
    int num = 100;  // 起始数字，从100开始
    int count = 0;  // 用于控制输出格式（避免末尾空格）
    
    while (num <= 999) {  // 循环条件：数字不超过999
        // 分解出百位、十位、个位
        int hundreds = num / 100;
        int tens = (num / 10) % 10;
        int units = num % 10;
        
        // 计算各位立方和
        int sum = hundreds * hundreds * hundreds + 
                  tens * tens * tens + 
                  units * units * units;
        
        // 判断是否为水仙花数
        if (sum == num) {
            // 控制输出格式：第一个数前无空格，后续数前加空格
            if (count == 0) {
                printf("%d", num);
                count++;
            } else {
                printf(" %d", num);
            }
        }
        
        num++;  // 数字自增，继续判断下一个数
    }
    
    printf("\n");  // 输出结束后换行
    return 0;
}
