#include "main.h"
/**
* _islower - check the code
* @c: argument
* Return: VOID.
*/
int _islower(int c)
{
int j;
if (c > 96 && c < 123)
{
j = 1;
}
else
{
j = 0;
}

return (j);
}
