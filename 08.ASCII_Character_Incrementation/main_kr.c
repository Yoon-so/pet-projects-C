#include <stdio.h>

int main(void) {
	// 'a'의 ASCII 코드 값에 1, 2, 3을 더한 결과를 문자로 출력
	// 'a'의 ASCII 코드 값은 97,
	// 'a' + 1 = 'b' (ASCII 코드 98),
	// 'a' + 2 = 'c' (ASCII 코드 99),
	// 'a' + 3 = 'd' (ASCII 코드 100)
	printf("%c = %d\n", 'a', 'a');
	printf("%c = %d\n", 'a' + 1, 'a' + 1);
	printf("%c = %d\n", 'a' + 2, 'a' + 2);
	printf("%c = %d\n", 'a' + 3, 'a' + 3);

	return 0;
}