#include "input.h"  // 包含头文件 input.h，用于引入函数声明

#include <stdio.h>  // 包含标准输入输出头文件，用于使用 printf 和 scanf 函数

int get_operation_choice() {
    int choice;
    printf("Choose operation:\n");  // 打印操作选项
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus\n");
    printf("Enter choice (1-5): ");  // 提示用户输入选择
    scanf("%d", &choice);  // 读取用户输入的选择
    return choice;  // 返回用户选择的操作
}

double get_double_from_user(const char* prompt) {
    double num;
    printf("%s", prompt);  // 打印提示信息
    scanf("%lf", &num);  // 读取用户输入的双精度浮点数
    return num;  // 返回用户输入的双精度浮点数
}
