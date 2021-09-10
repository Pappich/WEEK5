#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	float num[10],avg;
	for(int i=0;i<10;i++)
	{
		scanf("%f", &num[i]);
	}
	printf("Height of ten students =");
	for(int i=0;i<10;i++)
	{
		printf(" %.2f",num[i]);
	}
	printf("\n");
	avg = (num[0]+num[1]+num[2]+num[3]+num[4]+num[5]+num[6]+num[7]+num[8]+num[9])/10;
	printf("average = %.2f", avg);
	return 0;
}
	
