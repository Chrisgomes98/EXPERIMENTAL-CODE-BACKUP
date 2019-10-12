#include <stdio.h>
int fact(int n);
int main()
{
    int n=0;
    printf("enter the number");
    scanf("%d",&n);
    n=fact(n);
    printf("%d",n);
    return 0;
}

int fact(int n)
{

    if(n<=1)
        return 1;
    else
        return n*fact(n-1);
}
