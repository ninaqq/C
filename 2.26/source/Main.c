#include <stdio.h>
int main()
{
	int a, b;

	printf("請輸入兩個數字");
	scanf_s("%d %d", &a, &b);

	if (a%b == 0)
		printf("The first number is a multiple of the second number");
	else
		printf("The first number is not a multiple of the second number");

	return 0;
}