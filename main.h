#ifndef _MAIN_H_
#define _MAIN_H_


#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
* Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;


int _printf(const char *format, ...);
int get_print_func(const char *format, int i);
void handl_buf(char *buffer, char c, unsigned int ibuf);
void print_buf(char *buffer, unsigned int ibuf);


#endif
