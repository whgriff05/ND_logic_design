#include <stdio.h>

void detect_overflow(int num1, int num2);

int main(void) {

	// test cases
	detect_overflow(2026, -1842);
	printf("\n");
	detect_overflow(94, 327);
	printf("\n");
	detect_overflow(0x7fffffff, 1);
	printf("\n");
	detect_overflow(0x80000000, -1);
	printf("\n");
	detect_overflow(0x7fffffff, 0x80000000);

	return 0;
}

void detect_overflow(int num1, int num2) {	
	int sum = num1 + num2;
	printf("Decimal: %d + %d = %d\n", num1, num2, sum);
	printf("Hex: %x + %x = %x\n", num1, num2, sum);
	
	// check for overflow if num1 and num2 have the same sign
	if (~(num1 ^ num2) >> 31) {
		// overflow if sign of sum differs from num1 and num2
		if ((num1 ^ sum) >> 31) {
			printf("Overflow detected\n");
		} else {
			printf("No overflow detected\n");
		}
	} else {
		printf("No overflow detected\n");
	}
}
