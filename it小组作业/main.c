#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include "input.h"
#include "output.h"
#include "add.h"
#include "subtract.h"
#include "multiply.h"
#include "divide.h"
#include "modulus.h"

#define MAX_DOUBLE 1e9  // 定义一个合理的最大双精度浮点数
#define MIN_DOUBLE -1e9 // 定义一个合理的最小双精度浮点数

int main() {
    int choice = get_operation_choice();  // 获取用户选择的操作
    double num1, num2;
    
    // 获取第一个数字，并检查是否在合理范围内
    do {
        num1 = get_double_from_user("Enter first number: ");
    } while (num1 < MIN_DOUBLE || num1 > MAX_DOUBLE);
    
    // 获取第二个数字，并检查是否在合理范围内
    do {
        num2 = get_double_from_user("Enter second number: ");
    } while (num2 < MIN_DOUBLE || num2 > MAX_DOUBLE);

    double result;  // 用于存储计算结果的变量
    const char* operation;  // 用于存储操作名称的指针变量
    switch (choice) {  // 根据用户选择的操作执行不同的函数
        case 1:
            result = add(num1, num2);  // 调用add函数进行加法运算
            operation = "addition";  // 设置操作名称为"addition"
            break;
        case 2:
            result = subtract(num1, num2);  // 调用subtract函数进行减法运算
            operation = "subtraction";  // 设置操作名称为"subtraction"
            break;
        case 3:
            result = multiply(num1, num2);  // 调用multiply函数进行乘法运算
            operation = "multiplication";  // 设置操作名称为"multiplication"
            break;
        case 4:
            // 检查除数是否为0
            if (num2 == 0) {
                printf("Division by zero is not allowed.\n");
                return EXIT_FAILURE;
            }
            result = divide(num1, num2);  // 调用divide函数进行除法运算
            operation = "division";  // 设置操作名称为"division"
            break;
        case 5:
            // 检查模数是否为0
            if (num2 == 0) {
                printf("Modulus by zero is not allowed.\n");
                return EXIT_FAILURE;
            }
            result = modulus(num1, num2);  // 调用modulus函数进行求模运算
            operation = "modulus";  // 设置操作名称为"modulus"
            break;
        default:
            printf("Invalid choice.\n");  // 如果用户输入了无效的选择，打印错误信息
            return EXIT_FAILURE;  // 退出程序并返回失败状态
    }

    print_result(result, operation);  // 调用print_result函数打印结果和操作名称
    return EXIT_SUCCESS;  // 程序正常结束并返回成功状态
}