#include<stdio.h>
int fact(int);
void main()
{
    int f,n;
    printf("enter the number:");
    scanf("%d",&f);
    n=fact(f);
    printf("the fatorial of the given number is:%d",n);
    
}
 

// function defination
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}