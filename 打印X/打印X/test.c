#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	char arr[100][100] = { 0 };
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (i == j || i + j == n - 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}