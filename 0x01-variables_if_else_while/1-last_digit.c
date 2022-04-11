#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *
 * * main - prints if the number is postive, negative, or zero
 *
 * * Description: main function prints
 *   "Programming is positive, negative, or zero"
 *
 * * Return: 0
 *
 * */

int main(void)
{
	int n;
	int count;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	count = n % 10;

	if (count > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, count);

	}
	else if (count == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, count);

	}
	else if (count < 6 && count != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, count);
	}
	return (0);
}
