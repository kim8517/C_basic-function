//
//  SimpleAddFunc.c
//  C_basic_function
//
//  Created by 김태완 on 2022/05/24.
//

#include <stdio.h>

int Add(int num1, int num2) //type function_name(return_type)
{
    return num1+num2; // return output -> function(input) = output
}

int main(void)
{
    int result;
    result = Add(3,4); // result = 3+4 on 12nd line
    printf("Result of Add 1: %d \n", result);
    result = Add(5,8);
    printf("Result of Add 2: %d \n", result);
    return 0;
}
