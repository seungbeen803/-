#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[30] = "I want go";

	// ���ڿ� ����
	int length = strlen(str);
	printf("���ڿ��� ���̴� %d", length);

	// ���ڿ� ����
	char copy_str[30];
	strcpy(copy_str, str);
	printf("%s \n", copy_str);

	// ���ڿ� �����̱�
	strcat(copy_str, "home");
	printf("%s \n", copy_str);

	// ���ڿ� ���ϱ�
	if (strcmp("BMW", "benz") == 0)
		printf("���ڿ��� �����ϴ�.");
	else
		printf("���ڿ��� �ٸ��ϴ�.");
}