#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
void sort(struct Employee [], int);
int main()
{
    int i;
    struct Employee E[5];
    for(i=0; i<5; i++)
    {
       printf("Enter employee id, name and salary: ");
       scanf("%d",&E[i].id);
       fflush(stdin);
       gets(E[i].name);
       scanf("%f",&E[i].salary);
    }
    sort(E,5);
    return 0;
}
void sort(struct Employee H[], int size)
    {
        struct Employee tmp;
        int i,j;
         for(i=0; i<size-1; i++)
         {
             for(j=i; j<size; j++)
            {
                if(strcmp(H[i].name, H[j].name) >0)
                {
                    tmp= H[i];
                    H[i]= H[j];
                    H[j]= tmp;
                }
            }
         }
         printf("Sorting Employee details according name: \n");
         for(i=0; i<5; i++)
         {
             printf("%d %s %f \n",H[i].id,H[i].name,H[i].salary);
         }

    }

