#include <stdio.h>
#include <stdlib.h>

int main()
{

    int t;

    scanf("%d\n",&t);

    while(t--)
    {
        int n;

        scanf("%d\n",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {

            scanf("%d\n",&a[i]);

        }


        for (int c = 0 ; c < n - 1; c++)
        {
            for (int d = 0 ; d < n - c - 1; d++)
            {
                if (a[d] > a[d+1]) /* For decreasing order use < */
                {
                    int s       = a[d];
                    a[d]   = a[d+1];
                    a[d+1] = s;
                }
            }
        }
        int s=0;

        for(int i=0;i<n;i++)
        {

            if(s>=a[i])
                s++;
        }

        printf("%d\n",s);
    }
}





