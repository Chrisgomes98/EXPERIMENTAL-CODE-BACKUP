#include <stdio.h>

int equal(int a,int b);
int main()
{
    int a,b;
    a=3;
    b=4;
    //if(lessthan(a,b))
      //  printf("a is less");
    if(equal(a,b))
        printf("equal");
    else
        printf("not equal");

    //else
      //  printf("b is greater");
    return 0;
}

lessthan(int a,int b)
{

}
int equal(int a,int b)
{

    if(a^b)
        return 0;
    else
        return 1;
}
