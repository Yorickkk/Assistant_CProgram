#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h> 

int main()

{

	long int num;

	int indiv, ten, hundred, thousand, ten_thousand, place;      /*分别代表个位、十位、百位、千位、万位和位数*/

	scanf("%ld", &num);

	if (num>9999) place = 5;

	else if (num>999) place = 4;

	else if (num>99) place = 3;

	else if (num>9) place = 2;

	else place = 1;

	printf("%d\n", place);

	ten_thousand = num / 10000;

	thousand = num / 1000 % 10;

	hundred = num / 100 % 10;

	ten = num % 100 / 10;

	indiv = num % 10;

	switch (place)

	{

	case 5:

		printf("%d %d %d %d %d\n", ten_thousand, thousand, hundred, ten, indiv);

		printf("%d %d %d %d %d\n", indiv, ten, hundred, thousand, ten_thousand);
		break;



	case 4:

		printf("%d %d %d %d\n", thousand, hundred, ten, indiv);

		printf("%d %d %d %d\n", indiv, ten, hundred, thousand);
		break;



	case 3:

		printf("%d %d %d\n", hundred, ten, indiv);

		printf("%d %d %d\n", indiv, ten, hundred);
		break;



	case 2:

		printf("%d %d\n", ten, indiv);

		printf("%d %d\n", indiv, ten);
		break;



	case 1:

		printf("%d\n", indiv);

		printf("%d\n", indiv);
		break;

	default:
		break;



	}


	getchar();
	getchar();

	return 0;

}