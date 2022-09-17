#include <stdio.h>
/*
 * main - Entry point
 * 
 * Description: print base 10 single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
