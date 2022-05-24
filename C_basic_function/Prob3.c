//
//  Prob3.c
//  C_basic_function
//
//  Created by 김태완 on 2022/05/24.
//

#include "Prob3.h"
void ShowFibo(int num)
{
    int f1=0, f2=1, f3, i; //declare the initial terms
    if(num==1)
    {
        printf("%d", f1); // If num=1, unable to process in the for loop
    }
    else
    {
        printf("%d %d ", f1, f2);
    }
    
    for (i=0; i<num-2; i++)
    {
        f3=f1+f2; // update f3 using recurent relation
        printf("%d ", f3);
        f1=f2; // update f1 and f2
        f2=f3;
    }
}

int main(void)
{
    int n;
    printf("The number of the fibonacci series to print: ");
    scanf("%d", &n);
    if(n<1)
    {
        printf("Input a natural number \n");
        return -1; // escape the function, not doing following process
    }
    ShowFibo(n);
    return 0;
}
