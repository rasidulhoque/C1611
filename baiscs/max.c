#include<stdio.h>
int main()
{
    int i=0,large=0,num;
    while(i<3)
    {
        printf("\n enter three number:");
        scanf("%d",&num);
        large=num>large?num:large;
        i++;
    }
    printf("\n largest of the three number is:%d",large);
    return 0;
}