#include <stdio.h>

main () {

    int c;
    int count = 0;

    printf("type ctrl+d to enter a EOF character and exit the loop\n");

    c = getchar();

    while (c != EOF) {

        printf("c != EOF is ");
        int tempBool = c!=EOF;
        printf("%d", tempBool);
        printf("\n");

        putchar(c);
        printf("\n");

        c = getchar();
    }
    printf("EOF Entered. EOF = ");
    printf("%d",EOF);
}