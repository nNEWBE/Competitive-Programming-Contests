#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s1, s2, t1, t2, temp;
    scanf("%c%c%c%c%c", &s1, &s2, &temp, &t1, &t2);

    int p = abs(s1 - s2);
    if (p > 2)
        p = 5 - p;

    int q = abs(t1 - t2);
    if (q > 2)
        q = 5 - q;

    if (p == q)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}