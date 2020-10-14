#include <stdio.h>
int main()
{
	int i, a, b, array[3];

	scanf_s("%d%d%d", &array[0], &array[1], &array[2]);
	a = b = array[0];
	for (i = 1; i <= 2; i++)
	{
		if (a < array[i])
		{
			a = array[i];
		}
		if (b > array[i])
		{
			b = array[i];
		}
	}
	printf("max:%d min:%d", a, b);

	return 0;
}
