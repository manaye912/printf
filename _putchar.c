#include <unistd.h>

/**
  * _putchar - writes the character c to standardoutput
  * @c: The character to print
  * Return: success is 1.
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
