/*
function replaces all lowercase letters into uppercase case ones
it doesn't replace remaining characters
*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - (97 - 65);
		i++;
	}
	return (str);
}
