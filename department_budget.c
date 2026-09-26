#include <stdio.h>

int main() {
    float budgets[10];
    float total = 0;
    float average;
    int i;
    int j;
    float temp;

    printf("Enter budgets for 10 departments:\n");
    for(i = 0; i < 10; i++) {
        printf("Department %d budget: ", i + 1);
        scanf("%f", &budgets[i]);
        total += budgets[i];
    }

    printf("\nDepartment Budgets:\n");
    for(i = 0; i < 10; i++) {
        printf("Department %d: %.2f\n", i + 1, budgets[i]);
    }

    average = total / 10;

    printf("\nTotal Budget: %.2f\n", total);
    printf("Average Budget: %.2f\n", average);

    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++) {
            if(budgets[i] > budgets[j]) {
                temp = budgets[i];
                budgets[i] = budgets[j];
                budgets[j] = temp;
            }
        }
    }

    printf("\nBudgets Sorted from Lowest to Highest:\n");
    for(i = 0; i < 10; i++) {
        printf("%.2f ", budgets[i]);
    }

    printf("\n");

    return 0;
}