#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
main()
{
    struct Employee E;
    printf("Enter employee id, name and salary: ");
    scanf("%d",&E.id);
    fflush(stdin);
    gets(E.name);
    scanf("%f",&E.salary);
    return 0;
}
