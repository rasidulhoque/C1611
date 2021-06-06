#include<stdio.h>
int main()
{
int marks[4],i,total_marks=0;
for(i=1;i<=4;i++)
{
printf("enter marks obtain in subject %d:",i);
scanf("%d",&marks[i]);
}
total_marks=(marks[1]+marks[2]+marks[3]+marks[4])/4;
printf("\nposition obtained:");
if(total_marks >=75 && total_marks<=100 )
 printf("Distinction") ;
else if(total_marks>=60 && total_marks<75)
 printf("First Division");
else if(total_marks>=50 && total_marks<60)
 printf("Second Division");
else if(total_marks>=40 && total_marks<50)
 printf("Third Division");
else if(total_marks>=0 && total_marks<40)
 printf("Fail");
else
 printf("invalid marks");
 return 0;
}