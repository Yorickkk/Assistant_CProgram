#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()

{

	int x; /* 定义第一个数*/

	int y; /* 定义第二个数*/

	scanf("%d %d", &x, &y); /* 通过键盘读入两数*/

						 /* 输出结果*/

	printf("%d %d %d %d %d\n", x + y, x * y, x - y, x / y, x % y);

	return 0;

} /* main函数结束*/