#include<conio.h>
#include<stdio.h>
int main()
{
	int allocation[10][10],max[10][10],need[10][10],av[10],n,i,j,k,count=0;
	printf("Enter the number of processers:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the Allocation value of Processer P%d as A  B  C  D\n", i+1);
		for(j=0;j<4;j++)
		{
			scanf("%d",&allocation[i][j]);
		}
	}
	printf("\n\n\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the Max value of Processer P%d as A  B  C  D\n", i+1);
		for(j=0;j<4;j++)
		{
			scanf("%d",&max[i][j]);
		}
	}
	printf("\n\n\n");
	printf("Enter the value of Available as A B C D\n");
	for(k=0;k<4;k++)
	{
		scanf("%d",&av[k]); 
	}
	printf("\n\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<4;j++)
		{
			need[i][j]=max[i][j] - allocation[i][j];
		}
	}
	for(i=0;i%n<n;i++)
	{
		i = i%n;
			if(need[i][0] <= av[0] && need[i][1] <= av[1] && need[i][2] <= av[2] && need[i][3] <= av[3])
		{
			printf("P%d is processes:\n", i+1);
			av[0]+=allocation[i][0];
			av[1]+=allocation[i][1];
			av[2]+=allocation[i][2];
			av[3]+=allocation[i][3];
			need[i][0] = 999;
			need[i][1] = 999;
			need[i][2] = 999;
			need[i][3] = 999;
			count++;
			if(count==n)
			{
				printf("This system is in safe state\n");
				break;
			}
		}
	}	
}
