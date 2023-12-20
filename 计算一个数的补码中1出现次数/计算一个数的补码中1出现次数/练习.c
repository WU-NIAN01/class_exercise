#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = 0;
	for (int i = 1;i <= 8 * (sizeof(a));i++)
	{
		int tmp = a & 1;
		if (tmp == 1)
			count++;
		a >>= 1;
	}
	printf("%d", count);
	return 0;
}