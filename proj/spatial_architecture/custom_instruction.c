#include <stdio.h>
#include "cfu.h"

#define custom_instruction(a, b) cfu_op(0x11, 0x7f, (a), (b))

int main(void)
{
	int x = 1, y = 2, z;

	printf("RISC-V!\n");

	z = custom_instruction(x, y);

	return 0;
}
