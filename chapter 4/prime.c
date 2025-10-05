#include <stdio.h>
#include <math.h>

int main() {
    int n, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    // Check divisibility up to sqrt(n) for efficiency
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
