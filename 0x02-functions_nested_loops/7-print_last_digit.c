#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @a: number to print last digit of number
 * Return: thlast digit of a
 */
int print_last_digit(int a)
{
	_putchar((a % 10) + '0');
	return (a % 10);
}
