#include "output.h"  // 包含头文件 output.h，用于引入函数声明

#include <stdio.h>  // 包含标准输入输出头文件，用于使用 printf 函数

void print_result(double result, const char* operation) {
    printf("The result of %s is: %lf\n", operation, result);  // 打印操作名称和结果
}
