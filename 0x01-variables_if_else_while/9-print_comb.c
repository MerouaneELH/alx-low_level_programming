#include <stdio.h>
#include <string.h>
/**
 * main - Prints alpha form a to z
 *
 * Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
