// 4. Write a program to calculate simple interest for a set of values representing
// principal, number of years and rate of interest.
#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Formula: SI = (P × R × T) / 100
    simple_interest = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f\n", simple_interest);

    return 0;
}
