#include "main.h"
/**
 * _put_recursion - function like name;
 * @s: input
 * Return: 0 (successful)
 **/
void _puts_recursion(char *s);
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
