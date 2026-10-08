#include <stdio.h>

int main() {
    int n, i, marks, total = 0;
    float percentage;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    // Loop to enter marks for each subject
    for (i = 1; i <= n; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%d", &marks);

        total += marks;
    }

    // Calculate percentage
    percentage = (float)total / (n * 100) * 100;

    // Display total and percentage
    printf("\nTotal Marks = %d/%d", total, n * 100);
    printf("\nPercentage = %.2f%%", percentage);

    // Conditional statements for grade
    if (percentage >= 90) {
        printf("\nGrade = A+");
    } else if (percentage >= 80) {
        printf("\nGrade = A");
    } else if (percentage >= 70) {
        printf("\nGrade = B");
    } else if (percentage >= 60) {
        printf("\nGrade = C");
    } else if (percentage >= 50) {
        printf("\nGrade = D");
    } else {
        printf("\nGrade = F");
    }

    return 0;
}