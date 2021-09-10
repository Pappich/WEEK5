#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	float num[10],sum,avg;
	for(int i=0;i<10;i++)
	{
		scanf("%f", &num[i]);
	}
	printf("Heigh of ten student =");
	for(int i=0;i<10;i++)
	{
		printf(" %.2f",num[i]);
	}
	printf("\n");
	for(int j=0;j<10;j++)
	{
		sum = sum + num[j];
	}
	avg = sum/10;
	printf("average = %.2f",avg);
	return 0;
}
