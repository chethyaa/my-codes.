#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int i,j,m,a[10],b[10],c[20];
	srand(time(0));
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100+1;
		b[i]=rand()%100+1;
	}
	printf("数组a为：\n");
	for(i=0;i<10;i++)
	    printf("%d ",a[i]);
	printf("\n");
	printf("数组b为：\n");
	for(i=0;i<10;i++)
	    printf("%d ",b[i]);
	printf("\n");
	for(i=0;i<9;i++)
		for(j=i+1;j<10;j++)
			if(a[i]>a[j])
			{
			    m=a[i];
				a[i]=a[j];
				a[j]=m;	
			}
	for(i=0;i<9;i++)
		for(j=i+1;j<10;j++)
			if(b[i]>b[j])
			{
			    m=b[i];
				b[i]=b[j];
				b[j]=m;	
			}
	printf("排序后的数组a为：\n");
	for(i=0;i<10;i++)
	    printf("%d ",a[i]);
	printf("\n");
	printf("排序后的数组b为：\n");
	for(i=0;i<10;i++)
	    printf("%d ",b[i]);
	printf("\n");
	for(i=0;i<20;i++)
		if(i<10)
		    c[i]=a[i];
		else
		    c[i]=b[i-10];
	for(i=0;i<19;i++)
		for(j=i+1;j<20;j++)
			if(c[i]>c[j])
			{
			    m=c[i];
				c[i]=c[j];
				c[j]=m;	
			}
	printf("将数组a和数组b整合后排序得到的数组c为：\n");
	for(i=0;i<20;i++)
	    printf("%d ",c[i]);
	return 0;
} 
