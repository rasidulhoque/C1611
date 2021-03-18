#include<stdio.h>
int main()
{
    struct student
    {
        char name[20];
        int roll_no;
        int age;
        char dob[20];
        char blood_gp[20];
    };
    struct student stud[50];
    int i,n;
    printf("number of student:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the name:");
        scanf("%s",stud[i].name);
        printf("enter the roll number:");
        scanf("%d",&stud[i].roll_no);
        printf("enter the age:");
        scanf("%d",&stud[i].age);
        printf("enter the DOB:");
        scanf("%s",stud[i].dob);
        printf("enter the blood group:");
        scanf("%s",stud[i].blood_gp);
    }
    for(i=0;i<n;i++)
    {
        printf("\n\t********STUDENT DETAIL*********\t");
        printf("\nname=%s",stud[i].name);
        printf("\nroll number=%d",stud[i].roll_no);
        printf("\nage=%d",stud[i].age);
        printf("\nDOB=%s",stud[i].dob);
        printf("\nblood group=%s",stud[i].blood_gp);
    }
    return 0;
}