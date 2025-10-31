//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

int isPrime(int n) {
    // 小于2的数不是质数
    if (n <= 1) {
        return 0;
    }
    // 检查从2到n-1是否有能整除n的数
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; // 不是质数
        }
    }
    return 1; // 是质数
}

int main() {
    int n;
    // 接收用户输入
    scanf("%d", &n);
    
    // 判断是否为质数并输出相应提示
    if (isPrime(n)) {
        printf("密钥安全，密码设置成功\n");
    } else {
        printf("密钥不安全，请重新输入\n");
    }
    
    return 0;
}
