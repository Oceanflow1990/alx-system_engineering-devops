#include "main.h"
/**
 * _puts_recursion - function like name;
 * @s: input
 * Return: 0 (successful)
 **/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
		_putchar(*s);
		s++;
		_puts_recursion(s);
}
