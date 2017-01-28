/*Expt No: 1f*/
/*Programmer: Frank G. D'Souza*/
/*Title: C program to implement nested structures */
#include<stdio.h>
struct company
     {
         int company_id;
         char company_name[50];
     };
typedef struct company company;
struct employee
     {
         int employee_id;
         char employee_name[50];
         int employee_salary;
         company c;
     };
typedef struct employee employee;
int main()
  {
      employee e[50];
      int i,n;
      printf("\nEnter the number of employees : ");
      scanf("%d",&n);
      for(i=0;i<n;i++)
        {
            printf("\nEnter company name of employee %d : ",i+1);
            scanf("%s",e[i].c.company_name);
            printf("Enter company id of employee %d : ",i+1);
            scanf("%d",&e[i].c.company_id);
            printf("Enter name of employee %d : ",i+1);
            scanf("%s",e[i].employee_name);
            printf("Enter id of employee %d : ",i+1);
            scanf("%d",&e[i].employee_id);
            printf("Enter salary of employee %d : ",i+1);
            scanf("%d",&e[i].employee_salary);
        }
       printf("\nEntered details are");
       for(i=0;i<n;i++)
        {
            printf("\n\nCompany name of employee %d : %s",i+1,e[i].c.company_name);
            printf("\nCompany id of employee %d : %d",i+1,e[i].c.company_id);
            printf("\nName of employee %d : %s",i+1,e[i].employee_name);
            printf("\nId of employee %d : %d",i+1,e[i].employee_id);
            printf("\nSalary of employee %d : %d",i+1,e[i].employee_salary);
        }
       return 0;
  }
