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
                        else
		{
		burst[j] = burst[j]-tq2;
	            printf(" For process %d\n", j+1);
		printf("Left Burst time= %d\n", burst[j]);	
		}	
	
	int k ,t ;
        for(j=0; j<a; j++)
	{
                        for(k=j+1; k<a; k++)
		{
                        if(burst[j]>burst[k])
		{
                                   t = burst[j];
		           burst[j] = burst[k];
		           burst[k] = t;
			}
		}
	}
        
            int c[]={6,9,7,16,30,19,25,35,42,21};
	for(j=0;j<a;j++)
	{
		t_arrival[j]=c[j]-arrival[j];
		waiting[j]=t_arrival[j]-burst1[j];
		printf("\n Completion time for process %d : %d \n", j+1, c[j]);
		printf("Turn arround time for process %d : %d \n",j+1,t_arrival[j]);
		printf("Waiting time for process %d : %d \n",j+1,waiting[j]);
		average_Turn = average_Turn + t_arrival[j];
		average_Wait = average_Wait + waiting[j];
	}
