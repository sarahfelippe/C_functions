/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:29:43 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/04 11:29:44 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap_int_p(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// i is the initial index
// b is the bubble sort index
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	b;

	b = 0;
	while (b < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
				ft_swap_int_p(&tab[i], &tab[i + 1]);
			i++;
		}
		b++;
	}
}

/*int main(void)
{
    int tab[] = {8,5,9,4,3,1};

	printf("int before function: %d, %d, %d, %d, %d, %d\n", 
		/ tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	ft_sort_int_tab(tab, 6);
	printf("int after function: %d, %d, %d, %d, %d, %d\n", 
		/ tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
}*/
