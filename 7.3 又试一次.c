#include<stdio.h>

int main()
{
	char str1[100];
	printf("������һ���ַ�����������8��β��");
	scanf("%[^8]",str1);
	printf("��������ַ����ǣ�%s\n",str1);
	getchar();    // ��һ��getchar�Ե�8���ڶ����Ե����� \n �� 
	getchar();
	
	
	
	char str2[100];
	int age;
    printf("���������������䣬��*�ָ���");
	scanf("%[^*],%d",str2,&age);                    // ��scanf��������age��ʱ��ageҪ��ȡַ���š� 
	printf("������������ǣ�%s\n",str2);            //  ���⣬Ŀǰ���˶������⣬ 
	printf("������������ǣ�%d\n",age);

	return 0; 	
 } 
