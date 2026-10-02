#include <stdio.h>
#include <string.h>

int main() {

    char registrations[20][20];
    char search[20];
    int found = 0;

    printf("Enter 20 vehicle registration numbers:\n");

    for (int i = 0; i < 20; i++) {
        printf("Registration %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    printf("\n Vehicle Registration Numbers \n");

    for (int i = 0; i < 20; i++) {
        printf("%d. %s\n", i + 1, registrations[i]);
    }

    printf("\nEnter a registration number to search for: ");
    scanf("%19s", search);

    for (int i = 0; i < 20; i++) {
        if (strcmp(registrations[i], search) == 0) {
            found = 1;
            printf("Registration number found at position %d.\n", i + 1);
            break;
        }
    }

    if (!found) {
        printf("Registration number not found.\n");
    }

    return 0;
}