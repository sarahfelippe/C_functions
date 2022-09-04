/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:31:31 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/04 11:31:33 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//swap int number only inside function, not outside - check python tutor
void	ft_swap_int_i(int a, int b)
{
	int	temp;

	temp = a;
	a = b;
	b = temp;
}

//swap int numbers also outside of function - check no python tutor
void	ft_swap_int_p(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

//swap strings/char also outside of fuction
void	ft_swap_str(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main(void)
{
    int x = 10;
    int y = 20;
    char s1 = "oi";
    char s2 = "tchau"
    int *p_x = &x;
    int *p_y = &y;

    printf("valores antes da função: %d %d\n", x, y);
    ft_swap_int_i(x, y);
    printf("valores depois da função: %d %d\n", x, y);
    ft_swap_int_p(p_x, p_y);
    printf("valores depois da função: %d %d\n\n", x, y);
}*/
