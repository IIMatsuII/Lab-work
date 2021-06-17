#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y, h, q;
    int s = 0;
    printf("Enter h -> ");
    scanf("%lf", &h);
    printf("x                  f(x)\n");
    printf("----------------------\n");
    q = 2.0 / h;
    for (x; s <= q; x += h)
    {
        x = s*h;
        if (x <= 1.0f)
        {
            y = cos(x * M_PI + (x*x*x) * M_PI);
            printf("%lf%20lf\n", x, y);
        }
        else
        {
            y = exp((-x)*(-x)) - (x*x) + 2*x;
            printf("%lf%20lf\n", x, y);
        }
    s++;
    }

    return 0;
}