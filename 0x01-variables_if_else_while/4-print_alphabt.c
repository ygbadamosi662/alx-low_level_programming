#include <stdio.h>

/**
 * main - prints the alphabets in lowwercase except letters 'q' and 'e'
 *
 * Returns: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if ((letter != 'q') && (letter != 'e'))
		{
			putchar(letter);
		}
	}

	putchar('\n');


	return (0);
}
