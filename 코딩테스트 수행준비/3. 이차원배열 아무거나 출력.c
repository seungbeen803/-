#include<stdio.h>


int main(void)
{
	char arr[3][3] = {
		{'A', 'B', 'C'},
		{'D', 'E', 'F'},
		{'G', 'H', 'I'}
	};

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
		{
			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}

	// ���ڿ��� ���̸� ���Ͻÿ�
	char str[30] = "Hello";
	int length = 0;

	for (int i = 0; i < length; i++)
	{
		printf("���ڿ��� ����: %d", length);
	}

	return 0;
}