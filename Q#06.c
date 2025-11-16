#include<stdio.h>
int main()
{
	int n,i;
	printf("MULTIPLICATION TABLES\n");
	printf("_____________________\n");
	
	printf("\nEnter the number you want the multiplication table of: ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d x %d = %d\n",n, i ,n*i);
	}
	
	return 0;
}
