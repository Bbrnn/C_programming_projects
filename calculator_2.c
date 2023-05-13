/*
this programs reads two numbers and operator then it operates on the numbers to give an output.Switch case is conveniently used*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
//reads 2 numbers and performs  a calculation to give out a result
int num1, num2, result;
//arithmetic operator
char oper;
printf("KEY IN THE TWO NUMBERS and OPERATOR USED\n");
scanf("%d\n %d\n",&num1,&num2);
scanf("%c", &oper);

switch(oper)
{
case'+':
    {
        printf("RESULT:%d\n", num1+num2);
        break;
    }
case'-':
    {
        printf("RESULT:%d\n", num1-num2);
        break;
    }
case'*':
    {
        printf("RESULT:%d\n", num1*num2);
        break;
    }
case'/':
    {
        printf("RESULT:%d\n", num1/num2);
        break;
    }
case'^':
    {
        printf("RESULT:%d\n", num1^num2);
        break;
    }
default:
    {
    printf("Wrong operator!\n");
    }
}
return (0);
}
