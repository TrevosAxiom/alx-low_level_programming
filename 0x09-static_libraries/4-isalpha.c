#include "main.h"
/**
* _isalpha - check the code
* @c: argument
* Return: VOID.
*/
int _isalpha(int c)
{
int j;
if ((c > 96 && c < 123) || (c > 64 && c < 91))
{
j = 1;
}
else
{
j = 0;
}

return (j);
}
