#include <stdio.h>

#define IN 1
#define OUT 0

main ()
{
    int c, state, counter, i;
    int wlength[10];

    counter = 0;
    for (i = 0; i < 10; ++i)
    {
        wlength[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if ((c != '\t') || (c != '\n') || (c != ' '))
        {
            state = IN;
            ++counter;
        }

        if ((c == '\t') || (c == '\n') || (c == ' '))
        {
            if (state != OUT)
            {
                ++wlength[counter];
                counter = 0;
                state = OUT;
            }
        }
    }
    counter = 0;
    for (i = 1; i < 10; ++i)
    {
        printf("%d ", i - 1);
        while (counter < wlength[i])
        {
            printf("|");
            ++counter;
        }
        counter = 0;
        printf("\n");
    }
}