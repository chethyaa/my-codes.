#include<stdio.h>
#include<time.h>
int main()
{
	int i,j,a[10],x,n,mid,left,right;
	srand(time(0));
	for(i=0;i<10;i++)
		a[i]=rand()%100+1;
	for(i=0;i<9;i++)
		for(j=i;j<10;j++)
			if(a[i]>a[j+1])
			{
				x=a[i];
				a[i]=a[j+1];
				a[j+1]=x;
			}
	printf("\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n请输入您要查找的数字：");
	scanf("%d",&n); 
	left=0;
	right=9;
	mid=(left+right)/2;
	while(left<=right)
	{
		if(n<a[mid])
		{
		    right=mid-1;
		    mid=(left+right)/2;
	        }
		else if(n>a[mid])
		{
		    left=mid+1;
		    mid=(left+right)/2;
	        }
		else
		{
	        printf("您要查找的数字在第%d个。",mid);
			left=right+1;
	        }
	}
	return 0;
}
