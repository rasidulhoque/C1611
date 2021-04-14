#include<stdio.h>
void swap(int*,int*);
void main()
{
    int c,d;
    printf("enter a number(c):");
    scanf("%d",&c);
    printf("enter a number(d):");
    scanf("%d",&d);
    printf("before swapping:\nc=%d d=%d",c,d);
    swap(&c,&d);
    printf("\nafter swapping:\nc=%d d=%d",c,d);
}
void swap(int*c,int*d)
{
    int temp;
    temp=*c;
    *c=*d;
    *d=temp;
    //printf("")
}