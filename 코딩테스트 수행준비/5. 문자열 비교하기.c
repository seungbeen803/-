#include<stdio.h>
#include<string.h>

// �� ���ڿ��� ������ 0�� ��ȯ, �ٸ��� 1�� ��ȯ
// �Լ� ����
int my_strcmp(char* str1, char* str2)
{
	// ���ڿ�
	int str1_len = strlen(str1);
	int str2_len = strlen(str2);

	// �� ���ڿ��� ���̰� �ٸ� ���
	if (str1_len != str2_len)
		return 1;

	// �ϳ��� ���ڰ� �ٸ� ���
	for (int i = 0; i < str1_len; i++)
	{
		if (str1[i] != str2[i])
			return 1;
	}

	return 0;
}

int main(void)
{
	char a[20] = "Hello";
	char b[20] = "Yello";

	// ��¹�
	if (my_strcmp(a, b) == 0)
		printf("�� ���ڿ��� �����ϴ�.\n");
	else
		printf("�� ���ڿ��� �ٸ��ϴ�.\n");

	return 0;
}