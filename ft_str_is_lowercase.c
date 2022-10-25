/*
function checks if all characters are lowercase letters
	return 0 if at least one character is not a lowercase letter 
	return 1 if all characters are lowercase letters or if string is null
*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == 0)
		return (1);
	while (str[i] != 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}
