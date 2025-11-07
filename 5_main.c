//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>
/**
 * @brief 计算等差数列的和
 * @param a1 首项
 * @param an 末项
 * @param step 步长
 * @return 等差数列的和
 */
int arithmeticSum(int a1, int an, int step) {
    // 计算项数
    int n = (an - a1) / step + 1;
    // 计算等差数列的和
    int sum = n * (a1 + an) / 2;
    return sum;
}

int main() {
    // 计算 1 + 2 + 3 + ... + 100
    int a1 = 1;
    int an = 100;
    int step = 1;
    int sum = arithmeticSum(a1, an, step);

    printf("从 %d 加到 %d（步长为 %d）的和是: %d\
", a1, an, step, sum);

    return 0;
}
