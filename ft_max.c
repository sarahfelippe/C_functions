/*
function that identifies the highest integer in a range and returns that value
*/

#include <stdarg.h>

int	ft_max(int count, ...)
{
	va_list	args;
	int		max;
	int		temp;
	int		i;

	va_start(args, count);
	max = 0;
	i = 0;
	while (i < count)
	{
		temp = va_arg(args, int);
		if (i == 0)
			max = temp;
		else if (temp > max)
			max = temp;
		i++;
	}
	va_end(args);
	return (max);
}