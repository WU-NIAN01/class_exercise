#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000
int main()
{
	int n = 0, m = 0;
	int arr1[MAX] = { 0 };
	int arr2[MAX] = { 0 };
	scanf("%d %d", &n, &m);
	for (int i = 0;i < n;i++)
		scanf("%d", arr1 + i);
	for (int i = 0;i < m;i++)
		scanf("%d", arr2 + i);
	int i = 0, j = 0;
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			printf("%d ", arr1[i]);
			i++;
		}
		else
		{
			printf("%d ", arr2[j]);
			j++;
		}
	}
	if (i < n)
	{
		while (i < n)
		{
			printf("%d ", arr1[i]);
			i++;
		}
	}
	else
	{
		while (j < m)
		{
			printf("%d ", arr2[j]);
			j++;
		}
	}
	return 0;
}