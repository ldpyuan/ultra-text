//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

int main() {
    int a, b;
    char op;
    int result;  // 存储计算结果（除法结果为整数时使用）
    float div_result;  // 存储除法可能产生的浮点数结果

    // 读取输入的两个整数和运算符
    scanf("%d %d %c", &a, &b, &op);

    // 根据运算符进行计算
    switch (op) {
        case '+':
            result = a + b;
            printf("%d\n", result);
            break;
        case '-':
            result = a - b;
            printf("%d\n", result);
            break;
        case '*':
            result = a * b;
            printf("%d\n", result);
            break;
        case '/':
            // 仅处理除数不为0的情况
            if (b != 0) {
                // 判断是否能整除
                if (a % b == 0) {
                    result = a / b;
                    printf("%d\n", result);
                } else {
                    div_result = (float)a / b;  // 强制类型转换为浮点数
                    printf("%f\n", div_result);
                }
            }
            break;
        default:
            // 可根据需要处理无效运算符的情况
            break;
    }

    return 0;
}
