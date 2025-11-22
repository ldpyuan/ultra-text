//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>
#include <stdlib.h>  // 包含 malloc 和 free 函数的头文件

int main() {
    int *ptr;  // 定义指针，用于指向动态申请的内存空间
    int i;
    const int N = 5;  // 存储的整数个数

    // 1. 动态申请能存储 5 个整数的内存空间
    // sizeof(int) 获取单个 int 类型的字节数，乘以 5 得到总所需字节数
    ptr = (int *)malloc(N * sizeof(int));

    // （题目要求简化，无需判断内存分配是否成功，此处省略判断逻辑）

    // 2. 键盘输入 5 个整数，通过指针存入动态内存
    printf("请输入 5 个整数，以空格或回车分隔：\n");
    for (i = 0; i < N; i++) {
        // 指针偏移：ptr + i 指向第 i 个整数的内存地址，解引用后存入值
        scanf("%d", ptr + i);  // 等价于 &ptr[i]，但更贴合指针操作需求
    }

    // 3. 遍历打印所有元素（指针操作）
    printf("\n动态内存中存储的元素：\n");
    for (i = 0; i < N; i++) {
        // 解引用指针偏移后的地址，获取对应元素值
        printf("%d ", *(ptr + i));  // 等价于 ptr[i]
    }
    printf("\n");

    // 4. 释放动态申请的内存，避免内存泄漏
    free(ptr);
    ptr = NULL;  // 释放后将指针置空，避免成为“野指针”（安全编程习惯）

    return 0;
}
