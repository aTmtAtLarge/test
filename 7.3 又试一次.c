#include<stdio.h>

int main()
{
	char str1[100];
	printf("请输入一个字符串，以数字8结尾：");
	scanf("%[^8]",str1);
	printf("你输入的字符串是：%s\n",str1);
	getchar();    // 第一个getchar吃掉8，第二个吃掉换行 \n 。 
	getchar();
	
	
	
	char str2[100];
	int age;
    printf("请输入姓名和年龄，以*分隔：");
	scanf("%[^*],%d",str2,&age);                    // 用scanf输入整形age的时候，age要加取址符号。 
	printf("你输入的姓名是：%s\n",str2);            //  另外，目前除了逗号以外， 
	printf("你输入的年龄是：%d\n",age);

	return 0; 	
 } 
