#include <stdio.h>

main()
{
    int c;
    while (((c = getchar()) != EOF) == (1)) {
        printf("The EOF value is: %d.\n", c);
    }
}