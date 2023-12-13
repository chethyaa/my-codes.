#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,j,m,a[10];
	srand(time(0));
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100+1;
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=9;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
		    {
		    	m=a[j];
		    	a[j]=a[j+1];
		    	a[j+1]=m;
			}
		}
	}
	for(i=0;i<10;i++)
	{
	    printf("%d ",a[i]);
    }
	return 0;
	
}
