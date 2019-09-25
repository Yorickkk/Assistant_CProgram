#define _CRT_SECURE_NO_DEPRECATE
# include <stdio.h>
#include <math.h>
int main() {

	double r = 0;
	scanf("%lf", &r);
	printf("%.2lf\n%.2lf\n%.2lf\n", r*3.14*2.0, r*r*3.14, 4.0*3.14*r*r*r/3.0);
	getchar();
	getchar();
	return 0;
}