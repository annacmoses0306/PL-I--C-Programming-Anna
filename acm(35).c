#include <stdio.h>

struct Employee
{
    int emp_id;
    char name[50];
    float salary;
};

int main()
{
    int n, i;

    printf("Enter the number of employees: ");

    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid number of employees.\n");
        return 1;
    }

    struct Employee emp[n];

    // Accept employee details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d:\n", i + 1);

        printf("Enter Employee ID: ");
        if (scanf("%d", &emp[i].emp_id) != 1)
        {
            printf("Invalid Employee ID.\n");
            return 1;
        }

        printf("Enter Employee Name: ");
        if (scanf(" %49[^\n]", emp[i].name) != 1)
        {
            printf("Invalid Employee Name.\n");
            return 1;
        }

        printf("Enter Employee Salary: ");
        if (scanf("%f", &emp[i].salary) != 1)
        {
            printf("Invalid Salary.\n");
            return 1;
        }
    }

    // Display employee details
    printf("\n========== Employee Details ==========\n");

    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee ID: %d\n", emp[i].emp_id);
        printf("Employee Name: %s\n", emp[i].name);
        printf("Employee Salary: %.2f\n", emp[i].salary);
    }

    return 0;
}
