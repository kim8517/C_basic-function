# 09-1 Define and declare a function
This is a summary of the chapter 09-1 in <윤성우, 열혈 C-프로그래밍>
## Idea of the function
For a complex problem, we can solve it at one time; We have to analyze the probelm, split the procedure into small algorithms and combining them.
Defining a function corresponds to the second step(split into small process). By assigining each small, subordinate process on the functions, we can convert
the complex and volumnious problem into the combination of the small and easy problems.

Basically, functions are composed of input, calculation body, and return. As some values are input, the function returns the value according to
the pre-defined algorithm. As a example, consider a basic fucntion f(x) = x+3. If we plug 5 into this function, it returns 8 according to the pre-defined
calculation process: 5+3 = 8

## Basic structure of the function in C
To use a function, we must define and declare the function
The basic form to define the function in c is following:

    return_type ftn_name(input_type input)

In c, unlike the python, we have to clearly declare the type of the values to be used. The 'type' on the first prescribes the types of return and 'input_type' in the parenthesis prescribes the type of input value.
In this form, we can define every function we want to use. For example if we want a function which takes two integers as inputs
and returns add of them, we can write

    int Add (int num1, int num2)
    {
      int result = num1 + num2;
      return result;
     }
     
Note that the function can take several inputs but return just one value.
[Example]{https://github.com/kim8517/C_basic-function/blob/main/C_basic_function/SimpleAddFunc.c}

## Void function
However, there are functions which do not reqire either input or return values(ex. 'printf').
For functions like this, we replace types with 'void'. For example, the function which do not ruturn any values can be defined by
    void ftn_name(input_type input)
    
\* Usage of return
'return' on the line has to meanings; returning of the values and escape the function.
To see this clearly, see the following example:

    void NoReturn(int num)
    {
      if(num<0)
        {
          return;
        }
     }

Here, return doest not 'return' any value. But by writing down this word, the complier will escapes the function if the input satisfies the condition.
[Example]{https://github.com/kim8517/C_basic-function/blob/main/C_basic_function/SmartAddFunc.c}

## Declartin of the function: C as a procedure programming language
C is a procedure programming language. Thus, all things, including variables, types, and fucntions, must be explicitly decalred before used.
For example, you are to code the program which retruns the integer larger than input by one.
In python, (If you bother to use functions) the below code works 

    def main():
      print(increment(2))
      
    def increment(n)
      return n+1
      
    main()
    
But in C, the similar code will lead to error

    int main(void)
    {
      int num=2;
      num=Increment(num):
      return 0;
    }
    
    int Increment(int n)
    {
      n++;
      return n;
    }
    
The defference comes from the nature of the two languages. In python, the function is saved as an object and memory remembers the In c, however,
everything is done from the above to the below, code by code. To use increment, it must be declared before writing it. Therefore above exmaple
must be revised as

    int Increment(int n)
    {
      n++;
      return n;
    }
    
    int main(void)
    {
      int num = 2
      num = Increment(num);
      return 0;
    }
    
Or alternatively,

    int Increment(int n);
    {
        int num=2;
        num = Increment(num);
        return 0;
    }
    
    int Increment(int n)
    {
      n++;
      return n;
    }
    
'int Increment(int n)' on the first line declares 'I will define the function later, so you just compile it when meets it'.
This would be useful when we edit the codes or allow users to catch the function to be used at a glance.

## Codes with various functions
As a summary, let's write down the code which finds an integer with larger absolute value when two integers are input.
The strategy to do this would be

* What we need is (1) calculate the absolute value of a given integer and (2) determine which integer is bigger
* To realize it, we will define two functions to do (1) and (2) respectively
* (For readers to read easily, we will delare the functions ahead)

The example answer is following

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
{https://github.com/kim8517/C_basic-function/blob/main/C_basic_function/AbsCompare.c}
Note that two returns are written in the functions. It is not a problem because actually it is used once for each function. For example,
in GetAbsoValue if input num is lower than 0, only return in the 'if' works, return in the 'else' affecting not at all.

## Problem answer
(1) 09-1
* Strategy: Consider how a human determine the maixmum value. When three numbers are given, one arbitarily chooses two, say first and secone number, 
and compare them. Suppose the first is bigger than the second. Then, he or she compares that with the third number. 
The maximum is the bigger one among them. Note that you don't have to compare second and third one(Remember efficiency will determine your future income!)
* [Example answer]{https://github.com/kim8517/C_basic-function/blob/main/C_basic_function/Prob1.c}

(2) 09-3
* Strategy: This requires the mathematical intution: recurrence relation. There are two ways to define a series.
First is to define the general term a(n) and Second is to define the recuurence relation, the relation between n, n-1 or n-2 etc.
Usually fibonacci sereris is defined by the recurrence relation, a_{n} = a_{n-1} + a_{n-2}
You have to exploit it. First, we must define intial terms f1 = 0 and f2 = 1, since it is independently determined. Then, calculate third term f3 as f1+f2.
Print f3. To find fourth term, we have to do calculation f3+f2. But it is same calculation with f1+f2 if you replace f3 -> f2 and f2 -> f1
Therefore by updating f2=f3 and f1=f2 before doing f1+f2, we can get the fourth term. Repeat this until reaching the number you want.
* [Example answer]{https://github.com/kim8517/C_basic-function/blob/main/C_basic_function/Prob3.c}




