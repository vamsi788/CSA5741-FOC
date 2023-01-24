#include <stdio.h>
int main()
{
	int i, n;
	printf("Print all odd numbers till: ");
	scanf("%d",&n);
	printf("odd numbers from 1 to %d are: \n",n);
	
	for(i=1; i<=n; i++)
	{
		if(i%3 ==0)
		{
		   printf("%d\n",i);
	    }
	}
	
	return 0;
}
