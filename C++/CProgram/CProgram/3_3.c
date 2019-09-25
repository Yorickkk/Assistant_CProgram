#define _CRT_SECURE_NO_DEPRECATE
# include <stdio.h>
#include <math.h>
int main() {

	double r = 0;
	int n = 0;
	scanf("%lf %d", &r, &n);
	printf("%.2lf", pow(1+r,n));
	getchar();
	getchar();
	return 0;
}