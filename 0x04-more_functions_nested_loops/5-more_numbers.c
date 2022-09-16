#include "main.h"

/**
* more_numbers -> printing more numbers
*/
void more_numbers(void)
{
int a, y;

for (a = 0; a < 10; a++)
{
for (b = 0; b < 15; b++)
{
if (b >= 10)
_putchar((b / 10) + '0');
_putchar((b % 10) + '0');
_putchar(b + '0');
}
_putchar('\n');
}
}
