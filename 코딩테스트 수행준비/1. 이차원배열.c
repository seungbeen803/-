#include<stdio.h>

int main(void)
{
	// 1차원 배열
	/*int arr[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	for (int i = 0; i < 12; i++)
	{
		printf("%d ", arr[i]);
	}

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d ", arr[i]);
	}

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}*/

	// 2차원 배열
	int arr1[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
}