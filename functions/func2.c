#include<stdio.h>
//functions declaration
int sum(int ,int );
int main()
{
    int num1,num2,total=0;
    printf("enter two number:");
    scanf("%d %d",&num1,&num2);
    total=sum(num1,num2);
    printf("sumation of the two numbers are:%d",total);
    return 0;
}

// function defination
int sum(int a, int b)
{
    int result ;
    result= a + b;
    return result;
}
