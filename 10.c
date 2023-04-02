#include<stdio.h>
#include<string.h>
struct Marks
{
    char name[20];
    int roll;
    float chem_marks, maths_marks, phy_marks;
};
int main()
{
    struct Marks S[5];
    int i;
    for(i=0; i<5; i++)
    {
       printf("Enter the student name: ");
       fflush(stdin);
       gets(S[i].name);
       printf("Enter roll no: ");
       scanf("%d",&S[i].roll);
       printf("Enter chemistry marks: ");
       scanf("%f",&S[i].chem_marks);
       printf("Enter math marks: ");
       scanf("%f",&S[i].maths_marks);
       printf("Enter physics marks: ");
       scanf("%f",&S[i].phy_marks);
    }
    percentage(S,5);
    return 0;
}
void percentage(struct Marks H[], int size)
    {
        int i;
        float sum, per;
         for(i=0; i<size; i++)
         {
             sum = H[i].chem_marks + H[i].maths_marks + H[i].phy_marks;
             per= (sum*100)/300;
             printf("\n%d. Student name = %s, roll no= %d, Total percentage= %f",i+1,H[i].name,H[i].roll,per);
         }

    }

