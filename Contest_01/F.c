#include <stdio.h>
#include <math.h>
#define PI (3.14159265358979323846)

int main()
{
    double r;
    scanf("%lf", &r);
    printf("%.6lf %.6lf", PI * r * r, 2 * PI * r);
    return 0;
}