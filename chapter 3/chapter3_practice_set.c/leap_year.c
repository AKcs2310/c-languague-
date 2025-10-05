#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year conditions:
    // 1️⃣ Year divisible by 400 → leap year
    // 2️⃣ Year divisible by 4 but not by 100 → leap year
    // Otherwise → not a leap year
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
