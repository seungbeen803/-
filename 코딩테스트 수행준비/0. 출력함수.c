#include<stdio.h>

int main(void)
{
	int jungsu = 1;
	char munja = 'a';
	double sosu = 3.14;
	float sosul = 0.001592f; // float을 사용할 때에는 값 뒤에 f를 붙여야함.
	// 문자는 띄어쓰기 포함해서 11개
	// 배열의 길이는 11+1(null 문자 포함) 12개
	char mjyeol[] = "Hello World"; // 공간이 최소 12개 필요
	
	printf("정수 %d, 문자 %c, 더블 %lf, 플롯 %f\n", jungsu, munja, sosu, sosul);

	// 문자열 출력
	for (int i = 0; i < 12; i++)
	{
		printf("%c", mjyeol[i]);
	}
}