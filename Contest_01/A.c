#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("K%02d", n%100);
    return 0;
}