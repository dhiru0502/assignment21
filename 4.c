#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
main()
{
    int i;

    struct Employee E[10];

    for(i=0; i<10; i++)
    {
       printf("Enter employee id, name and salary: ");
       scanf("%d",&E[i].id);
       fflush(stdin);
       gets(E[i].name);
       scanf("%f",&E[i].salary);
    }
    high_sal(E,10);
    return 0;
}
    void high_sal(struct Employee H[], int size)
    {
        char highSalary[20];
        int i;
         for(i=0; i<size; i++)
         {
            if(H[i].salary < H[i+1].salary)
              strcpy(highSalary,H[i+1].name);
         }
         printf("Highest salary Employee name= %s",highSalary);
    }

