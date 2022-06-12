#include <stdio.h>

/**
 * main - prints numbers between 00 to 89.
 *
 * Return: Always 0
 */
int main(void)
{
	int num_1, num_2;

	num_1 = 48;
	num_2 = 48;

	while (num_2 < 58)
	{
		num_1 = 48;
		while (num_1 < 58)
		{
			if (num_2 != num_1 && num_2 < num_1)
			{
				putchar(num_2);
				putchar(num_1);
				if (num_1 == 57 && num_2 == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			num_1++;
		}
		num_2++;
	}
	putchar('\n');
	return (0);
}
