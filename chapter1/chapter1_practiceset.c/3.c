// 3. Write a program to convert Celsius (Centigrade degrees temperature to
// Fahrenheit).
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Formula: (°C × 9/5) + 32 = °F
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
