#include "modulus.h"  // 包含头文件 modulus.h，用于引入函数声明

#include <stdio.h>  // 包含标准输入输出头文件，用于使用 printf 函数
#include <math.h>  // 包含数学库头文件，用于使用 fmod 函数

double modulus(double x, double y) {
    if (y == 0) {  // 检查除数是否为0
        printf("Error: Division by zero.\n");  // 若除数为0，打印错误信息
        return 0;  // 返回0，表示出现错误
    }
    return fmod(x, y);  // 返回 x 对 y 取模的结果
}
