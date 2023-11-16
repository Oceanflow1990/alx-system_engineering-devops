#include "main.c"
/**
 * _put_recursion - function like puts();
 * @s: innput
 **/

void_puts_recursion(char*s);
{
	if(s*)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
