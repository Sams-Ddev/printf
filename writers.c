#include "main.h"


/**
 * handle_write_char - Prints a character
 *
 * @c: Character to be printed.
 * @buffer: Buffer array to handle print.
 * @flags:  Calculates active flags.
 * @width: Get width.
 * @precision: Precision specifier.
 * @size: Size specifier.
 *
 * Return: Number of characters printed.
 */







//LOng writings edited, we had not gone through this
int handle_write_char(char c, char buffer[],
		int flags, int width, int precision, int size)
{
	int i = 0;
	char padd = ' ';

	UNUSED(precision);
	UNUSED(size);

	if (flags & F_ZERO)
		padd = '0';
	buffer[i++] = c;
	buffer[i] = '\0';

	if (width > 1)
	{
		buffer[BUFF_SIZE - 1] = '\0';
		for (i = 0; i < width - 1; i++)
			buffer[BUFF_SIZE - i - 2] = padd;
