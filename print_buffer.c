#include "main.h"


/**
 * print_buffer - Prints the contents of the buffer if it exists
 *
 * @buffer: Array of characters representing the buffer
 * @buff_ind: Pointer to the index at which to add the next character,
 * represents the buffer length
 */

void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}

