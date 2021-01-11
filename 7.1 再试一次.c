#include<stdio.h>

int main()
{
	char str[100];
	printf("请输入一个字符串，以换行符结尾："); 
	scanf("%[^\n]",str);
	printf("你输入的字符串是：%s\n",str); 
	getchar();
	
	char name[100];
	int age;
	printf("请输入姓名和年龄，并以斜杠(/)隔开："); 
	scanf("%[^,],%d",name,&age);             // 1.不小心把 %d 漏掉了。   2.不能用 / 表示单斜杠的停止符，应该写成 // 。   3.只能用单字符作为停止符，试了下三逗号是不行的。 
	printf("你输入的姓名是：%s\n",name);                                             
	printf("你输入的年龄是：%d\n",age);
	
	return 0; 
 } 
