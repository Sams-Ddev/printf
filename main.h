#ifndef _MAIN_H_
#define _MAIN_H_


#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


int _printf(const char *format, ...);
int get_print_func(const char *format, int i);
void handl_buf(char *buffer, char c, unsigned int ibuf);
void print_buf(char *buffer, unsigned int ibuf);


#endif
