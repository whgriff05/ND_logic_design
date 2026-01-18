#include <stdio.h>

int main() {
	
	// Part 2
	printf("Go Irish!\n");

	printf("\n");

	int x = 2;
	int y = 3;
	printf("x = %d  y = %d  sum = %d\n", x, y, x+y);

	x = 41;
	printf("%d %x %c\n", x, x, x);

	x = 0x74;
	printf("%d %x %c\n", x, x, x);

	x = '4';
	printf("%d %x %c\n", x, x, x);

	printf("\n");

	// Part 3
    printf("%x %x %x\n", -1, -2, -3);
    printf("%d %d %d %d\n", 0x7ffffffe, 0x7fffffff, 0x80000000, 0x80000001);

	printf("\n");

	// Part 4
    unsigned int p4 = 0xffffffff;
    printf("%u\n", p4);

	printf("\n");

	// Part 5
	float f = 18.42;
	printf("%.20f\n", f);

	double d = 18.42;
	printf("%.20f\n", d);

	printf("\n");

	// Part 6
	int i = 0x3;
	int j = 0x5;
	printf("~i = %x\n", ~i);
	printf("i & j = %x\n", i & j);
	printf("i | j = %x\n", i | j);
	printf("i ^ j = %x\n", i ^ j);

	int k = 0xffffffff;
	int m = 0xf0f0f0f0;
	printf("k & m = %x\n", k & m);

	int m1 = 0x0d0d0d0d;
	int m2 = 0xfdfdfdfd;
	printf("(k | m1) & m2 = %x\n", (k | m1) & m2);

	printf("\n");

	// Part 7
	int num1 = 4;
	printf("4 shifted left by 1 bit:\n");
	printf("pre-shift decimal %d, hex %x\n", num1, num1);
	num1 = num1 << 1;
	printf("post-shift decimal %d, hex %x\n", num1, num1);
	printf("\n");

	int num2 = -4;
	printf("-4 shifted left by 1 bit:\n");
	printf("pre-shift decimal %d, hex %x\n", num2, num2);
	num2 = num2 << 1;
	printf("post-shift decimal %d, hex %x\n", num2, num2);
	printf("\n");

	int num3 = 4;
	printf("4 shifted right by 1 bit:\n");
	printf("pre-shift decimal %d, hex %x\n", num3, num3);
	num3 = num3 >> 1;
	printf("post-shift decimal %d, hex %x\n", num3, num3);
	printf("\n");

	int num4 = -4;
	printf("-4 shifted right by 1 bit:\n");
	printf("pre-shift decimal %d, hex %x\n", num4, num4);
	num4 = num4 >> 1;
	printf("post-shift decimal %d, hex %x\n", num4, num4);
	printf("\n");

	unsigned int num5 = -4;
	printf("-4 as unsigned int: decimal %u\n", num5);
	printf("\n");

	unsigned int num6 = 4;
	printf("unsigned 4 shifted left by 1 bit:\n");
	printf("pre-shift decimal %u, hex %x\n", num6, num6);
	num6 = num6 << 1;
	printf("post-shift decimal %u, hex %x\n", num6, num6);
	printf("\n");
	
	printf("unsigned -4 shifted left by 1 bit:\n");
	printf("pre-shift decimal %u, hex %x\n", num5, num5);
	num5 = num5 << 1;
	printf("post-shift decimal %u, hex %x\n", num5, num5);
	printf("\n");

	unsigned int num7 = 4;
	printf("unsigned 4 shifted right by 1 bit:\n");
	printf("pre-shift decimal %u, hex %x\n", num7, num7);
	num7 = num7 >> 1;
	printf("post-shift decimal %u, hex %x\n", num7, num7);
	printf("\n");
	
	unsigned int num8 = -4;
	printf("unsigned -4 shifted right by 1 bit:\n");
	printf("pre-shift decimal %u, hex %x\n", num8, num8);
	num8 = num8 >> 1;
	printf("post-shift decimal %u, hex %x\n", num8, num8);
}
