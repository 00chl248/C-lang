#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#pragma warning (disable:4996)

typedef struct coffee {

	char name[10];
	int price;
	int shots;
} caf;


int main()
{
	int a[3] = { 1,2,3 };

	caf menu[3] = { {"americano", 4000, 1} , {"main", 5000, 2} , { "bonus", 2500, 1} };

	for (int i = 0; i < 3; i++)
	{
		printf("¸Þ´ºÀÌ¸§: %s / °¡°Ý: %d / ¼¦ È½¼ö: %d\n", menu[i].name, menu[i].price, menu[i].shots);
		
	}


	return 0;
}