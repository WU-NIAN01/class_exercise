#include <stdio.h>
#include <assert.h>
void* my_memmove(void* dest, const void* source, size_t num)
{
	assert(dest && source);
	void* ret = dest;
	if (dest < source)
	{
		while (num--)
		{
			*(char*)dest = *(char*)source;
			(char*)dest += 1;
			(char*)source += 1;
		}
	}
	else
		while (num--)
		{
			*((char*)dest + num) = *((char*)source + num);
		}
	return ret;
}
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//my_memmove(arr, arr + 3, 16);
	my_memmove(arr + 3, arr, 16);
	for (int i = 0;i < 10;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}