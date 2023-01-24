#include<stdio.h>
int main()
{
	int  n,i;
	int sum=0;
	printf("Enter The maximun value of series:");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("Sum Of The Series: ");
	for(i=1;i<=n;i++)
	{
		if(i!=n)
		{
			printf("%d + ",i);
		}
		else
		{
			printf("%d = %d",i,sum);
		}
	}
	
	return 0;
}
