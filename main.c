#include <stdio.h>

int main(void) {
    printf("This is meant to be the first line for a chocolate cake recipe\n");
    printf("\n\nBut I cba just want to make sure this works");
    printf("\n\nThey want an input now, string first");
    char word[100];
    int number;
    char letter;
    scanf("%s", &word);
    printf("\n\ninteger second");
    scanf("%d", &number);
    printf("\n\ncharacter third");
    scanf("%c", &letter);
    printf("\nFinished - string is: %s", word);
    printf("\nNumber is %d", number);
    printf("\nCharacter third is: %c", letter);
    return 0;
}