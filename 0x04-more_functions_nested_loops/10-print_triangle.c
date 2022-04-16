#include "main.h"

/**
 * print_triangle - print triangle with # with given size
 * @size: size of triangle to be drawn
*/
void print_triangle(int size)
{
	int height;

	int width;

	int draw;

	if (size <= 0)
		_putchar('\n');
	for (height = 1; height <= size; height++)
	{
		for (width = 1; width <= (size - height); width++)
			_putchar(' ');

		for (draw = 1; draw <= height; draw++)
			_putchar('#');

		_putchar('\n');
	}
}
