#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20];
	system("shutdown -s -t 60");
	printf("�����룺������ ���������ĵ��Խ���һ���Ӻ�ػ���\n");
	again:
	 scanf("%s",input);
	 if(strcmp(input,"������")==0)
	 {
	 	system("shutdown -a");
	 } 
	 else
	 goto again;
	return 0;
}
