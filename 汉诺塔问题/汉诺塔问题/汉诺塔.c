#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long toh(int n)
{
	if (n <= 1)
		return 1;
	else
		return 2 * toh(n - 1) + 1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	long long count = toh(n);
	printf("%lld", count);
	return 0;
}