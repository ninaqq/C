#include <stdio.h>
#include <stdlib.h>
int main()
{
	float x, money, km, parking, y;

	puts("�п�J�@��Ѫ��`���{��");
	scanf_s("%f", &x);
	puts("�п�J�T�o�@���ɦh�ֿ�");
	scanf_s("%f", &money);
	puts("�п�J�����@���ɯ��p�h�֤���");
	scanf_s("%f", &km);
	puts("�п�J�@�Ѫ������O");
	scanf_s("%f", &parking);
	puts("�п�J�@�Ѫ��q��O(�L���O)");
	scanf_s("%f", &y);

	printf("�@�Ѫ���O=%.2f", money*(x / km) + parking + y);

	return 0;
}
