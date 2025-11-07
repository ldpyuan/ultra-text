//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

/**
 * @brief 计算 a 的 b 次幂 (a^b)
 * @param a 底数
 * @param b 指数 (非负整数)
 * @return a 的 b 次幂的结果
 */
double power(int a, int b) {
    double result = 1.0;
    // 循环 b 次，每次将 result 乘以 a
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    int sum = 0;
    int n = 5; // 计算 1^2 到 5^2 的和

    printf("计算 1^2 + 2^2 + ... + %d^2 的值：\
", n);

    // 遍历 1 到 n，计算每个数的平方并累加
    for (int i = 1; i <= n; i++) {
        // 调用 power 函数计算 i 的平方
        sum += power(i, 2); 
        // 打印每一步的计算过程（可选）
        printf("%d^2 = %.0f\
", i, power(i, 2));
    }

    // 输出最终的和
    printf("\
它们的和是: %d\
", sum);

    return 0;
}
