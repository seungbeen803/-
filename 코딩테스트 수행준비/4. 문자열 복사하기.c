#include<stdio.h>
#include<string.h> // strlen() �Լ� ȣ���� ����


void my_strcpy(int* d, int* s)
{
	// ������ ���� d, ������ ���ڿ� s
	int length = strlen(s);
	for (int i = 0; i < length; i++)
	{
		d[i] = s[i];
	}
}

int main(void)
{
	char dest[20];			// ������ ����
	char src[] = "Hello";	// ������ ���ڿ�
	int length = strlen(src);

	// �Լ� ���X

	// ���ڿ� ũ�⸸ŭ ���� ����
	//for (int i = 0; i < length; i++)
	//{
	//	dest[i] = src[i];
	//}

	// �Լ� ���
	my_strcpy(dest, src);

	// ���ڿ� ���
	for (int i = 0; i < length; i++)
	{
		printf("%c", dest[i]);
	}
	return 0;
}