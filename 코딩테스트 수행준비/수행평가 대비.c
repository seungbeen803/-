#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[30] = "I want go";

	// 문자열 길이
	int length = strlen(str);
	printf("문자열의 길이는 %d", length);

	// 문자열 복사
	char copy_str[30];
	strcpy(copy_str, str);
	printf("%s \n", copy_str);

	// 문자열 덧붙이기
	strcat(copy_str, "home");
	printf("%s \n", copy_str);

	// 문자열 비교하기
	if (strcmp("BMW", "benz") == 0)
		printf("문자열이 같습니다.");
	else
		printf("문자열이 다릅니다.");
}