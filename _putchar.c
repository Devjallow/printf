#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: The char to print to stdout
 *
 * Return: On success 1.
 * On error, -1 is return, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
