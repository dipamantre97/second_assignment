#include<stdio.h>
int main()
{
	int a=1,b=1,n;
	printf("enter value of n=");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=a;b++)
		printf("%d",a);
	}
}

/* output
enter value of n=4
1223334444
*/
