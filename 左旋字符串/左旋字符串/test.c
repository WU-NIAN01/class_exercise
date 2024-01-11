#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
//法一
//void left_rotation(char* str, int num)
//{
// assert(str);
//	int sz = strlen(str);
//	while (num--)
//	{
//		char tmp = *str;
//		for (int i = 0;i < sz-1;i++)
//		{
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + sz - 1) = tmp;
//	}
//}
//法二  (逆序三次)
void reverse(char* str, int num)//逆序
{
	assert(str);
	int left = 0;
	int right = num - 1;
	while (left < right)
	{
		char tmp = *(str + left);
		*(str + left) = *(str + right);
		*(str + right) = tmp;
		left++;
		right--;
	}
}
void left_rotation(char* str, int num)
{
	assert(str);
	int len = strlen(str);
	reverse(str, num);
	reverse(str + num, len - num);
	reverse(str, len);
}
int main()
{
	char str[] = "abcdefghijklmn";
	int n = 0;
	scanf("%d", &n);
	left_rotation(str, n);
	printf("%s", str);
	return 0;
}