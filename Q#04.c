#include<stdio.h>
int main()
{
	int marks,totalCount=0;
	float sum,average;
	
	printf("MARKS AVERAGE CALCULATION\n");
	printf("________________________-\n");
	
	printf("Enter marks of the student(-1 to terminate):\n");
	
	while(1)
	{
	scanf("%d",&marks);
	if(marks==-1)
	  break;
	else
    {
	  sum+=marks;
	  totalCount++;
    }
	  average=sum/totalCount;
    }
	if(totalCount>0)
	  printf("\nThe average of the marks entered is:%.2f",average);
	else
	  printf("\nMarks can not be entered.");
	  
	return 0;
}
