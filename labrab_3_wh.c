#include <stdio.h>
#include <math.h>

int main()
{
    double x , h, y, q;
    int s = 0;
    printf("Enter h -> ");
    scanf("%lf", &h);
    printf("x                           f(x)\n");
    printf("--------------------------------\n");
    q = 2.0 / h;
    while (s <= q)
    {
        x = s*h;
        if (x <= 1.0f)
            y = cos(x * M_PI + (x*x*x) * M_PI);
        else
            y = exp((-x)*(-x)) - (x*x) + 2*x;
        printf("%*lf              %*lf\n",10, x, 10, y);
        s++;
    }
    return 0;
}