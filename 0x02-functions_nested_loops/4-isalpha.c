#include "main.h"

/**
 *_isalpha - checks if the char is a letter
 *@c: is the char to be checked
 *Return:1 if char is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
