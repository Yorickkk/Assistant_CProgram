#define _CRT_SECURE_NO_DEPRECATE
# include <stdio.h>
int main() {
	double cost[10] = {28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	int num[10] = {0}, i = 0;
	double sum = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		sum += cost[i] * num[i];
	}
	printf("%.2lf", sum);

	getchar();
	getchar();
	return 0;
}