#include<stdio.h>
#include<string.h>
struct student
{
    char name[20], subject[10];
    int roll, class;
    float marks;
};
void display(struct student [], int);
int main()
{
    int i,n;

    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct student S[n];
    for(i=0; i<n; i++)
    {
       printf("Enter the student name: ");
       fflush(stdin);
       gets(S[i].name);
       printf("Enter subject: ");
       fflush(stdin);
       gets(S[i].subject);
       printf("Enter roll no: ");
       scanf("%d",&S[i].roll);
       printf("Enter class no: ");
       scanf("%d",&S[i].class);
       printf("Enter marks: ");
       scanf("%f",&S[i].marks);
    }
    display(S,n);
    return 0;
}
void display(struct student H[], int size)
    {
        int i;
         for(i=0; i<size; i++)
         {
             printf("\n%d. Student name = %s, subject= %s, roll no= %d, class= %d, marks= %f",i+1,H[i].name,H[i].subject,H[i].roll,H[i].class,H[i].marks);
         }

    }

