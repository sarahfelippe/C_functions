/*
function that calculated the power of 10
*/

int	ft_power_10(int x)
{
	int	result;
	int i;

	i = 0;
	result = 1;
	while (i < x)
	{
		result = 10	* result;
		i++;
	}
	return (result);
}
