#include<stdio.h>
#include<string.h> // strlen() 함수 호출을 위함


void my_strcpy(int* d, int* s)
{
	// 복사할 공간 d, 복사할 문자열 s
	int length = strlen(s);
	for (int i = 0; i < length; i++)
	{
		d[i] = s[i];
	}
}

int main(void)
{
	char dest[20];			// 복사할 공간
	char src[] = "Hello";	// 복사할 문자열
	int length = strlen(src);

	// 함수 사용X

	// 문자열 크기만큼 공간 생성
	//for (int i = 0; i < length; i++)
	//{
	//	dest[i] = src[i];
	//}

	// 함수 사용
	my_strcpy(dest, src);

	// 문자열 출력
	for (int i = 0; i < length; i++)
	{
		printf("%c", dest[i]);
	}
	return 0;
}