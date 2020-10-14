#include <stdio.h>
int main()
{
	int a;

	printf("½Ð¿é¤J¼Æ¦r");
	scanf_s("%d", &a);
	if (a % 2 == 0)
		printf("It's even");
	else
		printf("It's odd");

	return 0;
}