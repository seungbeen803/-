#include<stdio.h>

void getMax(int* arr, int length)
{
	int temp = -1; // 비교대상
	int idx = 99; // 인덱스의 값

	for (int i = 0; i < length; i++)
	{
		if (arr[i] > temp)
		{
			temp = arr[i];
			idx = i;
		}
	}
	printf("최댓값 : %d 인덱스 값 : %d  \n", temp, idx);
}

void getMin(int* arr, int length)
{
	int temp = 999;
	int idx = 999;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] < temp)
		{
			temp = arr[i];
			idx = i;
		}
	}
	printf("최솟값: %d 인덱스 값: %d  \n", temp, idx);
}
int main(void)
{
	//int temp = -1;
	//int idx = 99;
	int arr[10] = { 8, 5, 1, 6, 4, 20, 10, 7, 11, 14 };
	// 함수 사용
	// 최댓값
	getMax(arr, 10);

	// 최솟값
	getMin(arr, 10);

	//// 함수 사용X
	
	// 최댓값
	//for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	//{
	//	if (arr[i] > temp)
	//	{
	//		temp = arr[i];
	//		idx = i;
	//	}
	//}
	//printf("최댓값 : %d 인덱스 값 : %d  \n", temp, idx);

	// 최솟값
	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	//{
	//	if (arr[i] < temp)
	//	{
	//		temp = arr[i];
	//		idx = i;
	//	}
	//}
	//printf("최솟값: %d 인덱스 값: %d  \n", temp, idx);
	return 0;
}