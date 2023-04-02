#include<stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};
void sort(struct Employee [], int);
main()
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
         for(i=1; i<=size-1; i++)
         {
             for(j=0; j<=size-1-i; j++)
            {
                if(H[j].salary > H[j+1].salary)
                {
                    tmp= H[j];
                    H[j]= H[j+1];
                    H[j+1]= tmp;
                }
            }
         }
         printf("Sorting Employee details according salary: \n");
         for(i=0; i<5; i++)
         {
             printf("%d %s %f \n",H[i].id,H[i].name,H[i].salary);
         }

    }

