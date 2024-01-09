#include <stdio.h>
//实现交换
void Swap(char* a1, char* a2,int width)
{
	for (int i = 0;i < width;i++)
	{
		char tmp = *a1;
		*a1 = *a2;
		*a2 = tmp;
		a1++;
		a2++;
	}
}
//排序规则
void Bubble_Sort(void* base, int num, int width, int (*cmp)(const void* a1, const void* a2))
{
	for (int i = 0;i < num-1;i++)
	{
		int count = 0;
		for (int j = 0;j < num - 1 - i;j++)
		{
			if (cmp((char*)base + width * j, (char*)base + (j + 1) * width) < 0)
			{
				Swap((char*)base + width * j, (char*)base + (j + 1) * width, width);
				count++;
			}
		}
		if (!count)
			break;
	}
}

//整型的比较
int int_cmp(const void* a1, const void* a2)
{
	return *((int*)a2) - *((int*)a1);
}

//结构体的创建
struct Stu
{
	char tel[15];
	int age;
	char name[20];
};

//结构体比较——年龄
int age_cmp(const void* b1, const void* b2)
{
	return ((struct Stu*)b2)->age - ((struct Stu*)b1)->age;
}

int main()
{
	////整型排序实现
    //int arr[10] = { 0,6,5,7,9,3,4,8,2,1 };
	//int int_num = sizeof(arr) / sizeof(arr[0]);
	//int int_width = sizeof(arr[0]);
	//Bubble_Sort(arr, int_num, int_width, int_cmp);
	//for (int i = 0;i < int_num;i++)
	//	printf("%d ", arr[i]);

	//结构体排序实现
    struct Stu People[3] = {{"13586596668",18,"zhangsan"},{"18765234456",67,"lisi"},{"19986983382",23,"wangwu"}};
	int num = sizeof(People) / sizeof(People[0]);
	int width = sizeof(People[0]);
	Bubble_Sort(People, num, width, age_cmp);
	for (int i = 0;i < num;i++)
	{
		printf("%s %d %s", (People + i)->tel, (People + i)->age, (People + i)->name);
		printf("\n");
	}
	return 0;
}