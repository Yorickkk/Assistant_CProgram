#define _CRT_SECURE_NO_DEPRECATE
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int isPrime(int n) {
	if (n == 1) {
		return 0;
	}

	int i = 2;
	for (i = 2; i <= sqrt(n); i++) {
		if (n%i == 0) {
			return 0;
		}	
	}
	return 1;
}
int main() {
	int m = 0, n = 0, i = 0, flag=0;
	scanf("%d %d", &m, &n);
	for (i = m; i <= n; i++) {
		if (isPrime(i) == 1) {
			flag = 1;
			printf("%d ", i);
		}
	}
	if (flag == 0) {
		printf("no");
	}
	system("pause");
	return 0;
}