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

#endif
