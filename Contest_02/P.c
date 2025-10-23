#include <stdio.h>
int main()
{

    int g1, a1, g2, a2;
    scanf("%d %d %d %d", &g1, &a1, &g2, &a2);

    int m = g1 * 2 + a1;
    int r = g2 * 2 + a2;

    if (m > r)
        printf("Messi\n");
    else if (m < r)
        printf("Ronaldo\n");
    else
        printf("Equal\n");

    return 0;
}