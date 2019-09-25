#define _CRT_SECURE_NO_DEPRECATE
# include <stdio.h>
# include <stdlib.h>
int main() {
	int i = 0, j = 0, n = 0, length = 0;
	int a[100] = {0};
	scanf("%d", &n);
	int temp = n;
	for (i = n; i != 0; i=i/10) {
		a[length] = i % 10;
		length++;
	}
	printf("%d\n", length);
	for (j = 0; j < length; j++) {
		printf("%d ", a[length - 1 - j]);
	}
	printf("\n");
	for (j = 0; j < length; j++) {
		printf("%d ", a[j]);
	}
	system("pause");
	return 0;
}