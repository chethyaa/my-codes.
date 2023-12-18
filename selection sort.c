#include<stdio.h>
#include<time.h>
int main()
{
	int i,j,a[10],x;
	srand(time(0));
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100+1;
		printf("%d ",a[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=i;j<10;j++)
		{
			if(a[i]>a[j+1])
			{
				x=a[i];
				a[i]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
