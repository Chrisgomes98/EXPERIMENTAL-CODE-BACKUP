//considering the equation to be quadratic in nature
#include <stdio.h>
//#define f(x) (x*x-3*x)

float y(float x)
{
    return (2*x*x-x-3);
}

int sign(float k)
{
    if(k>0)
        return 1;
    else
        return -1;
}


void root(float a,float b)
{
    float mid=(a+b)/2;
    float midv=y(mid);
    float k=0.00001;

    if((midv<k)&&(midv>-k))
        {
            printf("root is %f \n",mid);

        }
    else
    {
        if(sign(y(a))==sign(y(b)))
        {
            root(a,mid);
            root(mid,b);
        }
        else
        {
            if(sign(y(a))==sign(y(mid)))
                root(mid,b);
            else
                root(a,mid);
        }
    }
}


int main()
{
float a=-3.0,b=3;
root(a,b);


return 0;

}


//this method works only for quadratic equations
//for non quadratic polynomials we need to find the local max and min will lie one root
