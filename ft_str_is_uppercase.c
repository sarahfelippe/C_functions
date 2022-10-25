/*
function checks if all characters are uppercase letters
	return 0 if at least one character is not a uppercase letter 
	return 1 if all characters are uppercase letters or if string is null
*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == 0)
		return (1);
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}
