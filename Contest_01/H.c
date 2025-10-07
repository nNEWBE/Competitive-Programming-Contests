#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    long long int c = (a + b - 1) / b;
    printf("%lld\n", c);

    return 0;
}
