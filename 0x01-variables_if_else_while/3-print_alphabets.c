#include <stdio.h>
#include <ctype.h>

/*
 * main - My program entry point
 * Return: returns 0
 *
 *
 */

int main(void)

{
	char myChar;

	for (myChar = 'A'; myChar <= 'Z'; myChar++)
	{
		putchar(tolower(myChar));
	}
	for (myChar = 'A'; myChar <= 'Z'; myChar++)
	{
		putchar(toupper(myChar));
	}
	putchar('\n');
	return (0);

}
