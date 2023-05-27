#include "main.h"
<<<<<<< HEAD

/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
=======
/**
 * get_size - calculates the size to cast the argument
 * @format: formatted string in which to print the arguments
 * @i: list of arguments to be printed
 * Return: size
>>>>>>> 05540a7e4b7078b7e479fe3eeb59e56851a87b92
 */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;
<<<<<<< HEAD

	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

=======
	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i - 1;
>>>>>>> 05540a7e4b7078b7e479fe3eeb59e56851a87b92
	return (size);
}
