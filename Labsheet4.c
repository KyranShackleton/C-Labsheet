#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int palindromeTester(void);


int labsheet4(void) {
    palindromeTester();
}

int palindromeTester(void) {
    char userInput[1000];
    printf("Please enter the word or phrase that you want tested to see if it a palindrome\n");
    scanf("%s", userInput);
    for (int i = 0; i < strlen(userInput); i++) {
        if (ispunct(userInput[i]))
        {
            userInput.erase(i--, 1);
            len = str.size();
        }
        else {
            userInput[i] = tolower(userInput[i]);
            printf("%s", userInput, "\n");
        }

    }
}