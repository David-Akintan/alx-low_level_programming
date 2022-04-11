#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main: Entry point
 * Return: 0
*/

int main(void)
{
	char lt;
	for (lt = 'a' ; lt <= 'z' ; lt++)
	{
		if (lt != 'e' && lt != 'q')
		{
			putchar(lt);
		}
	}
	putchar('\n');
	return (0);
}
