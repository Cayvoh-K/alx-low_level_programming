#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: to be checked
 * Return: 0 if c is a digit else 1
 */
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
