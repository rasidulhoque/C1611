#include<stdio.h>
int main()
{
    int a,b;
    int hcf(int,int);
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    printf("hcf is:%d\n",hcf(a,b));
    return 0;
}
int hcf(int n,int m)
{
  while(m!=0)
  {
    int r=m%n;
    n=m;
    m=r;
  }  
  return n;
}
