/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhong-we <lhong-we@student.42singapor      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:04:08 by lhong-we          #+#    #+#             */
/*   Updated: 2024/03/03 14:08:24 by lhong-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	ycount;
	int	xcount;

	ycount = 1;
	while (ycount <= y)
	{
		xcount = 1;
		while (xcount <= x)
		{
			if ((xcount == 1 && ycount == 1) || (xcount == x && ycount == 1))
				ft_putchar('A');
			else if ((xcount == 1 && ycount == y)
				|| (xcount == x && ycount == y))
				ft_putchar('C');
			else if ((xcount > 1 && xcount < x) && (ycount > 1 && ycount < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			xcount++;
		}
		ft_putchar('\n');
		ycount++;
	}
}
