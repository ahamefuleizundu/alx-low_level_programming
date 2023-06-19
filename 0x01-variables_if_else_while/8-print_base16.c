#include <stdio.h>
/**
 * main - To print all numbers in base 16 as lowercase letters.
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
