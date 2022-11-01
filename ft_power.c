/*
function that calculated the power of 10
*/

long int	ft_power(int base, int power)
{
	long int	result;
	int 		i;

	i = 0;
	result = 1;
	while (i < power)
	{
		result = base * result;
		i++;
	}
	return (result);
}
