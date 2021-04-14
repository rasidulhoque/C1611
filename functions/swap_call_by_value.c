#include<stdio.h>
void swap(int , int);
void main()
{
    int a,b;
    printf("enter first number(a):");
    scanf("%d",&a);
    printf("enter the second number(b):");
    scanf("%d",&b);
    printf("\nbefore swapping:\na=%d b=%d",a,b);
    swap(a,b);
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nafter swaping:\na=%d b=%d",a,b);
}