#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
              //法一
//void reverse(char str[], unsigned int ret)
//{
//	int left = 0;
//	int right = ret - 1;
//	while (left < right)
//	{
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//}
              //法二
void reverse(char* str)
{
	int len = strlen(str);
	char temp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (strlen(str+1) >= 2)
		reverse(str + 1);
	*(str + len - 1) = temp;
}
int main()
{
	char str[20] = { 0 };
	scanf("%s", str);
	int ret = strlen(str);
	reverse(str);
	printf("%s", str);
	return 0;
}
