/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhong-we <lhong-we@student.42singapor      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:33:21 by lhong-we          #+#    #+#             */
/*   Updated: 2024/03/04 16:45:00 by lhong-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	i;

	i = 0;
	printf ("Before: %d\n", i);
	ft_ft(&i);
	printf ("After: %d\n", i);
	return (0);
}
