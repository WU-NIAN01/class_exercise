#include <stdio.h>
#include <string.h>
char* My_strstr(const char* a1, const char* a2)
{
	char* tmp = a1;
	while (strlen(tmp) >= strlen(a2))
	{
		char* p = a2;
		a1 = tmp;
		while (*p != '\0')
		{
			if (*a1 == *p)
			{
				a1++;
				p++;
			}
			else
			{
				tmp++;
				break;
			}
		}
		if (*p == '\0')
			return tmp;
	}
	return NULL;
}
int main()
{
	char str[] = "qinghuabeidaabbcbbcd";
	char find[] = "bbcd";
	char* ret = My_strstr(str, find);
	printf("%s", ret);
	return 0;
}