#include <stdio.h>

#define FIRST 1
#define NON 1

int main ()
{
    int c, prev;

    prev = NON;
    while ((c = getchar()) != EOF)
    {
        if ((c != ' ') || (c != '\n') || (c != '\t'))
        {
            putchar(c);
            prev = FIRST;
        }
        if (((c == ' ') || (c == '\t')) && (prev == FIRST)) {
            putchar('\n');
            prev = NON;
        }
    }
    return 0;
}