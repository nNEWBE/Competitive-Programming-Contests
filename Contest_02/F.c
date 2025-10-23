#include <stdio.h>
int main()
{

    int w, h;
    scanf("%d %d", &w, &h);
    if (w >= 60 && h <= 130)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}