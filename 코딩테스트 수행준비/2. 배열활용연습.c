#include<stdio.h>

void getMax(int* arr, int length)
{
	int temp = -1; // �񱳴��
	int idx = 99; // �ε����� ��

	for (int i = 0; i < length; i++)
	{
		if (arr[i] > temp)
		{
			temp = arr[i];
			idx = i;
		}
	}
	printf("�ִ� : %d �ε��� �� : %d  \n", temp, idx);
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
	printf("�ּڰ�: %d �ε��� ��: %d  \n", temp, idx);
}
int main(void)
{
	//int temp = -1;
	//int idx = 99;
	int arr[10] = { 8, 5, 1, 6, 4, 20, 10, 7, 11, 14 };
	// �Լ� ���
	// �ִ�
	getMax(arr, 10);

	// �ּڰ�
	getMin(arr, 10);

	//// �Լ� ���X
	
	// �ִ�
	//for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	//{
	//	if (arr[i] > temp)
	//	{
	//		temp = arr[i];
	//		idx = i;
	//	}
	//}
	//printf("�ִ� : %d �ε��� �� : %d  \n", temp, idx);

	// �ּڰ�
	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	//{
	//	if (arr[i] < temp)
	//	{
	//		temp = arr[i];
	//		idx = i;
	//	}
	//}
	//printf("�ּڰ�: %d �ε��� ��: %d  \n", temp, idx);
	return 0;
}