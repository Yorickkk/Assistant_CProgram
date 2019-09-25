#define _CRT_SECURE_NO_DEPRECATE
# include <stdio.h>
int main() {
	int a=0;
	char score = ' ';
	scanf("%d", &a);
	a = a / 10;
	switch (a)
	{
	case 10:
		score = 'A';
		break;
	case 9:
		score = 'A';
		break;

	case 8:
		score = 'B';
		break;

	case 7:
		score = 'C';
		break;

	case 6:
		score = 'D';
		break;
	case 5:
		score = 'E';
		break;
	case 4:
		score = 'E';
		break;
	case 3:
		score = 'E';
		break;
	case 2:
		score = 'E';
		break;
	case 1:
		score = 'E';
		break;
	case 0:
		score = 'E';
		break;

	default:
		printf("error");
		return 0;
	}
	putchar(score);
	getchar();
	getchar();
	return 0;
}