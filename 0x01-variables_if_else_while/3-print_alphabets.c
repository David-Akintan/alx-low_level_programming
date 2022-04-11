#include<stdio.h>

/*
* main - prints the alphabet in lowercase, and then in uppercase,
* followed by a new line.
* Description: prints the alphabet in lowercase, and then in uppercase, 
* followed by a new line.
* Return: 0
*/

int main(void)
{
	char wl;

	char fs;

	for (wl = 'a' ; wl <= 'z' ; wl++)
	{
		putchar(wl);
       	}
	for (fs = 'A' ; fs <= 'Z' ; fs++)
       	{
	       	putchar(fs);
       	}
       	putchar('\n');
       	return (0);
}
