#include<stdio.h>

int main()
{
	char str[100];
	printf("������һ���ַ������Ի��з���β��"); 
	scanf("%[^\n]",str);
	printf("��������ַ����ǣ�%s\n",str); 
	getchar();
	
	char name[100];
	int age;
	printf("���������������䣬����б��(/)������"); 
	scanf("%[^,],%d",name,&age);             // 1.��С�İ� %d ©���ˡ�   2.������ / ��ʾ��б�ܵ�ֹͣ����Ӧ��д�� // ��   3.ֻ���õ��ַ���Ϊֹͣ�����������������ǲ��еġ� 
	printf("������������ǣ�%s\n",name);                                             
	printf("������������ǣ�%d\n",age);
	
	return 0; 
 } 
