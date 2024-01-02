#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM 10
int main()
{
	int arr[NUM];
	for (int i = 0;i < NUM;i++)
		scanf("%d", arr + i);
	int left = 0;
	int right = NUM - 1;
	while (left < right)
	{
		if (arr[left] % 2 == 0)
		{
			while ((arr[right] % 2 == 0) && (right > left))
				right--;
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			right--;
		}
		left++;
	}
	for (int i = 0;i < NUM;i++)
		printf("%d ", arr[i]);
	return 0;
}