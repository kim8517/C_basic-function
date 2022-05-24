//
//  AbsCompare.c
//  C_basic_function
//
//  Created by 김태완 on 2022/05/24.
//

#include <stdio.h>
// declaration of the fiunction to be used
int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

// main program
int main(void)
{
    int num1, num2;
    printf("Input two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("An integer with larger absolute values among %d and %d: %d \n", num1, num2, AbsoCompare(num1, num2));
    return 0;
}

// Define the function
int AbsoCompare(int num1, int num2)
{
    if(GetAbsoValue(num1) > GetAbsoValue(num2))
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int GetAbsoValue(int num)
{
    if(num<0)
    {
        return num*(-1);
    }
    else
    {
        return num;
    }
}
