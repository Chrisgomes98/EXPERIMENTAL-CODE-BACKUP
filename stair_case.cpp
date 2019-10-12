#include <stdio.h>

int count(int k)
{
    if(k==0||k==1)
        return 1;
    else
        return count(k-1)+count(k-2);
}


int main()
{

    int n;
    printf("enter the number of stares");
    scanf("%d",&n);
    int k=count(n);
    printf("%d is the number of ways in which stares can  be traversed",k);
    return 0;
}

