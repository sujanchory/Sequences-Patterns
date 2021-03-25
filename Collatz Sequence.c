#include<stdio.h>
void main()
{
	int i;
	scanf("%d",&i);
	while(1)
	{
		printf("%d  ",i);
		if(i==1)
		{
			break;
		}
		if(i%2==0)
		{
			i=i/2;	
		}
		else 
		{
			i=i*3+1;
		}		
	}
}

