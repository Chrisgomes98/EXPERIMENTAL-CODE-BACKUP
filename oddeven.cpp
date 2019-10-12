#include <stdio.h>

int main()
{

    int k;
    printf("enter a number");
    scanf("%d",&k);
    if(k&1)
        printf("odd");
    else
        printf("even");

return 0;
}
