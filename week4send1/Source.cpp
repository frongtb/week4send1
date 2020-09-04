#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num > 0)
    {
        if (num % 2 == 0)
        {
            printf("sqrt2 = %f", sqrt(num));
            return 0;
        }
        else
        {
            printf("power = %.0f", pow(num, 2));
            return 0;
        }
    }
    return 0;
}