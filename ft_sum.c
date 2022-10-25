/*
function that sums a variable number of integers and returns the sum
*/

#include <stdarg.h>

int	ft_sum(int count, ...)
{
	va_list	args;
	int		sum;
	int		i;

	va_start(args, count);
	sum = 0;
	i = 0;
	while(i < count)
	{
		sum = sum + va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}