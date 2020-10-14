#include <stdio.h>
int main()
{
	float bmi, weight, height;
	printf("½Ð¿é¤Jweight(kg) height(m)");
	scanf_s("%f %f", &weight, &height);
	bmi = weight / (height*height);
	printf("%.3f", bmi);
	if (bmi < 18.5)
	{
		printf("underweight");
	}
	else if (24.9 > bmi && bmi > 18.5)
	{
		printf("normal");
	}
	else if (29.9 > bmi && bmi > 25)
	{
		printf("overweight");
	}
	else
	{
		printf("obese");
	}
	return 0;
}