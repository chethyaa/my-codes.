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
	printf("��ֱ�������Ҫ����ķ����ķ�ĸ�ͷ��ӣ�\n"); 
	scanf("%d%d",&fm,&fz);
	if(gcd(fm,fz)==1)
	    printf("�÷������������ʽ��");
	else
	{
		thegcd=gcd(fm,fz);
		printf("�����ʽΪ:%d/%d",fz/thegcd,fm/thegcd);
	} 
	return 0;
} 
