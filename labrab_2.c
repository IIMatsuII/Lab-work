#include <stdio.h>
#include <math.h>

int main(void){
    double x;
    printf("Enter x -> ");
    scanf("%lf", &x);
    if (x > -1  && x < 1)
    {
        double y = log((1+x)/(1-x));
        double z = (y*y*y)/(1+y);
        printf("y(x) = %lf\nz(y) = %lf\n", y, z);
    }
    return 0;
}