#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b&&a > c) {
		printf("%d", a);
	}
	else if (b > c) {
		printf("%d", b);
	}
	else {
		printf("%d", c);
	}
	
	getchar();
	getchar();
	return 0;
}