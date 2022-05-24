//
//  Prob1.c
//  C_basic_function
//
//  Created by 김태완 on 2022/05/24.
//

#include <stdio.h>

int Max(int n1, int n2, int n3)
{
    if(n1>n2) // first determination
    {
        return (n1>n2) ? n1 : n3; //second determination
    }
    else
        return (n2>n3) ? n2 : n3;
}

int Min(int n1, int n2, int n3)
{
    if(n1<n2)
    {
        return (n1<n3) ? n1 : n3;
    }
    else
    {
        return (n2<n3) ? n2 : n3;
    }
}

int main(void)
{
    int num1, num2, num3;
    printf("Input three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Maximum: %d \n", Max(num1, num2, num3));
    printf("Minimum: %d \n", Min(num1, num2, num3));
    return 0;
}
