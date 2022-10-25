/*
function that sorts an array.
*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	v;

	v = 0;
	while (v != size - 1)
	{
		i = 0;
		while (i != size - 1)
		{
			if (tab[i] > tab[i +1])
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
	v++;
	}
}
