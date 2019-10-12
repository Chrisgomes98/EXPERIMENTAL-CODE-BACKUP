#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int t;
	scanf("%d",&t);

	for(int i=1;i<=t;i++)
	{
	    int n;
	    scanf("%d",&n);

	    for(int j=1;j<n;j+=2)
	    {
	        if(j<=(n-3))
            {
                printf("%d %d ",j+1,j);
            }
            else{
	        if(n%2==0)
	        {
	            printf("%d %d ",j+1,j);

	        }
	        else
	        {
	            printf("%d %d %d ",j+1,j+2,j);
	        }
	    }
	    }
	}
}
