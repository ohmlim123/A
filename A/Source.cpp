#include<stdio.h>


struct number {

	int a[5] = {};
	int b[5] = {};
};

void MinMax(struct number num)
{
	int sum1 = 0;
	int sum2 = 0;

	struct number sumofnum;

	for (int i = 0;i < 5;i++)
	{
		scanf_s("%d", &sumofnum.a[i]);

		sum1 += sumofnum.a[i];	
	}
	//printf("\n%d\n", sum1);
	for (int i = 0;i < 5;i++)
	{
		scanf_s("%d", &sumofnum.a[i]);

		sum2 += sumofnum.a[i];
	}
	//printf("\n%d\n", sum2);
	

	
	if (sum1 > sum2)
	{
		printf("Max is : %d \nMin is : %d ", sum1, sum2);
	}
	else
	{
		printf("Max is : %d \nMin is : %d ", sum2, sum1);
	}



}
int main()
{
	struct number sumofnum;

	MinMax(sumofnum);

	printf("\nYou Done !! ");

	return 0;
}