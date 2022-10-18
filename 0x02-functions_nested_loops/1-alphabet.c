#include "main.h"

/**
*print_alphabet -  prints all the alphabets in lowwercase
*/
void print_alphabet(void);
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}
