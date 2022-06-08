#include "main.h"

/**
* times_table - check the code
*
* Return: Always 0.
*/
void times_table(void)
{
int num, mul, ans;

for (num = 0; num < 10; num++)
{
mul = 0;
for (mul = 0; mul < 10; mul++)
{
ans = num * mul;
if ((num * mul) > 9)
{
_putchar('0' + (ans / 10));
_putchar('0' + (ans % 10));
}
else if (ans < 10 && mul != 0)
{
_putchar(' ');
_putchar('0' + ans);
}
else if (mul == 0)
{
_putchar('0' + ans);
}

if (mul < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
