#include <stdio.h>
int main()
{
	for (int i = 1;i <= 9;i++)
	{
		for (int j = 1;j <= i;j++)
		{
			int rct = i * j;
			if(j==i)
				printf("%d*%d=%d\n", i,j,rct);
			else
			printf("%d*%d=%d	", i,j,rct);
		}
	}
	return 0;
}