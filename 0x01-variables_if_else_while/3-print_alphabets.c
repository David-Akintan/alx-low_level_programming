#include<stdio.h>

 /*
  * main - print if the number is postive, zero, or negative
  * Description: using the main function
  * this program prints "Programming is positive, zero, or negative"
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
