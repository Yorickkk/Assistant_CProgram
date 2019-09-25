#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>



int main()

{

	int number; /* 用户输入的号数*/

	int temp1; /* 第一个临时整数*/

	int temp2; /* 第二个临时整数*/



	scanf("%d", &number); /* 读入输入的整数*/



	printf("%d ", number / 10000); /* 输出最左边数字*/

	temp2 = number % 10000;



	printf("%d ", temp2 / 1000);

	temp1 = temp2 % 1000;



	printf("%d ", temp1 / 100);

	temp2 = temp1 % 100;



	printf("%d ", temp2 / 10);

	temp1 = temp2 % 10;



	printf("%d\n", temp1); /* 输出最右边数字*/



	return 0;



} /* end main */