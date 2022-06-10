#include "main.h"

/**
 * _isupper - checks if c is upper or not
 * @c: Value parameter to be checked
 * Return: 1 if c is upper else 0
 */
int _isupper(int c)
{
	char uppercase;

	int isupper = 0;

	for (uppercase = 'A' ; uppercase <= 'Z' ; uppercase++)
		if (c == uppercase)
			isupper = 1;
	return (isupper);
}
