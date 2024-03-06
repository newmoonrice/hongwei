/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhong-we <lhong-we@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:23:52 by lhong-we          #+#    #+#             */
/*   Updated: 2024/03/06 00:05:58 by newmoonrice      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_print_comb(void)
{
	char	a,b,c;

	a = 0;
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				if (a != 7 || b != '8' || c != '9')
				{
					write (1, ",", 1);
					write (1, " ", 1);
			}
			c++;
		}
		b++;
	}
	a++;
}
write(1,"\n", 1);
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
} */
