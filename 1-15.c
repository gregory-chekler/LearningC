#include <stdio.h>

float CtoF(float x);

float main()
{
    float celcius, x;
    scanf("%6f", &x);
    celcius = CtoF(x);
    printf("The degrees in celcius is %.6f degrees\n", celcius);
    return 0;
}

float CtoF(float fahr)
{
    float celcius;

    celcius = (5.0/9.0) * (fahr-32.0);
    return celcius;
}