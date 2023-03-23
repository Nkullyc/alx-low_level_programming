#include "main.h"

/**
 * _isalpha - check for alphabetic characte
 * @c: The charactor to be checked
 * Return: 1 for alphabetic charater 0 for anything else
 */

int _isalpha(int c)

{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
