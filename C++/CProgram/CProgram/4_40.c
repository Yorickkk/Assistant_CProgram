#define _CRT_SECURE_NO_DEPRECATE
# include <stdio.h>
#include <math.h>


int f(int n) {
	if (n == 1) {
		return 1;
	}
	return (f(--n) + 1)*2;
}

int main() {
	int n = 0;
	scanf("%d", &n);
	printf("%d", f(n));
	getchar();
	getchar();
	return 0;
}


