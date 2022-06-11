#include "main.h"

/**
 * print_numbers - prints 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int start;

	for (start  = '0'; start <= '9'; start++)
		_putchar(start);
	_putchar('\n');
}
