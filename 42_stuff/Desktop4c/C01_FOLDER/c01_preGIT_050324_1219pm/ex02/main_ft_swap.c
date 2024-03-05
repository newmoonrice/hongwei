/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhong-we <lhong-we@student.42singapor      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:11:43 by lhong-we          #+#    #+#             */
/*   Updated: 2024/03/04 17:26:45 by lhong-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 20;

	printf("before swap: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("after swap: x = %d, y = %d\n", x, y);
	return (0);
}
