#include <Turboc.h>

int main()
{
	int i;
	
	printf("정수를 입력하세요 :");
	scanf("%d", &i);
	if (i % 2 == 0) {
		printf("%d는 짝수입니다ㅎㅎ\n", i);
	}
	else {
		printf("%d는 홀수입니다ㅠㅠ\n", i);
	}
	return i;
}