#include <stdio.h>
int main()
{
    int a, b, r, d;
    scanf("%d %d", &a, &b);
    printf("%d %d %.5lf", a / b, a % b, a*1.0 / b);
    return 0;
}