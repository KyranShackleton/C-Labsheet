#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int userGuesserGame(void);
int primeNumberChecker(void);
int labsheet2(void)
{
        primeNumberChecker();
        bool gameWanted = true;
        char playAgain[1000];
        while (gameWanted) {
                userGuesserGame();
                printf("Do you want to play again? (y/n)");
                scanf("%s", &playAgain);
                if (playAgain[0] == 'y') {
                        printf("\nOkay, sending you into a new game now");
                }
                else {
                        printf("\nOkay, see you next time!");
                        gameWanted = false;

                }
        }




}
int userGuesserGame(void)
{
        printf("Generating number between 1 and 10");
        int checker = 0;
        srand(time(NULL));
        int randomNumber;
        int guessedNumber;
        randomNumber = rand() % 10 + 1 ;
        printf("\nNumber generated");
        while (checker < 3) {
                printf("\nWhat is your guess");
                scanf("%d", &guessedNumber);
                if (guessedNumber > 10 || guessedNumber < 1) {
                        printf("Invalid guess - Please guess between 1 and 10");
                }
                else if (guessedNumber == randomNumber) {
                        printf("Congratulations! You got it!");
                        checker = checker + 3;
                }
                else if (guessedNumber > randomNumber) {
                        printf("Oh no! Too high!");
                        checker = checker + 1;
                }
                else if (guessedNumber < randomNumber) {
                        printf("Oh no! Too low!");
                        checker = checker + 1;
                }
        }
}

int primeNumberChecker(void)
{
        int x;
        printf("Input a number to see if it is a prime number: ");
        scanf("%d", &x);
        int amountOfPrimes = 1;
        int primeNumber[10000];
        int isItDivisible = 0;
        int yesItIsDivisible = 0;
        int isItPrime = 1;
        int tickerForFinalPart = 0;
        int modForFinalPart = 1;
        primeNumber[0] = 2;
        for (int i = 3; i < x; i++)
        {
                for (int j = 0; j < amountOfPrimes; j++)
                {
                        isItDivisible = i%primeNumber[j];
                        if (isItDivisible == 0)
                        {
                                yesItIsDivisible = 1;
                        }
                        if (yesItIsDivisible == 0)
                        {
                                primeNumber[amountOfPrimes] = i;
                                amountOfPrimes++;
                        }
                }
        }
        while (tickerForFinalPart < amountOfPrimes)
        {
               modForFinalPart = x%primeNumber[tickerForFinalPart];
               if (modForFinalPart == 0)
               {
                      isItPrime = 0;
               }
                tickerForFinalPart = tickerForFinalPart + 1;
        }
        if (isItPrime == 1) {
                printf("The number you have selected is a prime number");
        }
        else {
                printf("The number you have selected is not a prime number");
        }
}
