#include <stdio.h>

int main() {
	printf("Go Irish!\n");

	// Part 2
	int x = 2;
	int y = 3;
	printf("x = %d  y = %d  sum = %d\n", x, y, x+y);

	x = 41;
	printf("%d %x %c\n", x, x, x);

	x = 0x74;
	printf("%d %x %c\n", x, x, x);

	x = '4';
	printf("%d %x %c\n", x, x, x);

	// Part 3
    printf("%x %x %x\n", -1, -2, -3);
    printf("%d %d %d %d\n", 0x7ffffffe, 0x7fffffff, 0x80000000, 0x80000001);

	// Part 4
    unsigned int p4 = 0xffffffff;
    printf("%u\n", p4);

	// Part 5

	// Part 6

	// Part 7
}
