#include<stdio.h>

int main(void)
{
	int jungsu = 1;
	char munja = 'a';
	double sosu = 3.14;
	float sosul = 0.001592f; // float�� ����� ������ �� �ڿ� f�� �ٿ�����.
	// ���ڴ� ���� �����ؼ� 11��
	// �迭�� ���̴� 11+1(null ���� ����) 12��
	char mjyeol[] = "Hello World"; // ������ �ּ� 12�� �ʿ�
	
	printf("���� %d, ���� %c, ���� %lf, �÷� %f\n", jungsu, munja, sosu, sosul);

	// ���ڿ� ���
	for (int i = 0; i < 12; i++)
	{
		printf("%c", mjyeol[i]);
	}
}