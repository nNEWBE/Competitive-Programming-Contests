#include <stdio.h>
int main(){
    int k;
    scanf("%d", &k);
    if(k<3)
        printf("GOLD\n");
    else if(k<6)
        printf("SILVER\n");
    else
        printf("BRONZE\n");
    return 0;
}