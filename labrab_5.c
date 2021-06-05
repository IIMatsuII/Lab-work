#include <stdio.h>
#include <locale.h>

unsigned fibonacci (int n)
{
    if (n == 1 || n == 2)
        return 1;
    return fibonacci (n-1) + fibonacci (n-2);
}

unsigned fibonacci_1 (int n)
{
    int previous = -1;
    int result = 1;
    for (unsigned int i = 0; i <= n; i++)
    {
        int sum = result + previous;
        previous = result;
        result = sum;
    }
    return result;
}
int main(void)
{
    setlocale(LC_ALL, "");

    int n;
    printf("¬ведите число n: ");
    scanf("%d", &n);
    //for (int i = 1; i <= n; i++)
    printf("%d\n", fibonacci(n));
    printf("%d\n", fibonacci_1(n));
    return 0;
}