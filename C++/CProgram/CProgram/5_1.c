#define _CRT_SECURE_NO_DEPRECATE
# include <stdio.h>
int main() {
	int r = 0;
	scanf("%d", &r);
	printf("%.2lf", 4*r*r*r*3.14/3);
	getchar();
	getchar();
	return 0;
}