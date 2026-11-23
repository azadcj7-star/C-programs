#include <stdio.h>
int main()
{
	int num,limit,i;
	
	printf("Enter number: ");
	scanf("%d",&num);
	
	printf("How long do you need a table? ");
	scanf("%d",&limit);
	
	for(i=1; i<=limit; i++)
	{
		printf("%d * %d = %d\n",num,i,num * i);
	}
	return 0;
}
