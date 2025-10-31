//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

int main() 
{
    int n, i;
    int is_prime = 1;  // 标记是否为质数，初始假设是质数

    // 接收用户输入
    scanf("%d", &n);

    // 处理特殊情况：小于2的数不是质数
    if (n <= 1) {
        is_prime = 0;
    } else {
        i = 2;
        // 使用while循环判断是否有除1和自身外的因数
        while (i < n) {
            if (n % i == 0) {  // 若能被i整除，则不是质数
                is_prime = 0;
                break;  // 找到因数后提前退出循环
            }
            i++;  // 检查下一个可能的因数
        }
    }

    // 根据判断结果输出提示信息
    if (is_prime) {
        printf("密钥安全，密码设置成功\n");
    } else {
        printf("密钥不安全，请重新输入\n");
    }

    return 0;
}
