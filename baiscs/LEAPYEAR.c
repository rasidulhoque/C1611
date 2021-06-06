
#include <stdio.h>
int main(){
//program for leap year
int year;
printf(" enter the year");
scanf("%d",&year);
if(year%4==0){
printf("the given year %d is a leap year and has 29 days in the month of february",year );
}
else{
printf("the given year %d is not a leap year and has 28 days in the month of february",year);
}
return 0;
}