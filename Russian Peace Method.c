#include <stdio.h>
int RPM(int a,int b)
{
	int res=0;
	while(a>0)
	{
		if(a%2!=0)
		{
			res +=b;
		}
		a/=2;
		b*=2;
	}
	return res;
}
int main()
{
	int a,b,res;
	scanf("%d%d",&a,&b);
	res=RPM(a,b);
	printf("%d",res);
	return 0;
}
	

