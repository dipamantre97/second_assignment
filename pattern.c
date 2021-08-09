#include<stdio.h>
int main()
{
	int a,b,n,s;
	printf("enter n value");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		for(s=a;s<n;s++)
		printf(" ");
		for(b=1;b<=(2*n-1);b++)
		{
			if(a==n||b==1||b==2*a-1)
			printf("-");
			else
			printf(" ");
			
		}
		printf("\n");
	}
	return 0;
}
