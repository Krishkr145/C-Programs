#include <stdio.h>
int main() {
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("Grade: A\n");
    }
    else if (marks >= 75) {
        printf("Grade: B\n");
    }
    else if (marks >= 50) {
        printf("Grade: C\n");
    }
    else if (marks >= 35) {
        printf("Grade: D\n");
    }
    else if (marks >= 0) {
        printf("Grade: F (Fail)\n");
    }
    else {
        printf("Invalid input! Marks should be between 0 and 100.\n");
    }

    return 0;
}
