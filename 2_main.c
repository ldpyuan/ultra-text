//202510125127
//yuan2006.06@outlook.com
//雷得苹
#include <stdio.h>

int main() {
    int score;
    printf("请输入学生成绩（0-100）：");
    scanf("%d", &score);

    // 先判断成绩是否在有效范围（0-100）
    if (score < 0 || score > 100) {
        printf("成绩无效，请输入0-100之间的整数\n");
    } else if (score >= 90) {  // 90-100分
        printf("A\n");
    } else if (score >= 80) {  // 80-89分
        printf("B\n");
    } else if (score >= 70) {  // 70-79分
        printf("C\n");
    } else if (score >= 60) {  // 60-69分
        printf("D\n");
    } else {  // 60分以下
        printf("E\n");
    }

    return 0;
}
