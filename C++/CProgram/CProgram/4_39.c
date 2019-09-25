#define _CRT_SECURE_NO_DEPRECATE
# include <stdio.h>

int f(int n) {
	if (n == 1) {
		return 1;
	}
	return n+f(n - 1);
}


int main() {

	int n = 0;
	scanf("%d", &n);
	if (n < 1) {
		return 0;
	}


	printf("%d", f(n));
	getchar();
	getchar();
	return 0;
}