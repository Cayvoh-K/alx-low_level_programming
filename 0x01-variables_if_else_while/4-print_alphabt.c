#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* more headers go there */

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char str;

	for (str = 'a'; str <= 'z' ; str++)
	{
		if (str == 'q' || str == 'e')
			continue;
		putchar(str);
	}
	putchar('\n');
	return (0);

}
