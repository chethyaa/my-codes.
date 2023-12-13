#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,j,a[4][5];
	srand(time(0));
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			a[i][j]=rand()%100+1;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	return 0;
	
}
