#include <stdio.h>
int main()
{
    int o, n;
    scanf("%d %d", &o, &n);

    if (o < n)
        printf("Old\n");
    else if (o > n)
        printf("New\n");
    else
        printf("Same\n");

    return 0;
}