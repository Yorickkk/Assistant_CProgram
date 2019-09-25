#define _CRT_SECURE_NO_DEPRECATE
# include <stdio.h>
int main() {

	double profit = 0, sum = 0;
	scanf("%lf", &profit);
	if (profit>1000000) {
		sum += (profit - 1000000)*0.01;
		profit = 1000000;
	}
	if (profit>600000) {
		sum += (profit - 600000)*0.015;
		profit = 600000;
	}
	if (profit > 400000) {
		sum += (profit - 400000)*0.03;
		profit = 400000;
	}
	if (profit > 200000) {
		sum += (profit - 200000)*0.05;
		profit = 200000;
	}
	if (profit > 100000) {
		sum += (profit - 100000.0)*0.075;
		profit = 100000;
	}

	sum += profit*0.1;
	printf("%.2lf", sum);

	getchar();
	getchar();
	return 0;
}