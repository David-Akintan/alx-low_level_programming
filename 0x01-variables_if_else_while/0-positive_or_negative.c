#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *
 * * main - assigns a random number to int n
 *
 * * it executes the program, and prints n
 *
 * * Return: Always 0 (Success)
 *
 * */

int main(void) 
{ 
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
		printf("%d is positive\n" );
	}
	else if (n == 0) {
		printf("%d is zero\n" );
	}
	else if (n < 0) {
		printf("%d is negative\n" );
	}
	return (0);
}