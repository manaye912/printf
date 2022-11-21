#ifndef _MAIN_H_
#define _MAIN_H_

int _printf(const char *format, ...);

/**
* get_func - search and return the correct function
* @s: array to check
* Return: return a function
**/
int (*get_func(char s))(va_list);
int binary(va_list va);
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
int print_S(va_list S);
int print_r(va_list r);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_o(va_list o);
int print_b(va_list b);


#endif
