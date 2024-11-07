#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int number, guess, attempt=1;
    srand(time(0));
    number = rand() % 100 + 1;

    printf("Number Guessing Game(1 to 100)\n");

    do
    {
    printf("Enter the Number: ");
    scanf("%d", &guess);
    if (guess>number)
    {
        printf("Enter Lower Number!\n");
    }
    else if (guess<number)
    {
        printf("Enter Higher Number!\n");
    }
    else{
        printf("Congratulations! You Guessed it.\n");
        printf("You Guessed it in %d attempts\n", attempt);
    }
    attempt++;
    } while (guess!=number);
    
    return 0;
}