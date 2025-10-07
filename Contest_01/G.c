#include <stdio.h>
int main()
{
    int n, a, b, c;
    scanf("%d", &n);
    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;
    printf("%d", n + b * 100 + c * 10 + a + c * 100 + a * 10 + b);
    return 0;
}