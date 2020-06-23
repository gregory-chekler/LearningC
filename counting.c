#include <stdio.h>

/* Counts blanks and replaces */
int main(void)
{
    int c, last;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
            putchar(c);
        }
        else if (c == '\b') {
            printf("\\b");
            putchar(c);
        }
        else if (c == '\\') {
            printf("\\\\");
            putchar(c);
        }
        else if (c != '\t'){
            putchar(c);
        }
    }
    return 0;
}