#include <stdio.h>
int main()
{

    int r, r1, r2, d, d1, d2;
    scanf("%d %d %d %d", &r1, &d1, &r2, &d2);

    r = r1 + r2;
    d = d1 + d2;
   
    if(r > d) printf("Dominater");
    else printf("Everule");

    return 0;
}