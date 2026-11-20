#include <stdio.h>

int main()
{
	_BitInt(4) a;
	_BitInt(12) b;

	printf("sizeof(a): %zu\n", sizeof(a));	// 1 => 1 Byte bzw. 8 Bit
	printf("sizeof(b): %zu\n", sizeof(b));	// 2 => 2 Byte bzw. 16 Bit
}