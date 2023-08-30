#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n>0)
	{
	int i,num=1;
	int c;
	while(c<n)
	{
		int s=0;
		for(i=1;i<=num/2;i++)
		{
			if(num%i==0)
			{
				s=s+i;
			}
		}
			if(s==num)
			{
			printf("%d\n",num);
			c++;
			}
		num++;
	}
}
else
{
	printf("invalid input");
}
}
