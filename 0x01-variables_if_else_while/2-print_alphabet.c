#include <stdio.h>

/**
* main - Entry point
* Description:  prints the alphabet in lowercase, followed by a new line.
* Return:0 
*/

int main(void)
{
	char n;
	for (n = 'a' ; n <= 'z' ; n++) 
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
