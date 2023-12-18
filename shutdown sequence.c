#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20];
	system("shutdown -s -t 60");
	printf("请输入：我是猪 。否则您的电脑将在一分钟后关机。\n");
	again:
	 scanf("%s",input);
	 if(strcmp(input,"我是猪")==0)
	 {
	 	system("shutdown -a");
	 } 
	 else
	 goto again;
	return 0;
}
