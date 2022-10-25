/*
function that swaps two pointers (swap by reference)
*/

void	ft_swap_by_reference(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
