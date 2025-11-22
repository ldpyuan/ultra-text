//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

int main() {
    // 1. 定义整数变量 a 并赋值（这里直接赋值为初始值，也可根据需求修改）
    int a = 25;  // 示例初始值，可自行调整
    // 2. 定义指针 p，指向变量 a（&a 表示取 a 的内存地址）
    int *p = &a;

    printf("修改前：\n");
    printf("变量 a 的值：%d\n", a);
    printf("指针 p 指向的值（*p）：%d\n", *p);  // *p 表示访问指针指向地址的内容
    printf("变量 a 的内存地址（&a）：%p\n", &a);
    printf("指针 p 存储的地址（p）：%p\n", p);  // 指针 p 本身存储的是 a 的地址

    // 3. 通过指针修改 a 的值：使 a 加 10（*p 等价于 a，对 *p 操作即对 a 操作）
    *p += 10;

    printf("\n修改后（a 的值加 10）：\n");
    printf("变量 a 的值：%d\n", a);
    printf("指针 p 指向的值（*p）：%d\n", *p);  // 指针指向的值同步更新

    return 0;
}
