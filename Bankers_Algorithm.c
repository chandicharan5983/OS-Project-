
#include<conio.h>
#include<stdio.h>
int main()
{
	int allocation[10][10],max[10][10],need[10][10],av[10],n,i,j,k;
	printf("Enter the number of processers:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the Allocation value of Processer P%d as A  B  C  D\n",&i+1);
		for(j=0;j<4;j++)
		{
			scanf("%d",&allocation[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		printf("Enter the Max value of Processer P%d as A  B  C  D\n",&i+1);
		for(j=0;j<4;j++)
		{
			scanf("%d",&max[i][j]);
		}
	}
	printf("Enter the value of Available as A B C D\n");
	for(k=0;k<n;k++)
	{
		scanf("%d",&av[k]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<4;j++)
		{
			need[i][j]=max[i][j]-allocation[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
			if(need[i][0] <= av[0] && need[i][1] <= av[1] && need[i][2] <= av[2] && need[i][3] <= av[3])
			{
				printf("P%d is processes:\n", i+1);
			}
	}	
}
