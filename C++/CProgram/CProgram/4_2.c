#define _CRT_SECURE_NO_DEPRECATE
# include <stdio.h>
# include <stdlib.h>
int main() {
	int i = 0, n = 0;
	scanf("%d", &n);
	if (n / 10000 == 0 || n / 10000 > 9) {
		printf("error");
	}else if ((n % 10 == n / 10000) && (n%100/10 == n/1000%10)) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	system("pause");
	return 0;
}