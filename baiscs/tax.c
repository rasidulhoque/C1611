#include<stdio.h>
int main()
{
    int income;
    float tax=0;
    printf("enter the income:");
    scanf("%d",&income);
    printf("income=%d\n",income);
    if(income<=150000)
    {
        tax=0;
        printf("no tax :)");
    }
    if(income<=300000 && income>150000)
    {
        tax=income/(float)0.1;
        printf("tax=%.2f",tax);
    }
    if(income<=500000 && income>300000)
    {
        tax=income*(float)0.2;
        printf("tax=%.2f",tax);
    }
    if(income>500000)
    {
        tax=income*(float)0.3;
        printf("tax=%.2f",tax);
    }
    return 0;
}