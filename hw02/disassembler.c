#include <stdio.h>

void disassemble(int hex_digit);

int main(void) {

    // Test Cases
    disassemble(0x1234);
    disassemble(0x0482);
    disassemble(0xA0F0);
    disassemble(0x53E0);

    return 0;
}

void disassemble(int hex_digit) {
    int opcode = (hex_digit >> 12) & 0xF;
    int rw = (hex_digit >> 8) & 0xF;
    int ra = (hex_digit >> 4) & 0xF;
    int rb = (hex_digit >> 0) & 0xF;

    if ((1 << opcode) & 0xFF90) {
        printf("Error: invalid opcode %x (0x%x)\n", opcode, hex_digit);
        return;
    }


    printf("opcode = %x     rw = %x     ra = %x     rb = %x\n", opcode, rw, ra, rb);
}
