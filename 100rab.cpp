#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int j , a;
	printf("\nEnter number of processes: ");
	scanf("%d",&a);
	int arrival[a];
	int burst[a],burst1[a];
	int waiting[a];
	int t_arrival[a];
	int tq1=1;
	int tq2=2;
	int average_Turn=0;
	int average_Wait=0;
	printf("\n Enter arrival time of processes: \n");
	for(j=0; j<a; j++)
	{  
                        printf("For processes %d :",j+1);
		scanf("%d",&arrival[j]);
	}
	printf("\n Enter burst time for processes: \n");
	for(j=0; j<a; j++)
	{
		printf("For processes %d:",j+1);
		scanf("%d",&burst[j]);
		burst1[j]=burst[j];	
	}
	for(j=0; j<a; j++)
	{  
	if(arrival[j]<=tq1+arrival[j-1])
	{
	
		burst[j]=burst[j]-tq1;
		printf("\n For process %d\n", j+1);
		printf("Left Burst time=%d\n",burst[j]);}
		else
		{
		burst[j]=burst[j]-tq1;
	            printf("For process %d\n",j+1);
		printf("Left Burst time= %d\n", burst[j]);	
		}
                         }
	for(j=0; j<a; j++)
	{
	if(arrival[j]<=tq2+arrival[j-1])
	{
                        burst[j]=burst[j]-tq2;
		printf("\n For process %d\n",j+1);
		printf("Left Burst time= %d\n",burst[j]);
              }
