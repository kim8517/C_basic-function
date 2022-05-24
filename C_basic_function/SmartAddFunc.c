//
//  SmartAddFunc.c
//  C_basic_function
//
//  Created by 김태완 on 2022/05/24.
//

#include <stdio.h>

int Add(int num1, int num2)
{
    return num1 + num2;
}

void ShowAddResult(int num) // No return
{
    printf("Print the result of add: %d \n", num);
}

int ReadNum(void) // No input
{
    int num;
    scanf("%d", &num);
    return num;
}

void HowToUseThisProg(void) // No input, No return
{
    printf("If you input two integers, sum of them will be printed. \n");
    printf("Please enter two integers");
}

int main(void)
{
    int result, num1, num2;
    HowToUseThisProg();
    num1=ReadNum();
    num2=ReadNum();
    result = Add(num1, num2);
    ShowAddResult(result);
    return 0;
}
