#include "main.h"
<<<<<<< HEAD

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
=======
/**
 * get_precision - calculates the precision for printing
 * @format: formatted string in which to print the argument
 * @i: list of arguments to be printed
 * @list: list of arguments
 * Return: precision
>>>>>>> 05540a7e4b7078b7e479fe3eeb59e56851a87b92
 */
int get_precision(const char *format, int *i, va_list list)
{
	int curr_i = *i + 1;
	int precision = -1;

	if (format[curr_i] != '.')
		return (precision);
<<<<<<< HEAD

=======
>>>>>>> 05540a7e4b7078b7e479fe3eeb59e56851a87b92
	precision = 0;

	for (curr_i += 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			precision *= 10;
			precision += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}
<<<<<<< HEAD

	*i = curr_i - 1;

=======
	*i = curr_i - 1;
>>>>>>> 05540a7e4b7078b7e479fe3eeb59e56851a87b92
	return (precision);
}
