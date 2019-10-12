#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n=6;
    int *p=(int*)malloc(n*sizeof(int));
    printf("using malloc");
    for(int i=0;i<n-1;i++)
        scanf("%d\n",p+i);

    for(int i=0;i<n;i++)
        printf("%d\n",*p+i);

    printf("usng calloc");
    int *k=(int*)calloc(n,sizeof(int));

        for(int i=0;i<n;i++)
        scanf("%d\n",k+i);

    for(int i=0;i<n;i++)
        printf("%d\n",*k+i);

    printf("using realloc");

        p=(int*)realloc(p,(n+n)*sizeof(int));
        for(int i=0;i<n-1;i++)
        scanf("%d\n",p+n+i);

    for(int i=0;i<n*2-1;i++)
        printf("%d\n",*p+i);
}
