#include "main.h"

/**
* more_numbers - printing numbers to 14
*
* Return: nothing
*/
void more_numbers(void)
{
int x, y;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 14; y++)
{
if (y > 9)
{
_putchar((y / 10) + '0');
}
_putchar((y % 10) + '0');
}
_putchar('10');
}
}
