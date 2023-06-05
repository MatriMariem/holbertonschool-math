#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number - displays a complex number
 * @c: a complex number
 */

void display_complex_number(complex c)
{
	if (c.re != 0)
	{
		printf("%.0f", c.re);
	}

	if (c.im == -1)
	{
		if (c.re != 0)
		{
			printf(" - i");
		}
		else
		{
			printf("-i");
		}
	}
	else if (c.im == 1)
	{
		if (c.re != 0)
		{
			printf(" + i");
		}
		else
		{
			printf("i");
		}
	}

	else if (c.im < 0)
	{
		if (c.re != 0)
		{
			printf(" - %.0fi", -c.im);
		}
		else
		{
			printf("%.0fi", c.im);
		}
	}
	else if (c.im > 0)
	{
		if (c.re != 0)
		{
			printf(" + %.0fi", c.im);
		}
		else
		{
			printf("%.0fi", c.im);
		}
	}
	else if (c.re == 0 && c.im == 0)
	{
		printf("0");
	}

	printf("\n");

}
