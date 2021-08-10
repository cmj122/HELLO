#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int F[n];
	F[0]=1,F[1]=1;
	for(i=2;i<=(n-1);i++)
	F[i]=F[i-1]+F[i-2];
	for(i=0;i<=(n-1);i++)
	printf("%3d",F[i]);
}
