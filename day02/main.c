#include<stdio.h>
#include<stdlib.h>

/*
	�ڶ����ѧϰ
	scanf���÷���ע������
*/

int main()
{
	int i;
	char c;
	scanf_s("%d", &i);
	printf("i = %d\n", i);
	scanf_s("%c", &c);
	printf("c = %c\n", c);
	char s = '\0';
	printf("%d", s);
}