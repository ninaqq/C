#include <stdio.h>
#include <stdlib.h>
int main()
{
	float x, money, km, parking, y;

	puts("請輸入一整天的總里程數");
	scanf_s("%f", &x);
	puts("請輸入汽油一公升多少錢");
	scanf_s("%f", &money);
	puts("請輸入平均一公升能行駛多少公里");
	scanf_s("%f", &km);
	puts("請輸入一天的停車費");
	scanf_s("%f", &parking);
	puts("請輸入一天的通行費(過路費)");
	scanf_s("%f", &y);

	printf("一天的花費=%.2f", money*(x / km) + parking + y);

	return 0;
}
