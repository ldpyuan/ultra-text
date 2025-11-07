//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

/**
 * @brief 计算一个整型数组所有元素的和
 * @param arr 指向数组首元素的指针（数组名）
 * @param length 数组的长度
 * @return 数组所有元素的和
 */
int calculateSum(int arr[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}

/**
 * @brief 计算一个整型数组所有元素的积
 * @param arr 指向数组首元素的指针（数组名）
 * @param length 数组的长度
 * @return 数组所有元素的积
 */
long long calculateProduct(int arr[], int length) {
    // 使用 long long 类型防止乘积过大导致溢出
    long long product = 1;
    for (int i = 0; i < length; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    // 1. 定义一个长度为 5 的数组
    int numbers[5];
    int arrayLength = 5;

    // 2. 提示用户输入，并读取 5 个整数
    printf("请输入 5 个整数，以空格或回车分隔：\
");
    for (int i = 0; i < arrayLength; i++) {
        scanf("%d", &numbers[i]);
    }

    // 3. 调用函数计算和与积
    int sumResult = calculateSum(numbers, arrayLength);
    long long productResult = calculateProduct(numbers, arrayLength);

    // 4. 输出结果
    printf("\
数组元素的和为: %d\
", sumResult);
    printf("数组元素的积为: %lld\
", productResult); // %lld 是 long long 的格式说明符

    return 0;
}
