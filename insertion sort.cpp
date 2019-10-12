#include <stdio.h>

int main()
{

    int a[5];
    for(int i=0;i<5;i++)
    {
        printf("please enter element");
        scanf("%d",&a[i]);
    }

    printf("sorting the  elements\n");

    //sorting

         for(int i=0;i<5;i++) //the algorithm is not working of an input of 18925
    {

        for(int j=0;j<=i&&a[j]>a[i];j++)
        {

           int temp=a[j];
           a[j]=a[i];
           a[i]=temp;
        }
    }



    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}


/*
void test()
{

int n=5;
    for (int c = 1 ; c < n; c++)
    {
    int d = c;

    while ( d > 0 && a[d-1] > a[d]) {
      int t          = a[d];
      a[d]   = a[d-1];
      a[d-1] = t;

      d--;
    }
  }

}

*/
