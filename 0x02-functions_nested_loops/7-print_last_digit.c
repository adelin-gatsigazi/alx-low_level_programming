#include "main.h"

/**
* print_last_digit - prints the last digit
* @n: the number in question
*
* Return: the last digit
*/
int print_last_digit(int last_digit)
{
int last_digit = n % 10;
if (last_digit < 0)
last_digit *= -1;
putchar(last_digit + '0');
return (last_digit);
}
