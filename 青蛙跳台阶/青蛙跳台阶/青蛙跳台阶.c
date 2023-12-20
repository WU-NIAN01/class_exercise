#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int frog(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return frog(n - 1) + frog(n - 2);
}
int main()
{
	int n;
	scanf("%d", &n);
	int ret = frog(n);
	printf("%d", ret);
	return 0;
}