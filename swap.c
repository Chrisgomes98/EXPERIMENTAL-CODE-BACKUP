#include <stdio.h>

int main()
{

    int a,b;
    a=2;
    b=3;

    printf("%d %d \n",a,b);

    a=a^b;
    b=a^b;
    a=a^b;

    printf("%d %d \n",a,b);
}
