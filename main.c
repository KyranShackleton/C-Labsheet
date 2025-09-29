#include <stdio.h>
int labsheet1(void);
int labsheet2(void);
int labsheet3(void);
int labsheet4(void);

int main(void) {

    int sheetNumber;
    printf("Which lab sheet do you want\n");
    scanf("%d", &sheetNumber);
    switch (sheetNumber) {
        case 1:
            labsheet1();
            break;
        case 2:
            labsheet2();
            break;
        case 3:
            labsheet3();
            break;
        case 4:
            labsheet4();
            break;

    }

}
