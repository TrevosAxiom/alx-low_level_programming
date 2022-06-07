#include "main.h"
/**
* jack_bauer - check the code
* void: void argument
* Return: VOID.
*/
void jack_bauer(void)
{

int hr, _hr, mt, _mt, cond = 10;

for (hr = 0; hr <= 2; hr++)
{
if (hr == 2)
{
cond = 4;
}
_hr = 0;
for (_hr = 0; _hr < cond; _hr++)
{
mt = 0;
for (mt = 0; mt < 6; mt++)
{
_mt = 0;
for (_mt = 0; _mt < 10; _mt++)
{
_putchar('0' + hr);
_putchar('0' + _hr);
_putchar(':');
_putchar('0' + mt);
_putchar('0' + _mt);
_putchar('\n');
}
}
}
}

}
