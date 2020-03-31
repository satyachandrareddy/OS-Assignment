#include<stdio.h>

int main()
{
	//initializations
	int num, i, a;
	int arrival[50], burst[50];
	
	//No. of processes 
	printf("Enter Number of Processes to be calculated: \t");
	scanf("%d", &num);
	a = num;
	
	//Details of each processes
	for(i = 0; i <= a-1; i++)
	{
		printf("\nEnter details of the process - %d:\n", i+1);
		printf("Enter the Burst Time of the process - %d\t", i+1);
		scanf("%d", &burst[i]);
		printf("\nEnter the Arrival Time of the process - %d\t", i+1);
		scanf("%d", &arrival[i]);
	}
}
