#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    int a, b, sum = 0;
    printf("Enter a -> ");
    scanf("%d", &a);
    printf("Enter b -> ");
    scanf("%d", &b);

    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }
    
    if (sum > b)
    {
        printf("%d", sum);
    }
    else if (sum == b)
    {
        printf("Sum = %d", b);
    }
    else
    {
        printf("%d", sum + b);
    }

    return 0;

}