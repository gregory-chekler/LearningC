//
// Created by Gregory Chekler on 5/29/20.
//

#include <stdio.h>

main()
{
    double nc;
    nc = 0;
    while  (getchar() != EOF)
    {
    ++nc;
    }
    printf("%.0f\n", nc);
    return 0;
}