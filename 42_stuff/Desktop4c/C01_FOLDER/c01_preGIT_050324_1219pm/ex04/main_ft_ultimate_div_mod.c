/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_ultimate_div_mod.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhong-we <lhong-we@student.42singapor      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:12:24 by lhong-we          #+#    #+#             */
/*   Updated: 2024/03/04 19:14:43 by lhong-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 13;
	b = 4;
	printf ("division: a =  %d, b = %d/n.\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf ("remainder: a = %d, %d/n", a, b);
	return (0);
}
