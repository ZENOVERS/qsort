#include <stdio.h>

int compare(const void* a, const void* b)
{
	int i = *(int*)a;
	int j = *(int*)b;

	if (i > j)
		return 1;

	if (i < j)
		return -1; 

	return 0;
}

int main()
{
	int num[10] = { 4, 2, 3, 1, 5, 7, 6 , 8, 9, 10 };

	qsort(num, sizeof(num) / sizeof(int), sizeof(int), compare);

	for (int i = 0; i < sizeof(num) / sizeof(int); i++)
	{
		printf("%d ", num[i]);
	}

	return 0;
}