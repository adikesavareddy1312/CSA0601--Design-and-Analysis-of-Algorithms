#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("enter the number");
	scanf("%d",&n);
	if(n>0)
	{
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(s==n)
	{
		printf("perfect number");
	}
	else
	{
		printf("not perfect number");
	}
    }
    else
    {
	printf("invalid input");
    }
}
