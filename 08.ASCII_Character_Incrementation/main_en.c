#include <stdio.h>

int main(void) {
	// Print the characters resulting from adding 1, 2, and 3 to the ASCII code of 'a'
	// The ASCII code of 'a' is 97,
	// 'a' + 1 = 'b' (ASCII code 98),
	// 'a' + 2 = 'c' (ASCII code 99),
	// 'a' + 3 = 'd' (ASCII code 100)
	printf("%c = %d\n", 'a', 'a');
	printf("%c = %d\n", 'a' + 1, 'a' + 1);
	printf("%c = %d\n", 'a' + 2, 'a' + 2);
	printf("%c = %d\n", 'a' + 3, 'a' + 3);

	return 0;
}