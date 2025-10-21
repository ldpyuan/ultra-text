//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

int main() {
    float celsius, fahrenheit;  // 定义摄氏温度和华氏温度变量

    // 获取用户输入的摄氏温度
    printf("请输入摄氏温度：");
    scanf("%f", &celsius);

    // 应用转换公式：华氏温度 = 摄氏温度 × 9/5 + 32
    fahrenheit = celsius * 9 / 5 + 32;

    // 输出结果，保留1位小数
    printf("对应的华氏温度为：%.1f\n", fahrenheit);

    return 0;
}
