#include<stdio.h>
unsigned long long fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	printf("%d",fact(n));
}
