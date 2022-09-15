#include "main.h"

/**
* _isalpha - function that checks for alphabetical letters
* @c: is the int that will make the argument of the function
* Return: 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
		return (0);
}
