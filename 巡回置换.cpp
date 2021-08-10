#include <stdio.h>
int main()
{
	int x,k;
	int p[7]={4,7,3,2,1,5,6};
	scanf("%d",&k);
	if(k<=7)
	{
		x=k-1;
		printf("%d\n",x);
		x=p[x];
		if(x!=k+1)
		{
		    x=p[x];
		    printf("%d\n",x);
		}
	}
	return 0; 
}
