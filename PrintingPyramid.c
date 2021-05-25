#include<stdio.h>
int main()
{
	int n,i,j,k,c=40;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=c-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}	
}
