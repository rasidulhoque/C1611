#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],upp_str[100];
    int i=0,j=0;
    printf("\n enter the string:");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        upp_str[j]=str[i]-32;
        else
        upp_str[i]=str[i];
        i++;j++;
    }
    upp_str[j]='\0';
    printf("the string conversion in upper case is:");
    puts(upp_str);
    return 0;
}