#include <stdio.h>

int main() {
    float salaries[50];
    float total = 0;
    float average;
    float highest; 
    float lowest;
    float searchSalary;
    int found = 0;

    for (int i = 0; i < 50; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);

        total += salaries[i];

        if (i == 0) {
            highest = salaries[i];
            lowest = salaries[i];
        }

        if (salaries[i] > highest) {
            highest = salaries[i];
        }

        if (salaries[i] < lowest) {
            lowest = salaries[i];
        }
    }

    average = total / 50;

    printf("\n EMPLOYEE SALARIES\n");
    for (int i = 0; i < 50; i++) {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    printf("\n SALARY REPORT\n");
    printf("Average Salary : %.2f\n", average);
    printf("Highest Salary : %.2f\n", highest);
    printf("Lowest Salary  : %.2f\n", lowest);

    printf("\nEnter salary to search for: ");
    scanf("%f", &searchSalary);

    for (int i = 0; i < 50; i++) {
        if (salaries[i] == searchSalary) {
            printf("Salary found at Employee %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Salary not found.\n");
    }

    return 0;
}