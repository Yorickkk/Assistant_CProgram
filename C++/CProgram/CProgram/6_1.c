#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>



int main()

{

	char f;

	f = getchar();

	if ((f >= 'W' && f <= 'Z') || (f >= 'w' && f <= 'z'))

	{

		putchar(f - 26 + 4);

	}

	else

	{

		putchar(f + 4);

	}


	getchar();
	getchar();
	return 0;

}