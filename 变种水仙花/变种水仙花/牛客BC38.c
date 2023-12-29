#include <stdio.h>
#include <math.h>
int main()
{
	int arr[5] = { 0 };
	for (int i = 10000;i <= 99999;i++)
	{
		int sum = 0;
		for (int j = 10000;j >= 10;j /= 10)
		{
			sum = sum + (i / j) * (i % j);
		}
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}