#include <stdio.h>
#include <stdint.h>

int main()
{
	int8_t num1 = -128;
	int16_t num2 = 32767;
	uint8_t num3 = 255;

	print("%d %d %u", num1, num2, num3);

	return 0;

}