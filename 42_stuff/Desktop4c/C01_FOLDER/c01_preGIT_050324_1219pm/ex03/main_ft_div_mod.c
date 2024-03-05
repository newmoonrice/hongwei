/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_div_mod.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhong-we <lhong-we@student.42singapor      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:50:35 by lhong-we          #+#    #+#             */
/*   Updated: 2024/03/04 17:58:48 by lhong-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div_result;
	int	mod_result;

	a = 13;
	b = 3;
	ft_div_mod(a, b, &div_result, &mod_result);
	printf ("division: %d\n", div_result);
	printf ("remainder: %d\n", mod_result);
	return (0);
}
