#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

/* Buffer size for handling the output */
#define BUFF_SIZE 1024

/* Flags for formatting options */
#define F_MINUS (1 << 0) /* '-' flag */
#define F_PLUS  (1 << 1) /* '+' flag */
#define F_ZERO  (1 << 2) /* '0' flag */
#define F_HASH  (1 << 3) /* '#' flag */
#define F_SPACE (1 << 4) /* ' ' flag */

/* Size specifiers */
#define S_LONG  (1 << 0) /* 'l' size specifier */
#define S_SHORT (1 << 1) /* 'h' size specifier */

/* Macro for marking unused variables to suppress compiler warnings */
#define UNUSED(x) (void)(x)

/**
 * struct fmt_t - Struct to map format specifiers to corresponding functions
 * @fmt: Format specifier character
 * @fn: Pointer to the corresponding printing function
 */
typedef struct fmt_t
{
	char fmt;
	int (*fn)(va_list types, char buffer[],
			int flags, int width, int precision, int size);
} fmt_t;

/* Function prototypes */
int _printf(const char *format, ...);
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
int is_printable(char c);
int append_hexa_code(char ascii_code, char buffer[], int i);
int is_digit(char c);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);
int handle_print(const char *fmt, int *ind, va_list list, char buffer[],
		int flags, int width, int precision, int size);
void print_buffer(char buffer[], int *buff_ind);
int handle_write_char(char c, char buffer[],
		int flags, int width, int precision, int size);
int write_number(int is_negative, int ind, char buffer[],
		int flags, int width, int precision, int size);
int write_num(int ind, char buffer[], int flags, int width, int prec,
		int length, char padd, char extra_c);
int write_unsgnd(int is_negative, int ind, char buffer[],
		int flags, int width, int precision, int size);
int write_pointer(char buffer[], int ind, int length,
		int width, int flags, char padd, char extra_c, int padd_start);
int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_hexa(va_list types, char map_to[], char buffer[],
		int flags, char flag_ch, int width, int precision, int size);
int print_pointer(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_non_printable(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_reverse(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_rot13string(va_list types, char buffer[],
		int flags, int width, int precision, int size);

#endif /* MAIN_H */

