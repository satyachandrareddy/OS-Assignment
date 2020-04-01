#include<stdio.h>

int main()
{
	//initializations
	int num, i, a, time_quantum;
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
		printf("Enter the Arrival Time of the process - %d\t", i+1);
		scanf("%d", &arrival[i]);
	}
	
	//Time Quantum
	printf("\nEnter Time Quantum: \t");
	scanf("%d", &time_quantum);
	
	//Process calculation
	printf("\nProcess ID\t\tBurst Time\t Turnaround Time\t Waiting Time\n");
	
	//Main Problem
	for(total = 0, i = 0; x != 0;) 
      { 
            if(temp[i] <= time_quantum && temp[i] > 0) 
            { 
                  total = total + temp[i]; 
                  temp[i] = 0; 
                  counter = 1; 
            } 
            else if(temp[i] > 0) 
            { 
                  temp[i] = temp[i] - time_quantum; 
                  total = total + time_quantum; 
            }
}
