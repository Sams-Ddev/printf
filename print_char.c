#include "main.h"
#include <stdio.h>


/**
 * print_chr - writes the character c to stdout
 * @arguments: input char
 * @buffer: buffer pointer
 * @buffer_index: index for buffer pointer
 * Return: On success 1.
 */

int print_chr(va_list arguments, char *buffer, unsigned int buffer_index)
{
	char c;

	c = va_arg(arguments, int);
	handl_buf(buffer, c, buffer_index);

	return (1);
}
