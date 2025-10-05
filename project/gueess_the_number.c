#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#include <math.h>
int main()
{
    srand(time(0));
    int random_number = (rand() % 100) + 1;
    printf("%d", random_number);
    int guess_the_number;
    printf("enter the guess number \n");
    scanf("%d", &guess_the_number);
    if (guess_the_number == random_number)
    {

        printf("the number you guessed %d and the random number  %d is matched", guess_the_number, random_number);
    }

    while (guess_the_number != random_number)
    {

        if (guess_the_number == random_number)
        {

            printf("the number you guessed %d and the random number  %d is matched", guess_the_number, random_number);

            break;
        }
        else if (guess_the_number > random_number)
        {

            printf("guess low");
            printf("enter the guess number \n");
            scanf("%d", &guess_the_number);
        }
        else
        {
            printf("guess high\n");
            printf("enter the guess number \n");
            scanf("%d", &guess_the_number);
        }
    }
    printf("🎉 Congratulations! You guessed it right.\n");
    printf("The number was %d.\n", random_number);
}
