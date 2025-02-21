#include "divide.h"  // 包含头文件 divide.h，用于引入函数声明

#include <stdio.h>  // 包含标准输入输出头文件，用于使用 printf 函数

double divide(double x, double y) {
    if (y == 0) {  // 检查除数是否为0
        printf("Error: Division by zero.\n");  // 若除数为0，打印错误信息
        return 0;  // 返回0，表示出现错误
    }
    return x / y;  // 返回两个数的商
}
