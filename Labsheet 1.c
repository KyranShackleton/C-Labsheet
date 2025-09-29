#include <stdio.h>

int labsheet1(void) {
    printf("This is meant to be the first line for a chocolate cake recipe\n");
    printf("\n\nBut I cba just want to make sure this works");
    printf("\n\nThey want an input now, string first");
    char word[100];
    int number;
    scanf("%s", &word);
    printf("\nFinished - string is: %s", word);
    printf("\n\ninteger second");
    scanf("%d", &number);
    printf("\nNumber is %d", number);
    return 0;
}