#include <stdio.h>
int sum(int);
int main()

//function declaration
{
    /*program to print the sum of n natural number using recurcive function*/
    int k;
    k=sum(3);
    printf("%d",k);
    return 0;
}
int sum(int a)
{
    int s;
    if(a==1)
    return a;
    s=a+sum(a-1);
    return s;
}
