#include <stdio.h>
//ʵ�ֽ���
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
//�������
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

//���͵ıȽ�
int int_cmp(const void* a1, const void* a2)
{
	return *((int*)a2) - *((int*)a1);
}

//�ṹ��Ĵ���
struct Stu
{
	char tel[15];
	int age;
	char name[20];
};

//�ṹ��Ƚϡ�������
int age_cmp(const void* b1, const void* b2)
{
	return ((struct Stu*)b2)->age - ((struct Stu*)b1)->age;
}

int main()
{
	////��������ʵ��
    //int arr[10] = { 0,6,5,7,9,3,4,8,2,1 };
	//int int_num = sizeof(arr) / sizeof(arr[0]);
	//int int_width = sizeof(arr[0]);
	//Bubble_Sort(arr, int_num, int_width, int_cmp);
	//for (int i = 0;i < int_num;i++)
	//	printf("%d ", arr[i]);

	//�ṹ������ʵ��
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