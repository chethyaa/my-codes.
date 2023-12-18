#include<stdio.h>
int gcd(int x,int y)
{
	int r;
	r=x%y;
	if(r==0)
	    return y;
	else
	    gcd(y,x%y);
}
int main()
{
	int fz,fm,ys,thegcd;
	printf("请分别输入需要化简的分数的分母和分子：\n"); 
	scanf("%d%d",&fm,&fz);
	if(gcd(fm,fz)==1)
	    printf("该分数已是最简形式。");
	else
	{
		thegcd=gcd(fm,fz);
		printf("最简形式为:%d/%d",fz/thegcd,fm/thegcd);
	} 
	return 0;
} 
