/*
function that tests if a number is prime
	return 0 if number is not prime
	return 1 if number is prime
*/

int	ft_number_prime(unsigned int n)
{
	int div;
	
	if (n <= 1)
		return (0);
	div = 2;
	while (div < n)
	{
		if(n % div == 0)
			return (0);
		div++;
	}
	return(1);
}