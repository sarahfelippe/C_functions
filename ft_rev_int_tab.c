/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:29:32 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/04 11:29:34 by sfelippe         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	f;

	i = 0;
	f = size - 1;
	while (i < f)
	{
		ft_swap_int_p(&tab[i], &tab[f]);
		i++;
		f--;
	}
}

/*int main(void)
{
    int tab[] = {1,2,3,4,5,6};

	printf("int before function: %d, %d, %d, %d, %d, %d\n", 
		/ tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	ft_rev_int_tab(tab, 6);
	printf("int before function: %d, %d, %d, %d, %d, %d\n", 
		/ tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
}*/
