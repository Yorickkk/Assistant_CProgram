#define _CRT_SECURE_NO_DEPRECATE
# include <stdio.h>
#include <math.h>
int main() {
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	

	int hha = a / 100;
	int hhb = b / 100;

	int mma = a % 100;
	int mmb = b % 100;





	int mm = (mma + mmb) % 60;
	int hh = ((hha + hhb)+((mma + mmb) / 60))%24;


	if (mm == 0 && hh == 0) {
		printf("000");
	}
	else {
		printf("%d", hh * 100 + mm);
	}
	
	getchar();
	getchar();
	return 0;
}