 #include<stdio.h>
int main()
{
	int a=0;
	int b=1;
	int c[100],s=0;
	int n,i;
	printf("enter the number");
	scanf("%d",&n);
	c[0]=0;
	c[1]=1;
	for(i=2;i<=2*n;i++)
	{
		c[i]=c[i-1]+c[i-2];
		if(i%2==0)
		{
		s=s+c[i];
		}
	}
	printf("%d",s);
	
}
