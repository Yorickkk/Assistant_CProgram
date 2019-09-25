#define _CRT_SECURE_NO_DEPRECATE
# include <stdio.h>
# include <stdlib.h>
int main() {
	int year = 0, month = 0, day = 0, sumdays=0, i = 0;
	int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d", &year, &month, &day);
	
	if ((year%4==0&&year%100!=0)||year%400==0) {
		days[1] = 29;
	}

	for (i = 0; i < month - 1; i++) {
		sumdays += days[i];
		
	}
	sumdays += day;

	printf("%d", sumdays);

	system("pause");
	return 0;
}