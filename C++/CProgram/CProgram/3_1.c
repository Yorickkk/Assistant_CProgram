#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()

{

	int x; /* �����һ����*/

	int y; /* ����ڶ�����*/

	scanf("%d %d", &x, &y); /* ͨ�����̶�������*/

						 /* ������*/

	printf("%d %d %d %d %d\n", x + y, x * y, x - y, x / y, x % y);

	return 0;

} /* main��������*/