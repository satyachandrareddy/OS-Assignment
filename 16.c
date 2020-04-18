#include<stdio.h>
#include<stdlib.h>

int main()
{
	//initializations
	int num, i, a, time_quantum, total = 0, counter = 0, wait_time = 0, turnaround_time = 0;
	int arrival[50], burst[50], temp[50];
	float average_wait_time, average_turnaround_time;

	
	//No. of processes 
	printf("Enter Number of Processes to be calculated: ");
	scanf("%d", &num);
	a = num;
	printf("\n");
	
	//Details of each processes
	if(a == 0)
	{
		printf("Invalid");
		exit(1);
	}
	
	for(i = 0; i<a; i++)
	{
		printf("Enter arrival time of the Process P%d: ",i+1);
		scanf("%d", &arrival[i]);
	}
	printf("\n");
	
	for(i = 0; i<a; i++)
	{
		printf("Enter burst time of the Process P%d: ",i+1);
		scanf("%d", &burst[i]);
		temp[i] = burst[i];
	}
	
	//Time Quantum
	printf("\nEnter Time Quantum: \t");
	scanf("%d", &time_quantum);
	
	//Process calculation
	printf("\nProcess ID\t\tBurst Time\t Turnaround Time\t Waiting Time\n");
	
	//Main Problem
	for(total = 0, i = 0; a != 0;) 
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
            if(temp[i] == 0 && counter == 1) 
            { 
                  a--; 
                  printf("\nProcess[%d]\t\t%d\t\t %d\t\t\t %d", i + 1, burst[i], total - arrival[i], total - arrival[i] - burst[i]);
                  wait_time = wait_time + total - arrival[i] - burst[i]; 
                  turnaround_time = turnaround_time + total - arrival[i]; 
                  counter = 0; 
            } 
            if(i == num-1)
            {
            	i = 0;
			}
       		else if(arrival[i+1] <= total)
       		{
       			i++;
			}
			else
			{
				i = 0;
			}
      } 
      
      //Calcultion of averages
      average_wait_time = wait_time * 1.0 / num;
      average_turnaround_time = turnaround_time * 1.0 / num;
      printf("\n\nTotal Waiting Time:\t%d", wait_time); 
      printf("\n\nAverage Waiting Time:\t%f", average_wait_time); 
      printf("\nAvg Turnaround Time:\t%f\n", average_turnaround_time); 
      return 0; 
}
