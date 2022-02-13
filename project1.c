#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int generated_number, i = 0, guessed_number;
    srand(time(0));
    generated_number = rand() % 100 + 1; // generates numbers between 1 to 100 (including 1 and 100)
    do
    {
        i++;
        printf("Guess the generated number by the computer\n");
        scanf("%d", &guessed_number);
        if (guessed_number == generated_number)
        {
            printf("Congratulations! you guessed the correct number, your number of guesses were %d", i);
            break;
        }
        else if (guessed_number > generated_number)
        {
            printf("Sorry! you guessed a little higher, continue guessing\n");
            continue;
        }
        else
        {
            printf("Sorry! you guessed a little lower, continue guessing\n");
            continue;
        }
    } while (i > 0);

    return 0;
}