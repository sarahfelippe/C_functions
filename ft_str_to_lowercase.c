/*
function replaces all uppercase letters into lowercase case ones
it doesn't replace remaining characters
*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + (97 - 65);
		i++;
	}
	return (str);
}
