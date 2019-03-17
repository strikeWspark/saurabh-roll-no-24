
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