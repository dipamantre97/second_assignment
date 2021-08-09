#include<stdio.h>
int main()
{
	int min,max,i;
	printf("enter min and max value\n");
	scanf("%d%d",&min,&max);
	printf("even nos bet min,max\n");
	for(i=min;i<=max;i++)
	{
		if(i%2==0)
		printf(" %d",i);
	
		
	}
	printf("\nodd nos bet min,max\n");
	for(i=min;i<=max;i++)
	{
		if(i%2!=0)
		printf(" %d",i);
	}
}

